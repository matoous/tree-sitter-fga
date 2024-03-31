// https://openfga.dev/docs/configuration-language
module.exports = grammar({
  name: "fga",

  extras: $ => [
    $.comment,
    /\s/,
  ],

  rules: {
    source_file: $ => seq(
      $.model,
      repeat(choice($.type_declaration, $.condition_declaration)),
    ),

    model: $ => seq('model', '\n', $.schema),

    schema: $ => seq ('schema', $.version),

    version: $ => /[0-9]+\.[0-9]+/,

    type_declaration: $ => seq (
      'type', $.identifier, '\n',
      optional($.relations),
    ),

    relations: $ => seq (
      'relations',
      repeat($.definition),
    ),

    definition: $ => seq(
      'define',
      field('relation', $.identifier),
      ':',
      $.relation_def,
    ),

    relation_def: $ => choice(
      $.direct_relationship,
      seq(
        optional(seq($.direct_relationship, $.operator)),
        list(
          choice($.identifier, $.indirect_relation),
          $.operator
        )
      )
    ),

    operator: $ => choice('or', 'and'),

    direct_relationship: $ => seq(
      '[',
      list(
        seq(
          choice($.identifier, $.relation_ref, $.all),
          optional($.conditional),
        ),
        ','
      ),
      ']',
    ),

    conditional: $ => seq('with', $.identifier),

    indirect_relation: $ => seq($.identifier, 'from', $.identifier),

    relation_ref: $ => seq($.identifier, token.immediate(prec(1, '#')), $.identifier),
    
    all: $ => seq($.identifier, token.immediate(':*')),

    condition_declaration: $ => seq(
      'condition',
      $.identifier,
      '(',
      optional(list($.param, ',')),
      ')',
      $.condition_body,
    ),

    param: $ => seq(
      $.identifier,
      ':',
      $.param_type,
    ),

    param_type: $ => choice(
      'duration',
      'timestamp',
      'string',
      'ipaddress',
    ),

    condition_body: $ => seq(
      '{',
      choice(
        $.expression,
        seq(
          $.expression,
          choice('<', '>'),
          $.expression,
        ),
      ),
      '}',
    ),

    expression: $ => choice(
      list($.identifier, $.condition_operator),
      $.fn,
    ),

    fn: $ => seq(
      $.identifier,
      token.immediate('.'),
      field('method', $.identifier),
      '(',
      optional(list($.identifier, ',')),
      ')',
    ),

    condition_operator: $ => field('operator', choice('+', '-')),

    identifier: $ => /[a-zA-Z_]+/,

    comment: $ => token(seq('#', /.+/)),
  }
});

/**
 * Creates a rule to match one or more of the rules separated by a separator
 *
 * @param {rile} rule
 * @param {separator} rule
 *
 * @return {SeqRule}
 *
 */
function list(rule, separator) {
  return seq(rule, optional(repeat(seq(separator, rule))));
}
