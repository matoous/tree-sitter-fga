const RELATION_PREC = {
  or: 1,
  and: 2,
  butNot: 3,
};

const SIMPLE_TYPES = [
  'bool',
  'string',
  'int',
  'uint',
  'double',
  'duration',
  'timestamp',
  'ipaddress',
];

export default grammar({
  name: 'fga',

  extras: ($) => [$.comment, /[\s\f]+/],

  word: ($) => $.identifier,

  supertypes: ($) => [$.relation_term],

  rules: {
    source_file: ($) =>
      choice(
        seq(alias($.quoted_schema, $.schema), optional($.contents)),
        seq($.model, $.schema, repeat(choice($.type_declaration, $.condition_declaration))),
        seq($.module, repeat(choice($.type_declaration, $.condition_declaration))),
      ),

    model: () => 'model',

    module: ($) => seq('module', field('name', $.identifier)),

    schema: ($) => seq('schema', field('version', $.version)),

    quoted_schema: ($) => seq('schema', ':', $.quoted_version),

    version: () => /\d+\.\d+/,

    quoted_version: ($) => choice(seq('"', $.version, '"'), seq('\'', $.version, '\'')),

    contents: ($) => seq('contents', ':', repeat(seq('-', $.file))),

    file: () => token(/[^\s][^\r\n]*/),

    type_declaration: ($) =>
      seq(
        optional('extend'),
        'type',
        field('name', $.extended_identifier),
        optional($.relations),
      ),

    relations: ($) => seq('relations', repeat1($.definition)),

    definition: ($) =>
      seq('define', field('relation', $.extended_identifier), ':', field('value', $.relation_def)),

    relation_def: ($) =>
      choice(
        $.binary_relation,
        $.relation_term,
      ),

    relation_term: ($) =>
      choice(
        $.parenthesized_relation,
        $.direct_relationship,
        $.indirect_relation,
        $.extended_identifier,
      ),

    binary_relation: ($) =>
      choice(
        prec.left(
          RELATION_PREC.or,
          seq(
            field('left', $.relation_def),
            field('operator', alias('or', $.operator)),
            field('right', $.relation_def),
          ),
        ),
        prec.left(
          RELATION_PREC.and,
          seq(
            field('left', $.relation_def),
            field('operator', alias('and', $.operator)),
            field('right', $.relation_def),
          ),
        ),
        prec.left(
          RELATION_PREC.butNot,
          seq(
            field('left', $.relation_def),
            field('operator', alias('but not', $.operator)),
            field('right', $.relation_def),
          ),
        ),
      ),

    operator: () => choice('or', 'and', 'but not'),

    parenthesized_relation: ($) => seq('(', $.relation_def, ')'),

    direct_relationship: ($) =>
      seq('[', optional(commaSep1($.direct_relationship_item)), ']'),

    direct_relationship_item: ($) =>
      seq(choice($.extended_identifier, $.relation_ref, $.all), optional($.conditional)),

    relation_ref: () =>
      token(prec(2, /[A-Za-z_][A-Za-z0-9_./-]*#[A-Za-z_][A-Za-z0-9_./-]*/)),

    all: () => token(prec(2, /[A-Za-z_][A-Za-z0-9_./-]*:\*/)),

    conditional: ($) => seq('with', field('condition', $.identifier)),

    indirect_relation: ($) =>
      seq(field('relation', $.extended_identifier), 'from', field('tupleset', $.extended_identifier)),

    condition_declaration: ($) =>
      seq(
        'condition',
        field('name', $.identifier),
        '(',
        optional(commaSep1($.param)),
        ')',
        field('body', $.condition_body),
      ),

    param: ($) => seq(field('name', $.identifier), ':', field('type', $.type_identifier)),

    type_identifier: ($) =>
      choice($.simple_type_identifier, $.container_type_identifier),

    simple_type_identifier: () => choice(...SIMPLE_TYPES),

    container_type_identifier: ($) =>
      seq(choice('map', 'list'), '<', $.simple_type_identifier, '>'),

    condition_body: ($) => seq('{', repeat($._condition_item), '}'),

    _condition_item: ($) =>
      choice(
        $.parenthesized_condition,
        $.bracket_condition,
        $.braced_condition,
        $.bytes,
        $.string,
        $.float,
        $.uint,
        $.int,
        $.boolean,
        $.null,
        $.identifier,
        $.condition_operator,
        '.',
        ',',
        ':',
        '?',
      ),

    parenthesized_condition: ($) => seq('(', repeat($._condition_item), ')'),

    bracket_condition: ($) => seq('[', repeat($._condition_item), ']'),

    braced_condition: ($) => seq('{', repeat($._condition_item), '}'),

    condition_operator: () =>
      token(choice('==', '!=', '<=', '>=', '&&', '||', 'in', '<', '>', '-', '!', '+', '*', '/', '%')),

    boolean: () => choice('true', 'false'),

    null: () => 'null',

    float: () => token(choice(/\d+\.\d+([eE][+-]?\d+)?/, /\d+[eE][+-]?\d+/, /\.\d+([eE][+-]?\d+)?/)),

    int: () => token(choice(/0x[0-9a-fA-F]+/, /\d+/)),

    uint: () => token(choice(/0x[0-9a-fA-F]+[uU]/, /\d+[uU]/)),

    bytes: () =>
      token(
        choice(
          /[bB]"([^"\\\r\n]|\\.)*"/,
          /[bB]'([^'\\\r\n]|\\.)*'/,
        ),
      ),

    string: () =>
      token(
        choice(
          /"([^"\\\r\n]|\\.)*"/,
          /'([^'\\\r\n]|\\.)*'/,
        ),
      ),

    identifier: () => /[A-Za-z_][A-Za-z0-9_-]*/,

    extended_identifier: () => token(prec(1, /[A-Za-z_][A-Za-z0-9_./-]*/)),

    comment: () => token(seq('#', /[^\r\n]*/)),
  },
});

/**
 * Creates a comma-separated list of one or more items.
 *
 * @param {RuleOrLiteral} rule
 */
function commaSep1(rule) {
  return seq(rule, repeat(seq(',', rule)));
}
