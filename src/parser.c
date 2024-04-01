#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 102
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 85
#define ALIAS_COUNT 0
#define TOKEN_COUNT 57
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 10
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 8

enum ts_symbol_identifiers {
  sym_identifier = 1,
  anon_sym_model = 2,
  anon_sym_LF = 3,
  anon_sym_schema = 4,
  sym_version = 5,
  anon_sym_type = 6,
  anon_sym_relations = 7,
  anon_sym_define = 8,
  anon_sym_COLON = 9,
  anon_sym_or = 10,
  anon_sym_and = 11,
  anon_sym_butnot = 12,
  anon_sym_LBRACK = 13,
  anon_sym_COMMA = 14,
  anon_sym_RBRACK = 15,
  anon_sym_with = 16,
  anon_sym_from = 17,
  anon_sym_POUND = 18,
  anon_sym_COLON_STAR = 19,
  anon_sym_condition = 20,
  anon_sym_LPAREN = 21,
  anon_sym_RPAREN = 22,
  anon_sym_string = 23,
  anon_sym_int = 24,
  anon_sym_map = 25,
  anon_sym_uint = 26,
  anon_sym_list = 27,
  anon_sym_timestamp = 28,
  anon_sym_bool = 29,
  anon_sym_duration = 30,
  anon_sym_double = 31,
  anon_sym_ipaddress = 32,
  anon_sym_EQ_EQ = 33,
  anon_sym_BANG_EQ = 34,
  anon_sym_LT = 35,
  anon_sym_LT_EQ = 36,
  anon_sym_GT = 37,
  anon_sym_GT_EQ = 38,
  anon_sym_LBRACE = 39,
  anon_sym_RBRACE = 40,
  anon_sym_STAR = 41,
  anon_sym_SLASH = 42,
  anon_sym_PERCENT = 43,
  anon_sym_LT_LT = 44,
  anon_sym_GT_GT = 45,
  anon_sym_AMP = 46,
  anon_sym_AMP_CARET = 47,
  anon_sym_PLUS = 48,
  anon_sym_DASH = 49,
  anon_sym_PIPE = 50,
  anon_sym_CARET = 51,
  anon_sym_AMP_AMP = 52,
  anon_sym_PIPE_PIPE = 53,
  anon_sym_BANG = 54,
  anon_sym_DOT = 55,
  sym_comment = 56,
  sym_source_file = 57,
  sym_model = 58,
  sym_schema = 59,
  sym_type_declaration = 60,
  sym_relations = 61,
  sym_definition = 62,
  sym_relation_def = 63,
  sym_operator = 64,
  sym_direct_relationship = 65,
  sym_conditional = 66,
  sym_indirect_relation = 67,
  sym_relation_ref = 68,
  sym_all = 69,
  sym_condition_declaration = 70,
  sym_param = 71,
  sym_type_identifier = 72,
  sym_condition_body = 73,
  sym_binary_expression = 74,
  sym_call_expression = 75,
  sym_selector_expression = 76,
  sym_argument_list = 77,
  sym__expression = 78,
  aux_sym_source_file_repeat1 = 79,
  aux_sym_relations_repeat1 = 80,
  aux_sym_relation_def_repeat1 = 81,
  aux_sym_direct_relationship_repeat1 = 82,
  aux_sym_condition_declaration_repeat1 = 83,
  aux_sym_argument_list_repeat1 = 84,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_model] = "model",
  [anon_sym_LF] = "\n",
  [anon_sym_schema] = "schema",
  [sym_version] = "version",
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
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
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
  [anon_sym_DASH] = "-",
  [anon_sym_PIPE] = "|",
  [anon_sym_CARET] = "^",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_BANG] = "!",
  [anon_sym_DOT] = ".",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym_model] = "model",
  [sym_schema] = "schema",
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
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_relations_repeat1] = "relations_repeat1",
  [aux_sym_relation_def_repeat1] = "relation_def_repeat1",
  [aux_sym_direct_relationship_repeat1] = "direct_relationship_repeat1",
  [aux_sym_condition_declaration_repeat1] = "condition_declaration_repeat1",
  [aux_sym_argument_list_repeat1] = "argument_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_model] = anon_sym_model,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_schema] = anon_sym_schema,
  [sym_version] = sym_version,
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
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
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
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym_model] = sym_model,
  [sym_schema] = sym_schema,
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
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
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
  [anon_sym_model] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_schema] = {
    .visible = true,
    .named = false,
  },
  [sym_version] = {
    .visible = true,
    .named = true,
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
  [anon_sym_DASH] = {
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
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
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
  [sym_model] = {
    .visible = true,
    .named = true,
  },
  [sym_schema] = {
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
  [aux_sym_source_file_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(16);
      if (lookahead == '!') ADVANCE(50);
      if (lookahead == '#') ADVANCE(25);
      if (lookahead == '%') ADVANCE(39);
      if (lookahead == '&') ADVANCE(42);
      if (lookahead == '(') ADVANCE(27);
      if (lookahead == ')') ADVANCE(28);
      if (lookahead == '*') ADVANCE(37);
      if (lookahead == '+') ADVANCE(44);
      if (lookahead == ',') ADVANCE(23);
      if (lookahead == '-') ADVANCE(45);
      if (lookahead == '.') ADVANCE(51);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == '<') ADVANCE(31);
      if (lookahead == '=') ADVANCE(7);
      if (lookahead == '>') ADVANCE(33);
      if (lookahead == '[') ADVANCE(22);
      if (lookahead == ']') ADVANCE(24);
      if (lookahead == '^') ADVANCE(47);
      if (lookahead == 'b') ADVANCE(54);
      if (lookahead == '{') ADVANCE(35);
      if (lookahead == '|') ADVANCE(46);
      if (lookahead == '}') ADVANCE(36);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(17);
      if (lookahead == '#') ADVANCE(12);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(25);
      if (lookahead == ',') ADVANCE(23);
      if (lookahead == ':') ADVANCE(4);
      if (lookahead == ']') ADVANCE(24);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(12);
      if (lookahead == ',') ADVANCE(23);
      if (lookahead == ']') ADVANCE(24);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(26);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '=') ADVANCE(30);
      END_STATE();
    case 7:
      if (lookahead == '=') ADVANCE(29);
      END_STATE();
    case 8:
      if (lookahead == 'n') ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == 'o') ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 12:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(56);
      END_STATE();
    case 13:
      if (eof) ADVANCE(16);
      if (lookahead == '!') ADVANCE(50);
      if (lookahead == '#') ADVANCE(12);
      if (lookahead == '%') ADVANCE(39);
      if (lookahead == '&') ADVANCE(42);
      if (lookahead == '(') ADVANCE(27);
      if (lookahead == ')') ADVANCE(28);
      if (lookahead == '*') ADVANCE(37);
      if (lookahead == '+') ADVANCE(44);
      if (lookahead == ',') ADVANCE(23);
      if (lookahead == '-') ADVANCE(45);
      if (lookahead == '.') ADVANCE(51);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == '<') ADVANCE(31);
      if (lookahead == '=') ADVANCE(7);
      if (lookahead == '>') ADVANCE(33);
      if (lookahead == '[') ADVANCE(22);
      if (lookahead == ']') ADVANCE(24);
      if (lookahead == '^') ADVANCE(47);
      if (lookahead == 'b') ADVANCE(54);
      if (lookahead == '{') ADVANCE(35);
      if (lookahead == '|') ADVANCE(46);
      if (lookahead == '}') ADVANCE(36);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 14:
      if (eof) ADVANCE(16);
      if (lookahead == '!') ADVANCE(6);
      if (lookahead == '#') ADVANCE(12);
      if (lookahead == '%') ADVANCE(39);
      if (lookahead == '&') ADVANCE(42);
      if (lookahead == '(') ADVANCE(27);
      if (lookahead == ')') ADVANCE(28);
      if (lookahead == '*') ADVANCE(37);
      if (lookahead == '+') ADVANCE(44);
      if (lookahead == ',') ADVANCE(23);
      if (lookahead == '-') ADVANCE(45);
      if (lookahead == '.') ADVANCE(51);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == '<') ADVANCE(31);
      if (lookahead == '=') ADVANCE(7);
      if (lookahead == '>') ADVANCE(33);
      if (lookahead == '[') ADVANCE(22);
      if (lookahead == ']') ADVANCE(24);
      if (lookahead == '^') ADVANCE(47);
      if (lookahead == '{') ADVANCE(35);
      if (lookahead == '|') ADVANCE(46);
      if (lookahead == '}') ADVANCE(36);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 15:
      if (eof) ADVANCE(16);
      if (lookahead == '#') ADVANCE(12);
      if (lookahead == 'b') ADVANCE(54);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_version);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '*') ADVANCE(26);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_butnot);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_COLON_STAR);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(40);
      if (lookahead == '=') ADVANCE(32);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(34);
      if (lookahead == '>') ADVANCE(41);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(48);
      if (lookahead == '^') ADVANCE(43);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_AMP_CARET);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(49);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(30);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(8);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(56);
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
      if (lookahead == 'a') ADVANCE(1);
      if (lookahead == 'b') ADVANCE(2);
      if (lookahead == 'c') ADVANCE(3);
      if (lookahead == 'd') ADVANCE(4);
      if (lookahead == 'f') ADVANCE(5);
      if (lookahead == 'i') ADVANCE(6);
      if (lookahead == 'l') ADVANCE(7);
      if (lookahead == 'm') ADVANCE(8);
      if (lookahead == 'o') ADVANCE(9);
      if (lookahead == 'r') ADVANCE(10);
      if (lookahead == 's') ADVANCE(11);
      if (lookahead == 't') ADVANCE(12);
      if (lookahead == 'u') ADVANCE(13);
      if (lookahead == 'w') ADVANCE(14);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'n') ADVANCE(15);
      END_STATE();
    case 2:
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 3:
      if (lookahead == 'o') ADVANCE(17);
      END_STATE();
    case 4:
      if (lookahead == 'e') ADVANCE(18);
      if (lookahead == 'o') ADVANCE(19);
      if (lookahead == 'u') ADVANCE(20);
      END_STATE();
    case 5:
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 6:
      if (lookahead == 'n') ADVANCE(22);
      if (lookahead == 'p') ADVANCE(23);
      END_STATE();
    case 7:
      if (lookahead == 'i') ADVANCE(24);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(25);
      if (lookahead == 'o') ADVANCE(26);
      END_STATE();
    case 9:
      if (lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 11:
      if (lookahead == 'c') ADVANCE(29);
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 12:
      if (lookahead == 'i') ADVANCE(31);
      if (lookahead == 'y') ADVANCE(32);
      END_STATE();
    case 13:
      if (lookahead == 'i') ADVANCE(33);
      END_STATE();
    case 14:
      if (lookahead == 'i') ADVANCE(34);
      END_STATE();
    case 15:
      if (lookahead == 'd') ADVANCE(35);
      END_STATE();
    case 16:
      if (lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 17:
      if (lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 18:
      if (lookahead == 'f') ADVANCE(38);
      END_STATE();
    case 19:
      if (lookahead == 'u') ADVANCE(39);
      END_STATE();
    case 20:
      if (lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 21:
      if (lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 22:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(43);
      END_STATE();
    case 24:
      if (lookahead == 's') ADVANCE(44);
      END_STATE();
    case 25:
      if (lookahead == 'p') ADVANCE(45);
      END_STATE();
    case 26:
      if (lookahead == 'd') ADVANCE(46);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 28:
      if (lookahead == 'l') ADVANCE(47);
      END_STATE();
    case 29:
      if (lookahead == 'h') ADVANCE(48);
      END_STATE();
    case 30:
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 31:
      if (lookahead == 'm') ADVANCE(50);
      END_STATE();
    case 32:
      if (lookahead == 'p') ADVANCE(51);
      END_STATE();
    case 33:
      if (lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 34:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(54);
      END_STATE();
    case 37:
      if (lookahead == 'd') ADVANCE(55);
      END_STATE();
    case 38:
      if (lookahead == 'i') ADVANCE(56);
      END_STATE();
    case 39:
      if (lookahead == 'b') ADVANCE(57);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(58);
      END_STATE();
    case 41:
      if (lookahead == 'm') ADVANCE(59);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 43:
      if (lookahead == 'd') ADVANCE(60);
      END_STATE();
    case 44:
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_map);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(63);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 49:
      if (lookahead == 'i') ADVANCE(65);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 52:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 53:
      if (lookahead == 'h') ADVANCE(69);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 55:
      if (lookahead == 'i') ADVANCE(70);
      END_STATE();
    case 56:
      if (lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 57:
      if (lookahead == 'l') ADVANCE(72);
      END_STATE();
    case 58:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 60:
      if (lookahead == 'd') ADVANCE(74);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_list);
      END_STATE();
    case 62:
      if (lookahead == 'l') ADVANCE(75);
      END_STATE();
    case 63:
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 64:
      if (lookahead == 'm') ADVANCE(77);
      END_STATE();
    case 65:
      if (lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 66:
      if (lookahead == 's') ADVANCE(79);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_uint);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 70:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 73:
      if (lookahead == 'i') ADVANCE(83);
      END_STATE();
    case 74:
      if (lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_model);
      END_STATE();
    case 76:
      if (lookahead == 'i') ADVANCE(85);
      END_STATE();
    case 77:
      if (lookahead == 'a') ADVANCE(86);
      END_STATE();
    case 78:
      if (lookahead == 'g') ADVANCE(87);
      END_STATE();
    case 79:
      if (lookahead == 't') ADVANCE(88);
      END_STATE();
    case 80:
      if (lookahead == 'i') ADVANCE(89);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_define);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_double);
      END_STATE();
    case 83:
      if (lookahead == 'o') ADVANCE(90);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 85:
      if (lookahead == 'o') ADVANCE(92);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_schema);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 88:
      if (lookahead == 'a') ADVANCE(93);
      END_STATE();
    case 89:
      if (lookahead == 'o') ADVANCE(94);
      END_STATE();
    case 90:
      if (lookahead == 'n') ADVANCE(95);
      END_STATE();
    case 91:
      if (lookahead == 's') ADVANCE(96);
      END_STATE();
    case 92:
      if (lookahead == 'n') ADVANCE(97);
      END_STATE();
    case 93:
      if (lookahead == 'm') ADVANCE(98);
      END_STATE();
    case 94:
      if (lookahead == 'n') ADVANCE(99);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_duration);
      END_STATE();
    case 96:
      if (lookahead == 's') ADVANCE(100);
      END_STATE();
    case 97:
      if (lookahead == 's') ADVANCE(101);
      END_STATE();
    case 98:
      if (lookahead == 'p') ADVANCE(102);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_condition);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_ipaddress);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_relations);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_timestamp);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 14},
  [2] = {.lex_state = 14},
  [3] = {.lex_state = 14},
  [4] = {.lex_state = 14},
  [5] = {.lex_state = 14},
  [6] = {.lex_state = 14},
  [7] = {.lex_state = 14},
  [8] = {.lex_state = 14},
  [9] = {.lex_state = 14},
  [10] = {.lex_state = 14},
  [11] = {.lex_state = 14},
  [12] = {.lex_state = 14},
  [13] = {.lex_state = 14},
  [14] = {.lex_state = 14},
  [15] = {.lex_state = 14},
  [16] = {.lex_state = 14},
  [17] = {.lex_state = 14},
  [18] = {.lex_state = 14},
  [19] = {.lex_state = 15},
  [20] = {.lex_state = 15},
  [21] = {.lex_state = 15},
  [22] = {.lex_state = 15},
  [23] = {.lex_state = 15},
  [24] = {.lex_state = 15},
  [25] = {.lex_state = 15},
  [26] = {.lex_state = 15},
  [27] = {.lex_state = 15},
  [28] = {.lex_state = 15},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 15},
  [31] = {.lex_state = 15},
  [32] = {.lex_state = 15},
  [33] = {.lex_state = 15},
  [34] = {.lex_state = 14},
  [35] = {.lex_state = 14},
  [36] = {.lex_state = 14},
  [37] = {.lex_state = 14},
  [38] = {.lex_state = 14},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 14},
  [41] = {.lex_state = 14},
  [42] = {.lex_state = 14},
  [43] = {.lex_state = 14},
  [44] = {.lex_state = 14},
  [45] = {.lex_state = 14},
  [46] = {.lex_state = 14},
  [47] = {.lex_state = 14},
  [48] = {.lex_state = 14},
  [49] = {.lex_state = 14},
  [50] = {.lex_state = 14},
  [51] = {.lex_state = 14},
  [52] = {.lex_state = 14},
  [53] = {.lex_state = 14},
  [54] = {.lex_state = 14},
  [55] = {.lex_state = 14},
  [56] = {.lex_state = 14},
  [57] = {.lex_state = 14},
  [58] = {.lex_state = 14},
  [59] = {.lex_state = 14},
  [60] = {.lex_state = 14},
  [61] = {.lex_state = 14},
  [62] = {.lex_state = 14},
  [63] = {.lex_state = 14},
  [64] = {.lex_state = 14},
  [65] = {.lex_state = 14},
  [66] = {.lex_state = 14},
  [67] = {.lex_state = 14},
  [68] = {.lex_state = 14},
  [69] = {.lex_state = 14},
  [70] = {.lex_state = 14},
  [71] = {.lex_state = 14},
  [72] = {.lex_state = 14},
  [73] = {.lex_state = 14},
  [74] = {.lex_state = 14},
  [75] = {.lex_state = 14},
  [76] = {.lex_state = 14},
  [77] = {.lex_state = 14},
  [78] = {.lex_state = 14},
  [79] = {.lex_state = 14},
  [80] = {.lex_state = 14},
  [81] = {.lex_state = 14},
  [82] = {.lex_state = 14},
  [83] = {.lex_state = 14},
  [84] = {.lex_state = 14},
  [85] = {.lex_state = 14},
  [86] = {.lex_state = 14},
  [87] = {.lex_state = 14},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 14},
  [90] = {.lex_state = 14},
  [91] = {.lex_state = 14},
  [92] = {.lex_state = 14},
  [93] = {.lex_state = 14},
  [94] = {.lex_state = 14},
  [95] = {.lex_state = 14},
  [96] = {.lex_state = 14},
  [97] = {.lex_state = 14},
  [98] = {.lex_state = 1},
  [99] = {.lex_state = 14},
  [100] = {.lex_state = 14},
  [101] = {.lex_state = 14},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_model] = ACTIONS(1),
    [anon_sym_schema] = ACTIONS(1),
    [sym_version] = ACTIONS(1),
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
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
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
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(101),
    [sym_model] = STATE(40),
    [anon_sym_model] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DOT,
    STATE(8), 1,
      sym_argument_list,
    ACTIONS(13), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(9), 18,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [39] = 5,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    STATE(8), 1,
      sym_argument_list,
    ACTIONS(13), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(9), 18,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [75] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(19), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(17), 19,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [106] = 7,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_AMP,
    ACTIONS(31), 1,
      anon_sym_PIPE,
    ACTIONS(23), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(29), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
    ACTIONS(25), 6,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
    ACTIONS(21), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [144] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(35), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(33), 18,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [174] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(13), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(9), 18,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [204] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(39), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(37), 18,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [234] = 12,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_AMP,
    ACTIONS(31), 1,
      anon_sym_PIPE,
    ACTIONS(41), 1,
      anon_sym_COMMA,
    ACTIONS(43), 1,
      anon_sym_RPAREN,
    ACTIONS(49), 1,
      anon_sym_AMP_AMP,
    ACTIONS(51), 1,
      anon_sym_PIPE_PIPE,
    STATE(73), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(47), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(29), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
    ACTIONS(45), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(25), 6,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [282] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(55), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(53), 18,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [312] = 9,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_AMP,
    ACTIONS(31), 1,
      anon_sym_PIPE,
    ACTIONS(49), 1,
      anon_sym_AMP_AMP,
    ACTIONS(47), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(29), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
    ACTIONS(21), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_PIPE_PIPE,
    ACTIONS(45), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(25), 6,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [354] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(23), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(21), 18,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [384] = 5,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_AMP,
    ACTIONS(23), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
    ACTIONS(25), 6,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
    ACTIONS(21), 12,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [418] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(59), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(57), 18,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [448] = 8,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_AMP,
    ACTIONS(31), 1,
      anon_sym_PIPE,
    ACTIONS(47), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(29), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
    ACTIONS(45), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(21), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(25), 6,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [488] = 10,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_AMP,
    ACTIONS(31), 1,
      anon_sym_PIPE,
    ACTIONS(49), 1,
      anon_sym_AMP_AMP,
    ACTIONS(51), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(47), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(61), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(29), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
    ACTIONS(45), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(25), 6,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [531] = 10,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_AMP,
    ACTIONS(31), 1,
      anon_sym_PIPE,
    ACTIONS(49), 1,
      anon_sym_AMP_AMP,
    ACTIONS(51), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(63), 1,
      anon_sym_RBRACE,
    ACTIONS(47), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(29), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
    ACTIONS(45), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(25), 6,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_CARET,
  [573] = 3,
    ACTIONS(7), 1,
      sym_comment,
    STATE(83), 1,
      sym_type_identifier,
    ACTIONS(65), 10,
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
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_from,
    STATE(25), 1,
      aux_sym_relation_def_repeat1,
    STATE(82), 1,
      sym_operator,
    ACTIONS(69), 3,
      anon_sym_or,
      anon_sym_and,
      anon_sym_butnot,
    ACTIONS(67), 4,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_define,
      anon_sym_condition,
  [616] = 6,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_from,
    STATE(22), 1,
      aux_sym_relation_def_repeat1,
    STATE(82), 1,
      sym_operator,
    ACTIONS(69), 3,
      anon_sym_or,
      anon_sym_and,
      anon_sym_butnot,
    ACTIONS(73), 4,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_define,
      anon_sym_condition,
  [640] = 5,
    ACTIONS(7), 1,
      sym_comment,
    STATE(25), 1,
      aux_sym_relation_def_repeat1,
    STATE(82), 1,
      sym_operator,
    ACTIONS(69), 3,
      anon_sym_or,
      anon_sym_and,
      anon_sym_butnot,
    ACTIONS(67), 4,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_define,
      anon_sym_condition,
  [661] = 5,
    ACTIONS(7), 1,
      sym_comment,
    STATE(23), 1,
      aux_sym_relation_def_repeat1,
    STATE(82), 1,
      sym_operator,
    ACTIONS(69), 3,
      anon_sym_or,
      anon_sym_and,
      anon_sym_butnot,
    ACTIONS(75), 4,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_define,
      anon_sym_condition,
  [682] = 5,
    ACTIONS(7), 1,
      sym_comment,
    STATE(23), 1,
      aux_sym_relation_def_repeat1,
    STATE(82), 1,
      sym_operator,
    ACTIONS(79), 3,
      anon_sym_or,
      anon_sym_and,
      anon_sym_butnot,
    ACTIONS(77), 4,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_define,
      anon_sym_condition,
  [703] = 5,
    ACTIONS(7), 1,
      sym_comment,
    STATE(22), 1,
      aux_sym_relation_def_repeat1,
    STATE(82), 1,
      sym_operator,
    ACTIONS(69), 3,
      anon_sym_or,
      anon_sym_and,
      anon_sym_butnot,
    ACTIONS(73), 4,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_define,
      anon_sym_condition,
  [724] = 5,
    ACTIONS(7), 1,
      sym_comment,
    STATE(23), 1,
      aux_sym_relation_def_repeat1,
    STATE(82), 1,
      sym_operator,
    ACTIONS(69), 3,
      anon_sym_or,
      anon_sym_and,
      anon_sym_butnot,
    ACTIONS(82), 4,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_define,
      anon_sym_condition,
  [745] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_from,
    ACTIONS(77), 7,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_define,
      anon_sym_or,
      anon_sym_and,
      anon_sym_butnot,
      anon_sym_condition,
  [761] = 4,
    ACTIONS(7), 1,
      sym_comment,
    STATE(80), 1,
      sym_operator,
    ACTIONS(69), 3,
      anon_sym_or,
      anon_sym_and,
      anon_sym_butnot,
    ACTIONS(73), 4,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_define,
      anon_sym_condition,
  [779] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(84), 7,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_define,
      anon_sym_or,
      anon_sym_and,
      anon_sym_butnot,
      anon_sym_condition,
  [792] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 1,
      anon_sym_COMMA,
    ACTIONS(88), 1,
      anon_sym_RBRACK,
    ACTIONS(90), 1,
      anon_sym_with,
    ACTIONS(92), 1,
      anon_sym_POUND,
    ACTIONS(94), 1,
      anon_sym_COLON_STAR,
    STATE(69), 1,
      aux_sym_direct_relationship_repeat1,
    STATE(70), 1,
      sym_conditional,
  [817] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(96), 7,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_define,
      anon_sym_or,
      anon_sym_and,
      anon_sym_butnot,
      anon_sym_condition,
  [830] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(98), 7,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_define,
      anon_sym_or,
      anon_sym_and,
      anon_sym_butnot,
      anon_sym_condition,
  [843] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(77), 7,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_define,
      anon_sym_or,
      anon_sym_and,
      anon_sym_butnot,
      anon_sym_condition,
  [856] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(100), 7,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_define,
      anon_sym_or,
      anon_sym_and,
      anon_sym_butnot,
      anon_sym_condition,
  [869] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(104), 1,
      anon_sym_define,
    STATE(36), 2,
      sym_definition,
      aux_sym_relations_repeat1,
    ACTIONS(102), 3,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_condition,
  [885] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(104), 1,
      anon_sym_define,
    STATE(34), 2,
      sym_definition,
      aux_sym_relations_repeat1,
    ACTIONS(106), 3,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_condition,
  [901] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_define,
    STATE(36), 2,
      sym_definition,
      aux_sym_relations_repeat1,
    ACTIONS(108), 3,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_condition,
  [917] = 5,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(113), 1,
      ts_builtin_sym_end,
    ACTIONS(115), 1,
      anon_sym_type,
    ACTIONS(118), 1,
      anon_sym_condition,
    STATE(37), 3,
      sym_type_declaration,
      sym_condition_declaration,
      aux_sym_source_file_repeat1,
  [935] = 5,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    ACTIONS(123), 1,
      anon_sym_type,
    ACTIONS(125), 1,
      anon_sym_condition,
    STATE(37), 3,
      sym_type_declaration,
      sym_condition_declaration,
      aux_sym_source_file_repeat1,
  [953] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_with,
    ACTIONS(92), 1,
      anon_sym_POUND,
    ACTIONS(94), 1,
      anon_sym_COLON_STAR,
    STATE(78), 1,
      sym_conditional,
    ACTIONS(127), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [973] = 5,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_type,
    ACTIONS(125), 1,
      anon_sym_condition,
    ACTIONS(129), 1,
      ts_builtin_sym_end,
    STATE(38), 3,
      sym_type_declaration,
      sym_condition_declaration,
      aux_sym_source_file_repeat1,
  [991] = 6,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(131), 1,
      sym_identifier,
    ACTIONS(133), 1,
      anon_sym_RPAREN,
    STATE(3), 1,
      sym_selector_expression,
    STATE(9), 1,
      sym__expression,
    STATE(7), 2,
      sym_binary_expression,
      sym_call_expression,
  [1011] = 5,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(131), 1,
      sym_identifier,
    STATE(3), 1,
      sym_selector_expression,
    STATE(15), 1,
      sym__expression,
    STATE(7), 2,
      sym_binary_expression,
      sym_call_expression,
  [1028] = 6,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(86), 1,
      anon_sym_COMMA,
    ACTIONS(88), 1,
      anon_sym_RBRACK,
    ACTIONS(90), 1,
      anon_sym_with,
    STATE(69), 1,
      aux_sym_direct_relationship_repeat1,
    STATE(70), 1,
      sym_conditional,
  [1047] = 5,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(131), 1,
      sym_identifier,
    STATE(3), 1,
      sym_selector_expression,
    STATE(16), 1,
      sym__expression,
    STATE(7), 2,
      sym_binary_expression,
      sym_call_expression,
  [1064] = 6,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(135), 1,
      sym_identifier,
    ACTIONS(137), 1,
      anon_sym_LBRACK,
    STATE(24), 1,
      sym_indirect_relation,
    STATE(27), 1,
      sym_direct_relationship,
    STATE(52), 1,
      sym_relation_def,
  [1083] = 5,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(131), 1,
      sym_identifier,
    STATE(3), 1,
      sym_selector_expression,
    STATE(17), 1,
      sym__expression,
    STATE(7), 2,
      sym_binary_expression,
      sym_call_expression,
  [1100] = 5,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(131), 1,
      sym_identifier,
    STATE(3), 1,
      sym_selector_expression,
    STATE(5), 1,
      sym__expression,
    STATE(7), 2,
      sym_binary_expression,
      sym_call_expression,
  [1117] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(141), 1,
      anon_sym_relations,
    STATE(68), 1,
      sym_relations,
    ACTIONS(139), 3,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_condition,
  [1132] = 5,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(131), 1,
      sym_identifier,
    STATE(3), 1,
      sym_selector_expression,
    STATE(12), 1,
      sym__expression,
    STATE(7), 2,
      sym_binary_expression,
      sym_call_expression,
  [1149] = 5,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(131), 1,
      sym_identifier,
    STATE(3), 1,
      sym_selector_expression,
    STATE(13), 1,
      sym__expression,
    STATE(7), 2,
      sym_binary_expression,
      sym_call_expression,
  [1166] = 5,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(131), 1,
      sym_identifier,
    STATE(3), 1,
      sym_selector_expression,
    STATE(11), 1,
      sym__expression,
    STATE(7), 2,
      sym_binary_expression,
      sym_call_expression,
  [1183] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(143), 4,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_define,
      anon_sym_condition,
  [1193] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_with,
    STATE(78), 1,
      sym_conditional,
    ACTIONS(127), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1207] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(145), 3,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_condition,
  [1216] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(86), 1,
      anon_sym_COMMA,
    ACTIONS(147), 1,
      anon_sym_RBRACK,
    STATE(65), 1,
      aux_sym_direct_relationship_repeat1,
  [1229] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(149), 3,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_condition,
  [1238] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(151), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_with,
  [1247] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(153), 1,
      sym_identifier,
    STATE(43), 2,
      sym_relation_ref,
      sym_all,
  [1258] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_RPAREN,
    ACTIONS(155), 1,
      anon_sym_COMMA,
    STATE(59), 1,
      aux_sym_argument_list_repeat1,
  [1271] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(158), 3,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_condition,
  [1280] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(160), 1,
      anon_sym_COMMA,
    ACTIONS(162), 1,
      anon_sym_RPAREN,
    STATE(72), 1,
      aux_sym_condition_declaration_repeat1,
  [1293] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(164), 3,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_condition,
  [1302] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(166), 3,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_condition,
  [1311] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(168), 3,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_condition,
  [1320] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(127), 1,
      anon_sym_RBRACK,
    ACTIONS(170), 1,
      anon_sym_COMMA,
    STATE(65), 1,
      aux_sym_direct_relationship_repeat1,
  [1333] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(175), 1,
      anon_sym_RPAREN,
    STATE(71), 1,
      sym_param,
  [1346] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(177), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_with,
  [1355] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(179), 3,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_condition,
  [1364] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(86), 1,
      anon_sym_COMMA,
    ACTIONS(181), 1,
      anon_sym_RBRACK,
    STATE(65), 1,
      aux_sym_direct_relationship_repeat1,
  [1377] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(86), 1,
      anon_sym_COMMA,
    ACTIONS(181), 1,
      anon_sym_RBRACK,
    STATE(55), 1,
      aux_sym_direct_relationship_repeat1,
  [1390] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(160), 1,
      anon_sym_COMMA,
    ACTIONS(183), 1,
      anon_sym_RPAREN,
    STATE(61), 1,
      aux_sym_condition_declaration_repeat1,
  [1403] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(185), 1,
      anon_sym_COMMA,
    ACTIONS(188), 1,
      anon_sym_RPAREN,
    STATE(72), 1,
      aux_sym_condition_declaration_repeat1,
  [1416] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_COMMA,
    ACTIONS(190), 1,
      anon_sym_RPAREN,
    STATE(59), 1,
      aux_sym_argument_list_repeat1,
  [1429] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(192), 1,
      sym_identifier,
    STATE(53), 2,
      sym_relation_ref,
      sym_all,
  [1440] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(188), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1448] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(194), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1456] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(196), 1,
      anon_sym_LBRACE,
    STATE(64), 1,
      sym_condition_body,
  [1466] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(198), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1474] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_schema,
    STATE(60), 1,
      sym_schema,
  [1484] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(202), 1,
      sym_identifier,
    STATE(21), 1,
      sym_indirect_relation,
  [1494] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(196), 1,
      anon_sym_LBRACE,
    STATE(62), 1,
      sym_condition_body,
  [1504] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(204), 1,
      sym_identifier,
    STATE(32), 1,
      sym_indirect_relation,
  [1514] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(206), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1522] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(208), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1530] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(196), 1,
      anon_sym_LBRACE,
    STATE(56), 1,
      sym_condition_body,
  [1540] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(173), 1,
      sym_identifier,
    STATE(75), 1,
      sym_param,
  [1550] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(210), 1,
      anon_sym_LPAREN,
  [1557] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      anon_sym_LF,
  [1564] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(214), 1,
      sym_identifier,
  [1571] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(216), 1,
      sym_version,
  [1578] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(218), 1,
      anon_sym_COLON,
  [1585] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(220), 1,
      sym_identifier,
  [1592] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(222), 1,
      sym_identifier,
  [1599] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_COLON,
  [1606] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(226), 1,
      sym_identifier,
  [1613] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(228), 1,
      sym_identifier,
  [1620] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(230), 1,
      sym_identifier,
  [1627] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      anon_sym_LF,
  [1634] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(234), 1,
      sym_identifier,
  [1641] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(236), 1,
      sym_identifier,
  [1648] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(238), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 39,
  [SMALL_STATE(4)] = 75,
  [SMALL_STATE(5)] = 106,
  [SMALL_STATE(6)] = 144,
  [SMALL_STATE(7)] = 174,
  [SMALL_STATE(8)] = 204,
  [SMALL_STATE(9)] = 234,
  [SMALL_STATE(10)] = 282,
  [SMALL_STATE(11)] = 312,
  [SMALL_STATE(12)] = 354,
  [SMALL_STATE(13)] = 384,
  [SMALL_STATE(14)] = 418,
  [SMALL_STATE(15)] = 448,
  [SMALL_STATE(16)] = 488,
  [SMALL_STATE(17)] = 531,
  [SMALL_STATE(18)] = 573,
  [SMALL_STATE(19)] = 592,
  [SMALL_STATE(20)] = 616,
  [SMALL_STATE(21)] = 640,
  [SMALL_STATE(22)] = 661,
  [SMALL_STATE(23)] = 682,
  [SMALL_STATE(24)] = 703,
  [SMALL_STATE(25)] = 724,
  [SMALL_STATE(26)] = 745,
  [SMALL_STATE(27)] = 761,
  [SMALL_STATE(28)] = 779,
  [SMALL_STATE(29)] = 792,
  [SMALL_STATE(30)] = 817,
  [SMALL_STATE(31)] = 830,
  [SMALL_STATE(32)] = 843,
  [SMALL_STATE(33)] = 856,
  [SMALL_STATE(34)] = 869,
  [SMALL_STATE(35)] = 885,
  [SMALL_STATE(36)] = 901,
  [SMALL_STATE(37)] = 917,
  [SMALL_STATE(38)] = 935,
  [SMALL_STATE(39)] = 953,
  [SMALL_STATE(40)] = 973,
  [SMALL_STATE(41)] = 991,
  [SMALL_STATE(42)] = 1011,
  [SMALL_STATE(43)] = 1028,
  [SMALL_STATE(44)] = 1047,
  [SMALL_STATE(45)] = 1064,
  [SMALL_STATE(46)] = 1083,
  [SMALL_STATE(47)] = 1100,
  [SMALL_STATE(48)] = 1117,
  [SMALL_STATE(49)] = 1132,
  [SMALL_STATE(50)] = 1149,
  [SMALL_STATE(51)] = 1166,
  [SMALL_STATE(52)] = 1183,
  [SMALL_STATE(53)] = 1193,
  [SMALL_STATE(54)] = 1207,
  [SMALL_STATE(55)] = 1216,
  [SMALL_STATE(56)] = 1229,
  [SMALL_STATE(57)] = 1238,
  [SMALL_STATE(58)] = 1247,
  [SMALL_STATE(59)] = 1258,
  [SMALL_STATE(60)] = 1271,
  [SMALL_STATE(61)] = 1280,
  [SMALL_STATE(62)] = 1293,
  [SMALL_STATE(63)] = 1302,
  [SMALL_STATE(64)] = 1311,
  [SMALL_STATE(65)] = 1320,
  [SMALL_STATE(66)] = 1333,
  [SMALL_STATE(67)] = 1346,
  [SMALL_STATE(68)] = 1355,
  [SMALL_STATE(69)] = 1364,
  [SMALL_STATE(70)] = 1377,
  [SMALL_STATE(71)] = 1390,
  [SMALL_STATE(72)] = 1403,
  [SMALL_STATE(73)] = 1416,
  [SMALL_STATE(74)] = 1429,
  [SMALL_STATE(75)] = 1440,
  [SMALL_STATE(76)] = 1448,
  [SMALL_STATE(77)] = 1456,
  [SMALL_STATE(78)] = 1466,
  [SMALL_STATE(79)] = 1474,
  [SMALL_STATE(80)] = 1484,
  [SMALL_STATE(81)] = 1494,
  [SMALL_STATE(82)] = 1504,
  [SMALL_STATE(83)] = 1514,
  [SMALL_STATE(84)] = 1522,
  [SMALL_STATE(85)] = 1530,
  [SMALL_STATE(86)] = 1540,
  [SMALL_STATE(87)] = 1550,
  [SMALL_STATE(88)] = 1557,
  [SMALL_STATE(89)] = 1564,
  [SMALL_STATE(90)] = 1571,
  [SMALL_STATE(91)] = 1578,
  [SMALL_STATE(92)] = 1585,
  [SMALL_STATE(93)] = 1592,
  [SMALL_STATE(94)] = 1599,
  [SMALL_STATE(95)] = 1606,
  [SMALL_STATE(96)] = 1613,
  [SMALL_STATE(97)] = 1620,
  [SMALL_STATE(98)] = 1627,
  [SMALL_STATE(99)] = 1634,
  [SMALL_STATE(100)] = 1641,
  [SMALL_STATE(101)] = 1648,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_expression, 3, .production_id = 6),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector_expression, 3, .production_id = 6),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 7),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 7),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 4),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 2, .production_id = 3),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 2, .production_id = 3),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 2),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 3),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_def, 3),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_def, 1),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_def, 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_def_repeat1, 2),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_def_repeat1, 2), SHIFT_REPEAT(93),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_def, 4),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direct_relationship, 5),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direct_relationship, 3),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indirect_relation, 3),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direct_relationship, 4),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relations, 2),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relations, 1),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relations_repeat1, 2),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relations_repeat1, 2), SHIFT_REPEAT(89),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(96),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(92),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_direct_relationship_repeat1, 2),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 3),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 4, .production_id = 5),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schema, 2),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition_declaration, 6, .production_id = 2),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_ref, 3),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(44),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model, 3),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition_declaration, 7, .production_id = 4),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition_body, 3),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition_declaration, 5, .production_id = 1),
  [170] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_direct_relationship_repeat1, 2), SHIFT_REPEAT(74),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_all, 2),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 4),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_condition_declaration_repeat1, 2), SHIFT_REPEAT(86),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_condition_declaration_repeat1, 2),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 2),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_direct_relationship_repeat1, 3),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 3),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_identifier, 1),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [238] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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

TS_PUBLIC const TSLanguage *tree_sitter_fga() {
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
