#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 122
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 97
#define ALIAS_COUNT 0
#define TOKEN_COUNT 62
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 10
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 8

enum ts_symbol_identifiers {
  sym_identifier = 1,
  anon_sym_schema_COLON = 2,
  anon_sym_contents_COLON = 3,
  anon_sym_DASH = 4,
  sym_file = 5,
  anon_sym_schema = 6,
  sym_version = 7,
  anon_sym_SQUOTE = 8,
  anon_sym_model = 9,
  anon_sym_LF = 10,
  anon_sym_module = 11,
  anon_sym_extend = 12,
  anon_sym_type = 13,
  anon_sym_relations = 14,
  anon_sym_define = 15,
  anon_sym_COLON = 16,
  anon_sym_or = 17,
  anon_sym_and = 18,
  anon_sym_butnot = 19,
  anon_sym_LBRACK = 20,
  anon_sym_COMMA = 21,
  anon_sym_RBRACK = 22,
  anon_sym_with = 23,
  anon_sym_from = 24,
  anon_sym_POUND = 25,
  anon_sym_COLON_STAR = 26,
  anon_sym_condition = 27,
  anon_sym_LPAREN = 28,
  anon_sym_RPAREN = 29,
  anon_sym_string = 30,
  anon_sym_int = 31,
  anon_sym_map = 32,
  anon_sym_uint = 33,
  anon_sym_list = 34,
  anon_sym_timestamp = 35,
  anon_sym_bool = 36,
  anon_sym_duration = 37,
  anon_sym_double = 38,
  anon_sym_ipaddress = 39,
  anon_sym_LBRACE = 40,
  anon_sym_RBRACE = 41,
  anon_sym_STAR = 42,
  anon_sym_SLASH = 43,
  anon_sym_PERCENT = 44,
  anon_sym_LT_LT = 45,
  anon_sym_GT_GT = 46,
  anon_sym_AMP = 47,
  anon_sym_AMP_CARET = 48,
  anon_sym_PLUS = 49,
  anon_sym_PIPE = 50,
  anon_sym_CARET = 51,
  anon_sym_EQ_EQ = 52,
  anon_sym_BANG_EQ = 53,
  anon_sym_LT = 54,
  anon_sym_LT_EQ = 55,
  anon_sym_GT = 56,
  anon_sym_GT_EQ = 57,
  anon_sym_AMP_AMP = 58,
  anon_sym_PIPE_PIPE = 59,
  anon_sym_DOT = 60,
  sym_comment = 61,
  sym_source_file = 62,
  sym__project_file = 63,
  sym__module_file = 64,
  sym_quoted_schema = 65,
  sym_contents = 66,
  sym_schema = 67,
  sym__quoted_version = 68,
  sym_model = 69,
  sym_module = 70,
  sym_type_declaration = 71,
  sym_relations = 72,
  sym_definition = 73,
  sym_relation_def = 74,
  sym_operator = 75,
  sym_direct_relationship = 76,
  sym_conditional = 77,
  sym_indirect_relation = 78,
  sym_relation_ref = 79,
  sym_all = 80,
  sym_condition_declaration = 81,
  sym_param = 82,
  sym_type_identifier = 83,
  sym_condition_body = 84,
  sym_binary_expression = 85,
  sym_call_expression = 86,
  sym_selector_expression = 87,
  sym_argument_list = 88,
  sym__expression = 89,
  aux_sym__module_file_repeat1 = 90,
  aux_sym_contents_repeat1 = 91,
  aux_sym_relations_repeat1 = 92,
  aux_sym_relation_def_repeat1 = 93,
  aux_sym_direct_relationship_repeat1 = 94,
  aux_sym_condition_declaration_repeat1 = 95,
  aux_sym_argument_list_repeat1 = 96,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_schema_COLON] = "schema:",
  [anon_sym_contents_COLON] = "contents:",
  [anon_sym_DASH] = "-",
  [sym_file] = "file",
  [anon_sym_schema] = "schema",
  [sym_version] = "version",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_model] = "model",
  [anon_sym_LF] = "\n",
  [anon_sym_module] = "module",
  [anon_sym_extend] = "extend",
  [anon_sym_type] = "type",
  [anon_sym_relations] = "relations",
  [anon_sym_define] = "define",
  [anon_sym_COLON] = ":",
  [anon_sym_or] = "or",
  [anon_sym_and] = "and",
  [anon_sym_butnot] = "but not",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [anon_sym_with] = "with",
  [anon_sym_from] = "from",
  [anon_sym_POUND] = "#",
  [anon_sym_COLON_STAR] = ":*",
  [anon_sym_condition] = "condition",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_string] = "string",
  [anon_sym_int] = "int",
  [anon_sym_map] = "map",
  [anon_sym_uint] = "uint",
  [anon_sym_list] = "list",
  [anon_sym_timestamp] = "timestamp",
  [anon_sym_bool] = "bool",
  [anon_sym_duration] = "duration",
  [anon_sym_double] = "double",
  [anon_sym_ipaddress] = "ipaddress",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_AMP] = "&",
  [anon_sym_AMP_CARET] = "&^",
  [anon_sym_PLUS] = "+",
  [anon_sym_PIPE] = "|",
  [anon_sym_CARET] = "^",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_DOT] = ".",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym__project_file] = "_project_file",
  [sym__module_file] = "_module_file",
  [sym_quoted_schema] = "schema",
  [sym_contents] = "contents",
  [sym_schema] = "schema",
  [sym__quoted_version] = "_quoted_version",
  [sym_model] = "model",
  [sym_module] = "module",
  [sym_type_declaration] = "type_declaration",
  [sym_relations] = "relations",
  [sym_definition] = "definition",
  [sym_relation_def] = "relation_def",
  [sym_operator] = "operator",
  [sym_direct_relationship] = "direct_relationship",
  [sym_conditional] = "conditional",
  [sym_indirect_relation] = "indirect_relation",
  [sym_relation_ref] = "relation_ref",
  [sym_all] = "all",
  [sym_condition_declaration] = "condition_declaration",
  [sym_param] = "param",
  [sym_type_identifier] = "type_identifier",
  [sym_condition_body] = "condition_body",
  [sym_binary_expression] = "binary_expression",
  [sym_call_expression] = "call_expression",
  [sym_selector_expression] = "selector_expression",
  [sym_argument_list] = "argument_list",
  [sym__expression] = "_expression",
  [aux_sym__module_file_repeat1] = "_module_file_repeat1",
  [aux_sym_contents_repeat1] = "contents_repeat1",
  [aux_sym_relations_repeat1] = "relations_repeat1",
  [aux_sym_relation_def_repeat1] = "relation_def_repeat1",
  [aux_sym_direct_relationship_repeat1] = "direct_relationship_repeat1",
  [aux_sym_condition_declaration_repeat1] = "condition_declaration_repeat1",
  [aux_sym_argument_list_repeat1] = "argument_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_schema_COLON] = anon_sym_schema_COLON,
  [anon_sym_contents_COLON] = anon_sym_contents_COLON,
  [anon_sym_DASH] = anon_sym_DASH,
  [sym_file] = sym_file,
  [anon_sym_schema] = anon_sym_schema,
  [sym_version] = sym_version,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_model] = anon_sym_model,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_module] = anon_sym_module,
  [anon_sym_extend] = anon_sym_extend,
  [anon_sym_type] = anon_sym_type,
  [anon_sym_relations] = anon_sym_relations,
  [anon_sym_define] = anon_sym_define,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_butnot] = anon_sym_butnot,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_with] = anon_sym_with,
  [anon_sym_from] = anon_sym_from,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_COLON_STAR] = anon_sym_COLON_STAR,
  [anon_sym_condition] = anon_sym_condition,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_string] = anon_sym_string,
  [anon_sym_int] = anon_sym_int,
  [anon_sym_map] = anon_sym_map,
  [anon_sym_uint] = anon_sym_uint,
  [anon_sym_list] = anon_sym_list,
  [anon_sym_timestamp] = anon_sym_timestamp,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_duration] = anon_sym_duration,
  [anon_sym_double] = anon_sym_double,
  [anon_sym_ipaddress] = anon_sym_ipaddress,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_AMP_CARET] = anon_sym_AMP_CARET,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym__project_file] = sym__project_file,
  [sym__module_file] = sym__module_file,
  [sym_quoted_schema] = sym_schema,
  [sym_contents] = sym_contents,
  [sym_schema] = sym_schema,
  [sym__quoted_version] = sym__quoted_version,
  [sym_model] = sym_model,
  [sym_module] = sym_module,
  [sym_type_declaration] = sym_type_declaration,
  [sym_relations] = sym_relations,
  [sym_definition] = sym_definition,
  [sym_relation_def] = sym_relation_def,
  [sym_operator] = sym_operator,
  [sym_direct_relationship] = sym_direct_relationship,
  [sym_conditional] = sym_conditional,
  [sym_indirect_relation] = sym_indirect_relation,
  [sym_relation_ref] = sym_relation_ref,
  [sym_all] = sym_all,
  [sym_condition_declaration] = sym_condition_declaration,
  [sym_param] = sym_param,
  [sym_type_identifier] = sym_type_identifier,
  [sym_condition_body] = sym_condition_body,
  [sym_binary_expression] = sym_binary_expression,
  [sym_call_expression] = sym_call_expression,
  [sym_selector_expression] = sym_selector_expression,
  [sym_argument_list] = sym_argument_list,
  [sym__expression] = sym__expression,
  [aux_sym__module_file_repeat1] = aux_sym__module_file_repeat1,
  [aux_sym_contents_repeat1] = aux_sym_contents_repeat1,
  [aux_sym_relations_repeat1] = aux_sym_relations_repeat1,
  [aux_sym_relation_def_repeat1] = aux_sym_relation_def_repeat1,
  [aux_sym_direct_relationship_repeat1] = aux_sym_direct_relationship_repeat1,
  [aux_sym_condition_declaration_repeat1] = aux_sym_condition_declaration_repeat1,
  [aux_sym_argument_list_repeat1] = aux_sym_argument_list_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_schema_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_contents_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [sym_file] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_schema] = {
    .visible = true,
    .named = false,
  },
  [sym_version] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_model] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_module] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extend] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_relations] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_define] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_butnot] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_with] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_from] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_condition] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_string] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_map] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_list] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_timestamp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_duration] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_double] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ipaddress] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__project_file] = {
    .visible = false,
    .named = true,
  },
  [sym__module_file] = {
    .visible = false,
    .named = true,
  },
  [sym_quoted_schema] = {
    .visible = true,
    .named = true,
  },
  [sym_contents] = {
    .visible = true,
    .named = true,
  },
  [sym_schema] = {
    .visible = true,
    .named = true,
  },
  [sym__quoted_version] = {
    .visible = false,
    .named = true,
  },
  [sym_model] = {
    .visible = true,
    .named = true,
  },
  [sym_module] = {
    .visible = true,
    .named = true,
  },
  [sym_type_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_relations] = {
    .visible = true,
    .named = true,
  },
  [sym_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_relation_def] = {
    .visible = true,
    .named = true,
  },
  [sym_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_direct_relationship] = {
    .visible = true,
    .named = true,
  },
  [sym_conditional] = {
    .visible = true,
    .named = true,
  },
  [sym_indirect_relation] = {
    .visible = true,
    .named = true,
  },
  [sym_relation_ref] = {
    .visible = true,
    .named = true,
  },
  [sym_all] = {
    .visible = true,
    .named = true,
  },
  [sym_condition_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_param] = {
    .visible = true,
    .named = true,
  },
  [sym_type_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_condition_body] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_call_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_selector_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_argument_list] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [aux_sym__module_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_contents_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_relations_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_relation_def_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_direct_relationship_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_condition_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_argument_list_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_arguments = 1,
  field_body = 2,
  field_field = 3,
  field_function = 4,
  field_left = 5,
  field_name = 6,
  field_operand = 7,
  field_operator = 8,
  field_relation = 9,
  field_right = 10,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_arguments] = "arguments",
  [field_body] = "body",
  [field_field] = "field",
  [field_function] = "function",
  [field_left] = "left",
  [field_name] = "name",
  [field_operand] = "operand",
  [field_operator] = "operator",
  [field_relation] = "relation",
  [field_right] = "right",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 2},
  [3] = {.index = 4, .length = 2},
  [4] = {.index = 6, .length = 2},
  [5] = {.index = 8, .length = 1},
  [6] = {.index = 9, .length = 2},
  [7] = {.index = 11, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_body, 4},
    {field_name, 1},
  [2] =
    {field_body, 5},
    {field_name, 1},
  [4] =
    {field_arguments, 1},
    {field_function, 0},
  [6] =
    {field_body, 6},
    {field_name, 1},
  [8] =
    {field_relation, 1},
  [9] =
    {field_field, 2},
    {field_operand, 0},
  [11] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(31);
      ADVANCE_MAP(
        '!', 13,
        '#', 45,
        '%', 53,
        '&', 56,
        '\'', 37,
        '(', 47,
        ')', 48,
        '*', 51,
        '+', 58,
        ',', 43,
        '-', 34,
        '.', 69,
        '/', 52,
        ':', 40,
        '<', 63,
        '=', 14,
        '>', 65,
        '[', 42,
        ']', 44,
        '^', 60,
        'b', 86,
        'c', 81,
        's', 74,
        '{', 49,
        '|', 59,
        '}', 50,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(38);
      if (lookahead == '#') ADVANCE(26);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(3);
      if (lookahead == '#') ADVANCE(9);
      if (lookahead == '.') ADVANCE(10);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3);
      if (lookahead == '#') ADVANCE(9);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(45);
      if (lookahead == ',') ADVANCE(43);
      if (lookahead == ':') ADVANCE(7);
      if (lookahead == ']') ADVANCE(44);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(26);
      if (lookahead == ',') ADVANCE(43);
      if (lookahead == ']') ADVANCE(44);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(26);
      if (lookahead == 'c') ADVANCE(20);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(46);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(88);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(33);
      END_STATE();
    case 13:
      if (lookahead == '=') ADVANCE(62);
      END_STATE();
    case 14:
      if (lookahead == '=') ADVANCE(61);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 16:
      if (lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 17:
      if (lookahead == 'n') ADVANCE(23);
      END_STATE();
    case 18:
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 19:
      if (lookahead == 'o') ADVANCE(22);
      END_STATE();
    case 20:
      if (lookahead == 'o') ADVANCE(17);
      END_STATE();
    case 21:
      if (lookahead == 's') ADVANCE(12);
      END_STATE();
    case 22:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 23:
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 24:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 26:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(90);
      END_STATE();
    case 27:
      if (eof) ADVANCE(31);
      ADVANCE_MAP(
        '!', 13,
        '#', 26,
        '%', 53,
        '&', 56,
        '\'', 37,
        '(', 47,
        ')', 48,
        '*', 51,
        '+', 58,
        ',', 43,
        '-', 34,
        '.', 69,
        '/', 52,
        ':', 39,
        '<', 63,
        '=', 14,
        '>', 65,
        '[', 42,
        ']', 44,
        '^', 60,
        'b', 86,
        'c', 81,
        's', 74,
        '{', 49,
        '|', 59,
        '}', 50,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 28:
      if (eof) ADVANCE(31);
      ADVANCE_MAP(
        '!', 13,
        '#', 26,
        '%', 53,
        '&', 56,
        '\'', 37,
        '(', 47,
        ')', 48,
        '*', 51,
        '+', 58,
        ',', 43,
        '-', 34,
        '.', 69,
        '/', 52,
        ':', 39,
        '<', 63,
        '=', 14,
        '>', 65,
        ']', 44,
        '^', 60,
        's', 74,
        '{', 49,
        '|', 59,
        '}', 50,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 29:
      if (eof) ADVANCE(31);
      if (lookahead == '#') ADVANCE(26);
      if (lookahead == ')') ADVANCE(48);
      if (lookahead == ',') ADVANCE(43);
      if (lookahead == '[') ADVANCE(42);
      if (lookahead == ']') ADVANCE(44);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(29);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 30:
      if (eof) ADVANCE(31);
      if (lookahead == '#') ADVANCE(26);
      if (lookahead == 'b') ADVANCE(86);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(30);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_schema_COLON);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_contents_COLON);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_file);
      if (lookahead == '.') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_version);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '*') ADVANCE(46);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_butnot);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_COLON_STAR);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(67);
      if (lookahead == '^') ADVANCE(57);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_AMP_CARET);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(68);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(54);
      if (lookahead == '=') ADVANCE(64);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(66);
      if (lookahead == '>') ADVANCE(55);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(16);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(71);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(75);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(85);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(72);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(83);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '.') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(88);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '.') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(90);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ADVANCE_MAP(
        'a', 1,
        'b', 2,
        'c', 3,
        'd', 4,
        'e', 5,
        'f', 6,
        'i', 7,
        'l', 8,
        'm', 9,
        'o', 10,
        'r', 11,
        's', 12,
        't', 13,
        'u', 14,
        'w', 15,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == 'n') ADVANCE(16);
      END_STATE();
    case 2:
      if (lookahead == 'o') ADVANCE(17);
      END_STATE();
    case 3:
      if (lookahead == 'o') ADVANCE(18);
      END_STATE();
    case 4:
      if (lookahead == 'e') ADVANCE(19);
      if (lookahead == 'o') ADVANCE(20);
      if (lookahead == 'u') ADVANCE(21);
      END_STATE();
    case 5:
      if (lookahead == 'x') ADVANCE(22);
      END_STATE();
    case 6:
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 7:
      if (lookahead == 'n') ADVANCE(24);
      if (lookahead == 'p') ADVANCE(25);
      END_STATE();
    case 8:
      if (lookahead == 'i') ADVANCE(26);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(27);
      if (lookahead == 'o') ADVANCE(28);
      END_STATE();
    case 10:
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 12:
      if (lookahead == 'c') ADVANCE(31);
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 13:
      if (lookahead == 'i') ADVANCE(33);
      if (lookahead == 'y') ADVANCE(34);
      END_STATE();
    case 14:
      if (lookahead == 'i') ADVANCE(35);
      END_STATE();
    case 15:
      if (lookahead == 'i') ADVANCE(36);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(37);
      END_STATE();
    case 17:
      if (lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 18:
      if (lookahead == 'n') ADVANCE(39);
      END_STATE();
    case 19:
      if (lookahead == 'f') ADVANCE(40);
      END_STATE();
    case 20:
      if (lookahead == 'u') ADVANCE(41);
      END_STATE();
    case 21:
      if (lookahead == 'r') ADVANCE(42);
      END_STATE();
    case 22:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 23:
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 24:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(46);
      END_STATE();
    case 26:
      if (lookahead == 's') ADVANCE(47);
      END_STATE();
    case 27:
      if (lookahead == 'p') ADVANCE(48);
      END_STATE();
    case 28:
      if (lookahead == 'd') ADVANCE(49);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 30:
      if (lookahead == 'l') ADVANCE(50);
      END_STATE();
    case 31:
      if (lookahead == 'h') ADVANCE(51);
      END_STATE();
    case 32:
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 33:
      if (lookahead == 'm') ADVANCE(53);
      END_STATE();
    case 34:
      if (lookahead == 'p') ADVANCE(54);
      END_STATE();
    case 35:
      if (lookahead == 'n') ADVANCE(55);
      END_STATE();
    case 36:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 38:
      if (lookahead == 'l') ADVANCE(57);
      END_STATE();
    case 39:
      if (lookahead == 'd') ADVANCE(58);
      END_STATE();
    case 40:
      if (lookahead == 'i') ADVANCE(59);
      END_STATE();
    case 41:
      if (lookahead == 'b') ADVANCE(60);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(61);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 44:
      if (lookahead == 'm') ADVANCE(63);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 46:
      if (lookahead == 'd') ADVANCE(64);
      END_STATE();
    case 47:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_map);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(66);
      if (lookahead == 'u') ADVANCE(67);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(68);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 52:
      if (lookahead == 'i') ADVANCE(70);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 55:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 56:
      if (lookahead == 'h') ADVANCE(74);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 58:
      if (lookahead == 'i') ADVANCE(75);
      END_STATE();
    case 59:
      if (lookahead == 'n') ADVANCE(76);
      END_STATE();
    case 60:
      if (lookahead == 'l') ADVANCE(77);
      END_STATE();
    case 61:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 62:
      if (lookahead == 'n') ADVANCE(79);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 64:
      if (lookahead == 'd') ADVANCE(80);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_list);
      END_STATE();
    case 66:
      if (lookahead == 'l') ADVANCE(81);
      END_STATE();
    case 67:
      if (lookahead == 'l') ADVANCE(82);
      END_STATE();
    case 68:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 69:
      if (lookahead == 'm') ADVANCE(84);
      END_STATE();
    case 70:
      if (lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 71:
      if (lookahead == 's') ADVANCE(86);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_uint);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 75:
      if (lookahead == 't') ADVANCE(87);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 78:
      if (lookahead == 'i') ADVANCE(90);
      END_STATE();
    case 79:
      if (lookahead == 'd') ADVANCE(91);
      END_STATE();
    case 80:
      if (lookahead == 'r') ADVANCE(92);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_model);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 83:
      if (lookahead == 'i') ADVANCE(94);
      END_STATE();
    case 84:
      if (lookahead == 'a') ADVANCE(95);
      END_STATE();
    case 85:
      if (lookahead == 'g') ADVANCE(96);
      END_STATE();
    case 86:
      if (lookahead == 't') ADVANCE(97);
      END_STATE();
    case 87:
      if (lookahead == 'i') ADVANCE(98);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_define);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_double);
      END_STATE();
    case 90:
      if (lookahead == 'o') ADVANCE(99);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_extend);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 94:
      if (lookahead == 'o') ADVANCE(101);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_schema);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 97:
      if (lookahead == 'a') ADVANCE(102);
      END_STATE();
    case 98:
      if (lookahead == 'o') ADVANCE(103);
      END_STATE();
    case 99:
      if (lookahead == 'n') ADVANCE(104);
      END_STATE();
    case 100:
      if (lookahead == 's') ADVANCE(105);
      END_STATE();
    case 101:
      if (lookahead == 'n') ADVANCE(106);
      END_STATE();
    case 102:
      if (lookahead == 'm') ADVANCE(107);
      END_STATE();
    case 103:
      if (lookahead == 'n') ADVANCE(108);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_duration);
      END_STATE();
    case 105:
      if (lookahead == 's') ADVANCE(109);
      END_STATE();
    case 106:
      if (lookahead == 's') ADVANCE(110);
      END_STATE();
    case 107:
      if (lookahead == 'p') ADVANCE(111);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_condition);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_ipaddress);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_relations);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_timestamp);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 28},
  [2] = {.lex_state = 28},
  [3] = {.lex_state = 28},
  [4] = {.lex_state = 28},
  [5] = {.lex_state = 28},
  [6] = {.lex_state = 28},
  [7] = {.lex_state = 28},
  [8] = {.lex_state = 28},
  [9] = {.lex_state = 28},
  [10] = {.lex_state = 28},
  [11] = {.lex_state = 28},
  [12] = {.lex_state = 28},
  [13] = {.lex_state = 28},
  [14] = {.lex_state = 28},
  [15] = {.lex_state = 28},
  [16] = {.lex_state = 28},
  [17] = {.lex_state = 28},
  [18] = {.lex_state = 29},
  [19] = {.lex_state = 30},
  [20] = {.lex_state = 30},
  [21] = {.lex_state = 30},
  [22] = {.lex_state = 30},
  [23] = {.lex_state = 30},
  [24] = {.lex_state = 30},
  [25] = {.lex_state = 30},
  [26] = {.lex_state = 30},
  [27] = {.lex_state = 30},
  [28] = {.lex_state = 30},
  [29] = {.lex_state = 30},
  [30] = {.lex_state = 30},
  [31] = {.lex_state = 30},
  [32] = {.lex_state = 30},
  [33] = {.lex_state = 29},
  [34] = {.lex_state = 29},
  [35] = {.lex_state = 29},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 29},
  [38] = {.lex_state = 29},
  [39] = {.lex_state = 29},
  [40] = {.lex_state = 29},
  [41] = {.lex_state = 29},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 29},
  [44] = {.lex_state = 29},
  [45] = {.lex_state = 29},
  [46] = {.lex_state = 29},
  [47] = {.lex_state = 29},
  [48] = {.lex_state = 29},
  [49] = {.lex_state = 29},
  [50] = {.lex_state = 29},
  [51] = {.lex_state = 29},
  [52] = {.lex_state = 29},
  [53] = {.lex_state = 29},
  [54] = {.lex_state = 29},
  [55] = {.lex_state = 29},
  [56] = {.lex_state = 29},
  [57] = {.lex_state = 29},
  [58] = {.lex_state = 29},
  [59] = {.lex_state = 29},
  [60] = {.lex_state = 29},
  [61] = {.lex_state = 29},
  [62] = {.lex_state = 29},
  [63] = {.lex_state = 29},
  [64] = {.lex_state = 28},
  [65] = {.lex_state = 29},
  [66] = {.lex_state = 29},
  [67] = {.lex_state = 29},
  [68] = {.lex_state = 28},
  [69] = {.lex_state = 28},
  [70] = {.lex_state = 28},
  [71] = {.lex_state = 28},
  [72] = {.lex_state = 28},
  [73] = {.lex_state = 28},
  [74] = {.lex_state = 29},
  [75] = {.lex_state = 28},
  [76] = {.lex_state = 28},
  [77] = {.lex_state = 28},
  [78] = {.lex_state = 28},
  [79] = {.lex_state = 29},
  [80] = {.lex_state = 28},
  [81] = {.lex_state = 28},
  [82] = {.lex_state = 6},
  [83] = {.lex_state = 28},
  [84] = {.lex_state = 29},
  [85] = {.lex_state = 28},
  [86] = {.lex_state = 29},
  [87] = {.lex_state = 28},
  [88] = {.lex_state = 28},
  [89] = {.lex_state = 28},
  [90] = {.lex_state = 29},
  [91] = {.lex_state = 28},
  [92] = {.lex_state = 28},
  [93] = {.lex_state = 29},
  [94] = {.lex_state = 28},
  [95] = {.lex_state = 28},
  [96] = {.lex_state = 29},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 29},
  [99] = {.lex_state = 29},
  [100] = {.lex_state = 6},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 28},
  [103] = {.lex_state = 28},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 29},
  [106] = {.lex_state = 28},
  [107] = {.lex_state = 29},
  [108] = {.lex_state = 29},
  [109] = {.lex_state = 28},
  [110] = {.lex_state = 29},
  [111] = {.lex_state = 29},
  [112] = {.lex_state = 29},
  [113] = {.lex_state = 28},
  [114] = {.lex_state = 29},
  [115] = {.lex_state = 28},
  [116] = {.lex_state = 28},
  [117] = {.lex_state = 28},
  [118] = {.lex_state = 29},
  [119] = {.lex_state = 6},
  [120] = {.lex_state = 28},
  [121] = {.lex_state = 3},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_schema_COLON] = ACTIONS(1),
    [anon_sym_contents_COLON] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_schema] = ACTIONS(1),
    [sym_version] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_model] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [anon_sym_extend] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_relations] = ACTIONS(1),
    [anon_sym_define] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_butnot] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_with] = ACTIONS(1),
    [anon_sym_from] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_COLON_STAR] = ACTIONS(1),
    [anon_sym_condition] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_int] = ACTIONS(1),
    [anon_sym_map] = ACTIONS(1),
    [anon_sym_uint] = ACTIONS(1),
    [anon_sym_list] = ACTIONS(1),
    [anon_sym_timestamp] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_duration] = ACTIONS(1),
    [anon_sym_double] = ACTIONS(1),
    [anon_sym_ipaddress] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_AMP_CARET] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(113),
    [sym__project_file] = STATE(117),
    [sym__module_file] = STATE(117),
    [sym_quoted_schema] = STATE(82),
    [sym_model] = STATE(39),
    [sym_module] = STATE(39),
    [anon_sym_schema_COLON] = ACTIONS(5),
    [anon_sym_model] = ACTIONS(7),
    [anon_sym_module] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_DOT,
    STATE(5), 1,
      sym_argument_list,
    ACTIONS(17), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(13), 18,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [39] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym_argument_list,
    ACTIONS(17), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(13), 18,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [75] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(23), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(21), 19,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [106] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(27), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(25), 18,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [136] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(17), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(13), 18,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [166] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(31), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(29), 18,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [196] = 12,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_COMMA,
    ACTIONS(37), 1,
      anon_sym_RPAREN,
    ACTIONS(41), 1,
      anon_sym_AMP,
    ACTIONS(43), 1,
      anon_sym_PIPE,
    ACTIONS(49), 1,
      anon_sym_AMP_AMP,
    ACTIONS(51), 1,
      anon_sym_PIPE_PIPE,
    STATE(64), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(47), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(33), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(45), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(39), 6,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [244] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_AMP,
    ACTIONS(55), 3,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(39), 6,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
    ACTIONS(53), 12,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [278] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(55), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(53), 18,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [308] = 7,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_AMP,
    ACTIONS(43), 1,
      anon_sym_PIPE,
    ACTIONS(55), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(33), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(39), 6,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
    ACTIONS(53), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [346] = 8,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_AMP,
    ACTIONS(43), 1,
      anon_sym_PIPE,
    ACTIONS(47), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(33), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(45), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(53), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(39), 6,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [386] = 9,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_AMP,
    ACTIONS(43), 1,
      anon_sym_PIPE,
    ACTIONS(49), 1,
      anon_sym_AMP_AMP,
    ACTIONS(47), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(33), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(45), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(53), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
    ACTIONS(39), 6,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [428] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(59), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(57), 18,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [458] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(63), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(61), 18,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [488] = 10,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_AMP,
    ACTIONS(43), 1,
      anon_sym_PIPE,
    ACTIONS(49), 1,
      anon_sym_AMP_AMP,
    ACTIONS(51), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(47), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(65), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(33), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(45), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(39), 6,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [531] = 10,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_AMP,
    ACTIONS(43), 1,
      anon_sym_PIPE,
    ACTIONS(49), 1,
      anon_sym_AMP_AMP,
    ACTIONS(51), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(67), 1,
      anon_sym_RBRACE,
    ACTIONS(47), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(33), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_CARET,
    ACTIONS(45), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(39), 6,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [573] = 3,
    ACTIONS(11), 1,
      sym_comment,
    STATE(87), 1,
      sym_type_identifier,
    ACTIONS(69), 10,
      anon_sym_string,
      anon_sym_int,
      anon_sym_map,
      anon_sym_uint,
      anon_sym_list,
      anon_sym_timestamp,
      anon_sym_bool,
      anon_sym_duration,
      anon_sym_double,
      anon_sym_ipaddress,
  [592] = 6,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_from,
    STATE(23), 1,
      aux_sym_relation_def_repeat1,
    STATE(84), 1,
      sym_operator,
    ACTIONS(73), 3,
      anon_sym_or,
      anon_sym_and,
      anon_sym_butnot,
    ACTIONS(71), 5,
      ts_builtin_sym_end,
      anon_sym_extend,
      anon_sym_type,
      anon_sym_define,
      anon_sym_condition,
  [617] = 6,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_from,
    STATE(25), 1,
      aux_sym_relation_def_repeat1,
    STATE(84), 1,
      sym_operator,
    ACTIONS(73), 3,
      anon_sym_or,
      anon_sym_and,
      anon_sym_butnot,
    ACTIONS(77), 5,
      ts_builtin_sym_end,
      anon_sym_extend,
      anon_sym_type,
      anon_sym_define,
      anon_sym_condition,
  [642] = 5,
    ACTIONS(11), 1,
      sym_comment,
    STATE(25), 1,
      aux_sym_relation_def_repeat1,
    STATE(84), 1,
      sym_operator,
    ACTIONS(73), 3,
      anon_sym_or,
      anon_sym_and,
      anon_sym_butnot,
    ACTIONS(77), 5,
      ts_builtin_sym_end,
      anon_sym_extend,
      anon_sym_type,
      anon_sym_define,
      anon_sym_condition,
  [664] = 5,
    ACTIONS(11), 1,
      sym_comment,
    STATE(23), 1,
      aux_sym_relation_def_repeat1,
    STATE(84), 1,
      sym_operator,
    ACTIONS(73), 3,
      anon_sym_or,
      anon_sym_and,
      anon_sym_butnot,
    ACTIONS(71), 5,
      ts_builtin_sym_end,
      anon_sym_extend,
      anon_sym_type,
      anon_sym_define,
      anon_sym_condition,
  [686] = 5,
    ACTIONS(11), 1,
      sym_comment,
    STATE(24), 1,
      aux_sym_relation_def_repeat1,
    STATE(84), 1,
      sym_operator,
    ACTIONS(73), 3,
      anon_sym_or,
      anon_sym_and,
      anon_sym_butnot,
    ACTIONS(79), 5,
      ts_builtin_sym_end,
      anon_sym_extend,
      anon_sym_type,
      anon_sym_define,
      anon_sym_condition,
  [708] = 5,
    ACTIONS(11), 1,
      sym_comment,
    STATE(24), 1,
      aux_sym_relation_def_repeat1,
    STATE(84), 1,
      sym_operator,
    ACTIONS(83), 3,
      anon_sym_or,
      anon_sym_and,
      anon_sym_butnot,
    ACTIONS(81), 5,
      ts_builtin_sym_end,
      anon_sym_extend,
      anon_sym_type,
      anon_sym_define,
      anon_sym_condition,
  [730] = 5,
    ACTIONS(11), 1,
      sym_comment,
    STATE(24), 1,
      aux_sym_relation_def_repeat1,
    STATE(84), 1,
      sym_operator,
    ACTIONS(73), 3,
      anon_sym_or,
      anon_sym_and,
      anon_sym_butnot,
    ACTIONS(86), 5,
      ts_builtin_sym_end,
      anon_sym_extend,
      anon_sym_type,
      anon_sym_define,
      anon_sym_condition,
  [752] = 4,
    ACTIONS(11), 1,
      sym_comment,
    STATE(86), 1,
      sym_operator,
    ACTIONS(73), 3,
      anon_sym_or,
      anon_sym_and,
      anon_sym_butnot,
    ACTIONS(71), 5,
      ts_builtin_sym_end,
      anon_sym_extend,
      anon_sym_type,
      anon_sym_define,
      anon_sym_condition,
  [771] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_from,
    ACTIONS(81), 8,
      ts_builtin_sym_end,
      anon_sym_extend,
      anon_sym_type,
      anon_sym_define,
      anon_sym_or,
      anon_sym_and,
      anon_sym_butnot,
      anon_sym_condition,
  [788] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(88), 8,
      ts_builtin_sym_end,
      anon_sym_extend,
      anon_sym_type,
      anon_sym_define,
      anon_sym_or,
      anon_sym_and,
      anon_sym_butnot,
      anon_sym_condition,
  [802] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(90), 8,
      ts_builtin_sym_end,
      anon_sym_extend,
      anon_sym_type,
      anon_sym_define,
      anon_sym_or,
      anon_sym_and,
      anon_sym_butnot,
      anon_sym_condition,
  [816] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(92), 8,
      ts_builtin_sym_end,
      anon_sym_extend,
      anon_sym_type,
      anon_sym_define,
      anon_sym_or,
      anon_sym_and,
      anon_sym_butnot,
      anon_sym_condition,
  [830] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(81), 8,
      ts_builtin_sym_end,
      anon_sym_extend,
      anon_sym_type,
      anon_sym_define,
      anon_sym_or,
      anon_sym_and,
      anon_sym_butnot,
      anon_sym_condition,
  [844] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(94), 8,
      ts_builtin_sym_end,
      anon_sym_extend,
      anon_sym_type,
      anon_sym_define,
      anon_sym_or,
      anon_sym_and,
      anon_sym_butnot,
      anon_sym_condition,
  [858] = 6,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(96), 1,
      ts_builtin_sym_end,
    ACTIONS(98), 1,
      anon_sym_extend,
    ACTIONS(101), 1,
      anon_sym_type,
    ACTIONS(104), 1,
      anon_sym_condition,
    STATE(33), 3,
      sym_type_declaration,
      sym_condition_declaration,
      aux_sym__module_file_repeat1,
  [879] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_define,
    STATE(38), 2,
      sym_definition,
      aux_sym_relations_repeat1,
    ACTIONS(107), 4,
      ts_builtin_sym_end,
      anon_sym_extend,
      anon_sym_type,
      anon_sym_condition,
  [896] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_define,
    STATE(35), 2,
      sym_definition,
      aux_sym_relations_repeat1,
    ACTIONS(111), 4,
      ts_builtin_sym_end,
      anon_sym_extend,
      anon_sym_type,
      anon_sym_condition,
  [913] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_COMMA,
    ACTIONS(118), 1,
      anon_sym_RBRACK,
    ACTIONS(120), 1,
      anon_sym_with,
    ACTIONS(122), 1,
      anon_sym_POUND,
    ACTIONS(124), 1,
      anon_sym_COLON_STAR,
    STATE(69), 1,
      aux_sym_direct_relationship_repeat1,
    STATE(71), 1,
      sym_conditional,
  [938] = 6,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(126), 1,
      ts_builtin_sym_end,
    ACTIONS(128), 1,
      anon_sym_extend,
    ACTIONS(130), 1,
      anon_sym_type,
    ACTIONS(132), 1,
      anon_sym_condition,
    STATE(33), 3,
      sym_type_declaration,
      sym_condition_declaration,
      aux_sym__module_file_repeat1,
  [959] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_define,
    STATE(35), 2,
      sym_definition,
      aux_sym_relations_repeat1,
    ACTIONS(134), 4,
      ts_builtin_sym_end,
      anon_sym_extend,
      anon_sym_type,
      anon_sym_condition,
  [976] = 6,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_extend,
    ACTIONS(130), 1,
      anon_sym_type,
    ACTIONS(132), 1,
      anon_sym_condition,
    ACTIONS(136), 1,
      ts_builtin_sym_end,
    STATE(37), 3,
      sym_type_declaration,
      sym_condition_declaration,
      aux_sym__module_file_repeat1,
  [997] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(140), 1,
      anon_sym_relations,
    STATE(61), 1,
      sym_relations,
    ACTIONS(138), 4,
      ts_builtin_sym_end,
      anon_sym_extend,
      anon_sym_type,
      anon_sym_condition,
  [1013] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(140), 1,
      anon_sym_relations,
    STATE(54), 1,
      sym_relations,
    ACTIONS(142), 4,
      ts_builtin_sym_end,
      anon_sym_extend,
      anon_sym_type,
      anon_sym_condition,
  [1029] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_with,
    ACTIONS(122), 1,
      anon_sym_POUND,
    ACTIONS(124), 1,
      anon_sym_COLON_STAR,
    STATE(95), 1,
      sym_conditional,
    ACTIONS(144), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1049] = 6,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(146), 1,
      sym_identifier,
    ACTIONS(148), 1,
      anon_sym_RPAREN,
    STATE(3), 1,
      sym_selector_expression,
    STATE(8), 1,
      sym__expression,
    STATE(6), 2,
      sym_binary_expression,
      sym_call_expression,
  [1069] = 6,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_COMMA,
    ACTIONS(118), 1,
      anon_sym_RBRACK,
    ACTIONS(120), 1,
      anon_sym_with,
    STATE(69), 1,
      aux_sym_direct_relationship_repeat1,
    STATE(71), 1,
      sym_conditional,
  [1088] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(146), 1,
      sym_identifier,
    STATE(3), 1,
      sym_selector_expression,
    STATE(9), 1,
      sym__expression,
    STATE(6), 2,
      sym_binary_expression,
      sym_call_expression,
  [1105] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(146), 1,
      sym_identifier,
    STATE(3), 1,
      sym_selector_expression,
    STATE(17), 1,
      sym__expression,
    STATE(6), 2,
      sym_binary_expression,
      sym_call_expression,
  [1122] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(146), 1,
      sym_identifier,
    STATE(3), 1,
      sym_selector_expression,
    STATE(11), 1,
      sym__expression,
    STATE(6), 2,
      sym_binary_expression,
      sym_call_expression,
  [1139] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(146), 1,
      sym_identifier,
    STATE(3), 1,
      sym_selector_expression,
    STATE(16), 1,
      sym__expression,
    STATE(6), 2,
      sym_binary_expression,
      sym_call_expression,
  [1156] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(150), 5,
      ts_builtin_sym_end,
      anon_sym_extend,
      anon_sym_type,
      anon_sym_define,
      anon_sym_condition,
  [1167] = 6,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(152), 1,
      sym_identifier,
    ACTIONS(154), 1,
      anon_sym_LBRACK,
    STATE(22), 1,
      sym_indirect_relation,
    STATE(26), 1,
      sym_direct_relationship,
    STATE(49), 1,
      sym_relation_def,
  [1186] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(146), 1,
      sym_identifier,
    STATE(3), 1,
      sym_selector_expression,
    STATE(12), 1,
      sym__expression,
    STATE(6), 2,
      sym_binary_expression,
      sym_call_expression,
  [1203] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(146), 1,
      sym_identifier,
    STATE(3), 1,
      sym_selector_expression,
    STATE(13), 1,
      sym__expression,
    STATE(6), 2,
      sym_binary_expression,
      sym_call_expression,
  [1220] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(146), 1,
      sym_identifier,
    STATE(3), 1,
      sym_selector_expression,
    STATE(10), 1,
      sym__expression,
    STATE(6), 2,
      sym_binary_expression,
      sym_call_expression,
  [1237] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(138), 4,
      ts_builtin_sym_end,
      anon_sym_extend,
      anon_sym_type,
      anon_sym_condition,
  [1247] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(156), 4,
      ts_builtin_sym_end,
      anon_sym_extend,
      anon_sym_type,
      anon_sym_condition,
  [1257] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(158), 4,
      ts_builtin_sym_end,
      anon_sym_extend,
      anon_sym_type,
      anon_sym_condition,
  [1267] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(160), 4,
      ts_builtin_sym_end,
      anon_sym_extend,
      anon_sym_type,
      anon_sym_condition,
  [1277] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(162), 4,
      ts_builtin_sym_end,
      anon_sym_extend,
      anon_sym_type,
      anon_sym_condition,
  [1287] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(164), 4,
      ts_builtin_sym_end,
      anon_sym_extend,
      anon_sym_type,
      anon_sym_condition,
  [1297] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(166), 4,
      ts_builtin_sym_end,
      anon_sym_extend,
      anon_sym_type,
      anon_sym_condition,
  [1307] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(168), 4,
      ts_builtin_sym_end,
      anon_sym_extend,
      anon_sym_type,
      anon_sym_condition,
  [1317] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_with,
    STATE(95), 1,
      sym_conditional,
    ACTIONS(144), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1331] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(170), 4,
      ts_builtin_sym_end,
      anon_sym_extend,
      anon_sym_type,
      anon_sym_condition,
  [1341] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_COMMA,
    ACTIONS(172), 1,
      anon_sym_RPAREN,
    STATE(73), 1,
      aux_sym_argument_list_repeat1,
  [1354] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(174), 1,
      sym_identifier,
    STATE(62), 2,
      sym_relation_ref,
      sym_all,
  [1365] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(176), 1,
      sym_identifier,
    ACTIONS(178), 1,
      anon_sym_RPAREN,
    STATE(68), 1,
      sym_param,
  [1378] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(180), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_with,
  [1387] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_COMMA,
    ACTIONS(184), 1,
      anon_sym_RPAREN,
    STATE(70), 1,
      aux_sym_condition_declaration_repeat1,
  [1400] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_COMMA,
    ACTIONS(186), 1,
      anon_sym_RBRACK,
    STATE(80), 1,
      aux_sym_direct_relationship_repeat1,
  [1413] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_COMMA,
    ACTIONS(188), 1,
      anon_sym_RPAREN,
    STATE(76), 1,
      aux_sym_condition_declaration_repeat1,
  [1426] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_COMMA,
    ACTIONS(186), 1,
      anon_sym_RBRACK,
    STATE(78), 1,
      aux_sym_direct_relationship_repeat1,
  [1439] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(190), 1,
      ts_builtin_sym_end,
    ACTIONS(192), 1,
      anon_sym_DASH,
    STATE(77), 1,
      aux_sym_contents_repeat1,
  [1452] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_RPAREN,
    ACTIONS(194), 1,
      anon_sym_COMMA,
    STATE(73), 1,
      aux_sym_argument_list_repeat1,
  [1465] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(197), 1,
      sym_identifier,
    STATE(44), 2,
      sym_relation_ref,
      sym_all,
  [1476] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(192), 1,
      anon_sym_DASH,
    ACTIONS(199), 1,
      ts_builtin_sym_end,
    STATE(72), 1,
      aux_sym_contents_repeat1,
  [1489] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_COMMA,
    ACTIONS(204), 1,
      anon_sym_RPAREN,
    STATE(76), 1,
      aux_sym_condition_declaration_repeat1,
  [1502] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(206), 1,
      ts_builtin_sym_end,
    ACTIONS(208), 1,
      anon_sym_DASH,
    STATE(77), 1,
      aux_sym_contents_repeat1,
  [1515] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_COMMA,
    ACTIONS(211), 1,
      anon_sym_RBRACK,
    STATE(80), 1,
      aux_sym_direct_relationship_repeat1,
  [1528] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(213), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_with,
  [1537] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(144), 1,
      anon_sym_RBRACK,
    ACTIONS(215), 1,
      anon_sym_COMMA,
    STATE(80), 1,
      aux_sym_direct_relationship_repeat1,
  [1550] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(218), 1,
      anon_sym_LBRACE,
    STATE(56), 1,
      sym_condition_body,
  [1560] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(220), 1,
      anon_sym_contents_COLON,
    STATE(106), 1,
      sym_contents,
  [1570] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_SQUOTE,
    STATE(100), 1,
      sym__quoted_version,
  [1580] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(224), 1,
      sym_identifier,
    STATE(31), 1,
      sym_indirect_relation,
  [1590] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(226), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1598] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(228), 1,
      sym_identifier,
    STATE(21), 1,
      sym_indirect_relation,
  [1608] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(230), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1616] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(204), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1624] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(206), 2,
      ts_builtin_sym_end,
      anon_sym_DASH,
  [1632] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(232), 1,
      anon_sym_schema,
    STATE(55), 1,
      sym_schema,
  [1642] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(218), 1,
      anon_sym_LBRACE,
    STATE(60), 1,
      sym_condition_body,
  [1652] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(234), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1660] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(176), 1,
      sym_identifier,
    STATE(88), 1,
      sym_param,
  [1670] = 3,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(218), 1,
      anon_sym_LBRACE,
    STATE(58), 1,
      sym_condition_body,
  [1680] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(236), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1688] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(238), 1,
      sym_identifier,
  [1695] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      anon_sym_LF,
  [1702] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(242), 1,
      sym_identifier,
  [1709] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(244), 1,
      sym_identifier,
  [1716] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(246), 1,
      anon_sym_contents_COLON,
  [1723] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      anon_sym_LF,
  [1730] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(250), 1,
      anon_sym_COLON,
  [1737] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(252), 1,
      anon_sym_LPAREN,
  [1744] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      anon_sym_LF,
  [1751] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(256), 1,
      sym_identifier,
  [1758] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(258), 1,
      ts_builtin_sym_end,
  [1765] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(260), 1,
      anon_sym_type,
  [1772] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(262), 1,
      sym_identifier,
  [1779] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(264), 1,
      anon_sym_COLON,
  [1786] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(266), 1,
      sym_identifier,
  [1793] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(268), 1,
      sym_identifier,
  [1800] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(270), 1,
      sym_identifier,
  [1807] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(272), 1,
      ts_builtin_sym_end,
  [1814] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(274), 1,
      sym_identifier,
  [1821] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(276), 1,
      anon_sym_SQUOTE,
  [1828] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(278), 1,
      sym_version,
  [1835] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(280), 1,
      ts_builtin_sym_end,
  [1842] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(282), 1,
      sym_identifier,
  [1849] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_contents_COLON,
  [1856] = 2,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(286), 1,
      sym_version,
  [1863] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 1,
      sym_file,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 39,
  [SMALL_STATE(4)] = 75,
  [SMALL_STATE(5)] = 106,
  [SMALL_STATE(6)] = 136,
  [SMALL_STATE(7)] = 166,
  [SMALL_STATE(8)] = 196,
  [SMALL_STATE(9)] = 244,
  [SMALL_STATE(10)] = 278,
  [SMALL_STATE(11)] = 308,
  [SMALL_STATE(12)] = 346,
  [SMALL_STATE(13)] = 386,
  [SMALL_STATE(14)] = 428,
  [SMALL_STATE(15)] = 458,
  [SMALL_STATE(16)] = 488,
  [SMALL_STATE(17)] = 531,
  [SMALL_STATE(18)] = 573,
  [SMALL_STATE(19)] = 592,
  [SMALL_STATE(20)] = 617,
  [SMALL_STATE(21)] = 642,
  [SMALL_STATE(22)] = 664,
  [SMALL_STATE(23)] = 686,
  [SMALL_STATE(24)] = 708,
  [SMALL_STATE(25)] = 730,
  [SMALL_STATE(26)] = 752,
  [SMALL_STATE(27)] = 771,
  [SMALL_STATE(28)] = 788,
  [SMALL_STATE(29)] = 802,
  [SMALL_STATE(30)] = 816,
  [SMALL_STATE(31)] = 830,
  [SMALL_STATE(32)] = 844,
  [SMALL_STATE(33)] = 858,
  [SMALL_STATE(34)] = 879,
  [SMALL_STATE(35)] = 896,
  [SMALL_STATE(36)] = 913,
  [SMALL_STATE(37)] = 938,
  [SMALL_STATE(38)] = 959,
  [SMALL_STATE(39)] = 976,
  [SMALL_STATE(40)] = 997,
  [SMALL_STATE(41)] = 1013,
  [SMALL_STATE(42)] = 1029,
  [SMALL_STATE(43)] = 1049,
  [SMALL_STATE(44)] = 1069,
  [SMALL_STATE(45)] = 1088,
  [SMALL_STATE(46)] = 1105,
  [SMALL_STATE(47)] = 1122,
  [SMALL_STATE(48)] = 1139,
  [SMALL_STATE(49)] = 1156,
  [SMALL_STATE(50)] = 1167,
  [SMALL_STATE(51)] = 1186,
  [SMALL_STATE(52)] = 1203,
  [SMALL_STATE(53)] = 1220,
  [SMALL_STATE(54)] = 1237,
  [SMALL_STATE(55)] = 1247,
  [SMALL_STATE(56)] = 1257,
  [SMALL_STATE(57)] = 1267,
  [SMALL_STATE(58)] = 1277,
  [SMALL_STATE(59)] = 1287,
  [SMALL_STATE(60)] = 1297,
  [SMALL_STATE(61)] = 1307,
  [SMALL_STATE(62)] = 1317,
  [SMALL_STATE(63)] = 1331,
  [SMALL_STATE(64)] = 1341,
  [SMALL_STATE(65)] = 1354,
  [SMALL_STATE(66)] = 1365,
  [SMALL_STATE(67)] = 1378,
  [SMALL_STATE(68)] = 1387,
  [SMALL_STATE(69)] = 1400,
  [SMALL_STATE(70)] = 1413,
  [SMALL_STATE(71)] = 1426,
  [SMALL_STATE(72)] = 1439,
  [SMALL_STATE(73)] = 1452,
  [SMALL_STATE(74)] = 1465,
  [SMALL_STATE(75)] = 1476,
  [SMALL_STATE(76)] = 1489,
  [SMALL_STATE(77)] = 1502,
  [SMALL_STATE(78)] = 1515,
  [SMALL_STATE(79)] = 1528,
  [SMALL_STATE(80)] = 1537,
  [SMALL_STATE(81)] = 1550,
  [SMALL_STATE(82)] = 1560,
  [SMALL_STATE(83)] = 1570,
  [SMALL_STATE(84)] = 1580,
  [SMALL_STATE(85)] = 1590,
  [SMALL_STATE(86)] = 1598,
  [SMALL_STATE(87)] = 1608,
  [SMALL_STATE(88)] = 1616,
  [SMALL_STATE(89)] = 1624,
  [SMALL_STATE(90)] = 1632,
  [SMALL_STATE(91)] = 1642,
  [SMALL_STATE(92)] = 1652,
  [SMALL_STATE(93)] = 1660,
  [SMALL_STATE(94)] = 1670,
  [SMALL_STATE(95)] = 1680,
  [SMALL_STATE(96)] = 1688,
  [SMALL_STATE(97)] = 1695,
  [SMALL_STATE(98)] = 1702,
  [SMALL_STATE(99)] = 1709,
  [SMALL_STATE(100)] = 1716,
  [SMALL_STATE(101)] = 1723,
  [SMALL_STATE(102)] = 1730,
  [SMALL_STATE(103)] = 1737,
  [SMALL_STATE(104)] = 1744,
  [SMALL_STATE(105)] = 1751,
  [SMALL_STATE(106)] = 1758,
  [SMALL_STATE(107)] = 1765,
  [SMALL_STATE(108)] = 1772,
  [SMALL_STATE(109)] = 1779,
  [SMALL_STATE(110)] = 1786,
  [SMALL_STATE(111)] = 1793,
  [SMALL_STATE(112)] = 1800,
  [SMALL_STATE(113)] = 1807,
  [SMALL_STATE(114)] = 1814,
  [SMALL_STATE(115)] = 1821,
  [SMALL_STATE(116)] = 1828,
  [SMALL_STATE(117)] = 1835,
  [SMALL_STATE(118)] = 1842,
  [SMALL_STATE(119)] = 1849,
  [SMALL_STATE(120)] = 1856,
  [SMALL_STATE(121)] = 1863,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1, 0, 0),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1, 0, 0),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_expression, 3, 0, 6),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector_expression, 3, 0, 6),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 2, 0, 3),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 2, 0, 3),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2, 0, 0),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 2, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, 0, 7),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, 0, 7),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 3, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 4, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_def, 1, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_def, 3, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_def, 2, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_def_repeat1, 2, 0, 0),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_def_repeat1, 2, 0, 0), SHIFT_REPEAT(114),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_def, 4, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direct_relationship, 3, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direct_relationship, 5, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indirect_relation, 3, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direct_relationship, 4, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__module_file_repeat1, 2, 0, 0),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__module_file_repeat1, 2, 0, 0), SHIFT_REPEAT(107),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__module_file_repeat1, 2, 0, 0), SHIFT_REPEAT(110),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__module_file_repeat1, 2, 0, 0), SHIFT_REPEAT(111),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relations, 1, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relations_repeat1, 2, 0, 0),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relations_repeat1, 2, 0, 0), SHIFT_REPEAT(112),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__module_file, 2, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relations, 2, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__module_file, 1, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 4, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 3, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_direct_relationship_repeat1, 2, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 4, 0, 5),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model, 3, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition_declaration, 7, 0, 4),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 2, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition_declaration, 6, 0, 2),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schema, 2, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition_declaration, 5, 0, 1),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 5, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition_body, 3, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_all, 2, 0, 0),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contents, 2, 0, 0),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contents, 1, 0, 0),
  [201] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_condition_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(93),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_condition_declaration_repeat1, 2, 0, 0),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_contents_repeat1, 2, 0, 0),
  [208] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_contents_repeat1, 2, 0, 0), SHIFT_REPEAT(121),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_ref, 3, 0, 0),
  [215] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_direct_relationship_repeat1, 2, 0, 0), SHIFT_REPEAT(65),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_identifier, 1, 0, 0),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 3, 0, 0),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 2, 0, 0),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_direct_relationship_repeat1, 3, 0, 0),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_schema, 2, 0, 0),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__project_file, 2, 0, 0),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [272] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1, 0, 0),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quoted_version, 3, 0, 0),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_fga(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
