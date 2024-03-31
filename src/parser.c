#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 98
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 61
#define ALIAS_COUNT 0
#define TOKEN_COUNT 34
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 4

enum ts_symbol_identifiers {
  anon_sym_model = 1,
  anon_sym_LF = 2,
  anon_sym_schema = 3,
  sym_version = 4,
  anon_sym_type = 5,
  anon_sym_relations = 6,
  anon_sym_define = 7,
  anon_sym_COLON = 8,
  anon_sym_or = 9,
  anon_sym_and = 10,
  anon_sym_LBRACK = 11,
  anon_sym_COMMA = 12,
  anon_sym_RBRACK = 13,
  anon_sym_with = 14,
  anon_sym_from = 15,
  anon_sym_POUND = 16,
  anon_sym_COLON_STAR = 17,
  anon_sym_condition = 18,
  anon_sym_LPAREN = 19,
  anon_sym_RPAREN = 20,
  anon_sym_duration = 21,
  anon_sym_timestamp = 22,
  anon_sym_string = 23,
  anon_sym_ipaddress = 24,
  anon_sym_LBRACE = 25,
  anon_sym_LT = 26,
  anon_sym_GT = 27,
  anon_sym_RBRACE = 28,
  anon_sym_DOT = 29,
  anon_sym_PLUS = 30,
  anon_sym_DASH = 31,
  sym_identifier = 32,
  sym_comment = 33,
  sym_source_file = 34,
  sym_model = 35,
  sym_schema = 36,
  sym_type_declaration = 37,
  sym_relations = 38,
  sym_definition = 39,
  sym_relation_def = 40,
  sym_operator = 41,
  sym_direct_relationship = 42,
  sym_conditional = 43,
  sym_indirect_relation = 44,
  sym_relation_ref = 45,
  sym_all = 46,
  sym_condition_declaration = 47,
  sym_param = 48,
  sym_param_type = 49,
  sym_condition_body = 50,
  sym_expression = 51,
  sym_fn = 52,
  sym_condition_operator = 53,
  aux_sym_source_file_repeat1 = 54,
  aux_sym_relations_repeat1 = 55,
  aux_sym_relation_def_repeat1 = 56,
  aux_sym_direct_relationship_repeat1 = 57,
  aux_sym_condition_declaration_repeat1 = 58,
  aux_sym_expression_repeat1 = 59,
  aux_sym_fn_repeat1 = 60,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
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
  [anon_sym_duration] = "duration",
  [anon_sym_timestamp] = "timestamp",
  [anon_sym_string] = "string",
  [anon_sym_ipaddress] = "ipaddress",
  [anon_sym_LBRACE] = "{",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_RBRACE] = "}",
  [anon_sym_DOT] = ".",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [sym_identifier] = "identifier",
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
  [sym_param_type] = "param_type",
  [sym_condition_body] = "condition_body",
  [sym_expression] = "expression",
  [sym_fn] = "fn",
  [sym_condition_operator] = "condition_operator",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_relations_repeat1] = "relations_repeat1",
  [aux_sym_relation_def_repeat1] = "relation_def_repeat1",
  [aux_sym_direct_relationship_repeat1] = "direct_relationship_repeat1",
  [aux_sym_condition_declaration_repeat1] = "condition_declaration_repeat1",
  [aux_sym_expression_repeat1] = "expression_repeat1",
  [aux_sym_fn_repeat1] = "fn_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
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
  [anon_sym_duration] = anon_sym_duration,
  [anon_sym_timestamp] = anon_sym_timestamp,
  [anon_sym_string] = anon_sym_string,
  [anon_sym_ipaddress] = anon_sym_ipaddress,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [sym_identifier] = sym_identifier,
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
  [sym_param_type] = sym_param_type,
  [sym_condition_body] = sym_condition_body,
  [sym_expression] = sym_expression,
  [sym_fn] = sym_fn,
  [sym_condition_operator] = sym_condition_operator,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_relations_repeat1] = aux_sym_relations_repeat1,
  [aux_sym_relation_def_repeat1] = aux_sym_relation_def_repeat1,
  [aux_sym_direct_relationship_repeat1] = aux_sym_direct_relationship_repeat1,
  [aux_sym_condition_declaration_repeat1] = aux_sym_condition_declaration_repeat1,
  [aux_sym_expression_repeat1] = aux_sym_expression_repeat1,
  [aux_sym_fn_repeat1] = aux_sym_fn_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
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
  [anon_sym_duration] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_timestamp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_string] = {
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
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
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
  [sym_identifier] = {
    .visible = true,
    .named = true,
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
  [sym_param_type] = {
    .visible = true,
    .named = true,
  },
  [sym_condition_body] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_fn] = {
    .visible = true,
    .named = true,
  },
  [sym_condition_operator] = {
    .visible = true,
    .named = true,
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
  [aux_sym_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_fn_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_method = 1,
  field_operator = 2,
  field_relation = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_method] = "method",
  [field_operator] = "operator",
  [field_relation] = "relation",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_operator, 0},
  [1] =
    {field_relation, 1},
  [2] =
    {field_method, 2},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(79);
      if (lookahead == '#') ADVANCE(96);
      if (lookahead == '(') ADVANCE(99);
      if (lookahead == ')') ADVANCE(100);
      if (lookahead == '+') ADVANCE(110);
      if (lookahead == ',') ADVANCE(92);
      if (lookahead == '-') ADVANCE(111);
      if (lookahead == '.') ADVANCE(109);
      if (lookahead == ':') ADVANCE(88);
      if (lookahead == '<') ADVANCE(106);
      if (lookahead == '>') ADVANCE(107);
      if (lookahead == '[') ADVANCE(91);
      if (lookahead == ']') ADVANCE(93);
      if (lookahead == 'a') ADVANCE(44);
      if (lookahead == 'c') ADVANCE(56);
      if (lookahead == 'd') ADVANCE(18);
      if (lookahead == 'f') ADVANCE(62);
      if (lookahead == 'i') ADVANCE(57);
      if (lookahead == 'm') ADVANCE(51);
      if (lookahead == 'o') ADVANCE(60);
      if (lookahead == 'r') ADVANCE(19);
      if (lookahead == 's') ADVANCE(12);
      if (lookahead == 't') ADVANCE(30);
      if (lookahead == 'w') ADVANCE(31);
      if (lookahead == '{') ADVANCE(105);
      if (lookahead == '}') ADVANCE(108);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(77)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(81);
      if (lookahead == '#') ADVANCE(75);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(96);
      if (lookahead == ',') ADVANCE(92);
      if (lookahead == ':') ADVANCE(5);
      if (lookahead == ']') ADVANCE(93);
      if (lookahead == 'w') ADVANCE(31);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(75);
      if (lookahead == ')') ADVANCE(100);
      if (lookahead == '[') ADVANCE(91);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(75);
      if (lookahead == ',') ADVANCE(92);
      if (lookahead == ']') ADVANCE(93);
      if (lookahead == 'w') ADVANCE(31);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(97);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(82);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(70);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(15);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(41);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(72);
      END_STATE();
    case 12:
      if (lookahead == 'c') ADVANCE(29);
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 13:
      if (lookahead == 'd') ADVANCE(90);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(64);
      END_STATE();
    case 15:
      if (lookahead == 'd') ADVANCE(14);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(23);
      END_STATE();
    case 17:
      if (lookahead == 'd') ADVANCE(37);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(26);
      if (lookahead == 'u') ADVANCE(61);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 26:
      if (lookahead == 'f') ADVANCE(32);
      END_STATE();
    case 27:
      if (lookahead == 'g') ADVANCE(103);
      END_STATE();
    case 28:
      if (lookahead == 'h') ADVANCE(94);
      END_STATE();
    case 29:
      if (lookahead == 'h') ADVANCE(25);
      END_STATE();
    case 30:
      if (lookahead == 'i') ADVANCE(42);
      if (lookahead == 'y') ADVANCE(59);
      END_STATE();
    case 31:
      if (lookahead == 'i') ADVANCE(69);
      END_STATE();
    case 32:
      if (lookahead == 'i') ADVANCE(50);
      END_STATE();
    case 33:
      if (lookahead == 'i') ADVANCE(45);
      END_STATE();
    case 34:
      if (lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 36:
      if (lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 37:
      if (lookahead == 'i') ADVANCE(73);
      END_STATE();
    case 38:
      if (lookahead == 'l') ADVANCE(80);
      END_STATE();
    case 39:
      if (lookahead == 'l') ADVANCE(11);
      END_STATE();
    case 40:
      if (lookahead == 'm') ADVANCE(95);
      END_STATE();
    case 41:
      if (lookahead == 'm') ADVANCE(58);
      END_STATE();
    case 42:
      if (lookahead == 'm') ADVANCE(20);
      END_STATE();
    case 43:
      if (lookahead == 'm') ADVANCE(7);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(27);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(101);
      END_STATE();
    case 47:
      if (lookahead == 'n') ADVANCE(98);
      END_STATE();
    case 48:
      if (lookahead == 'n') ADVANCE(17);
      END_STATE();
    case 49:
      if (lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 50:
      if (lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 51:
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 52:
      if (lookahead == 'o') ADVANCE(40);
      END_STATE();
    case 53:
      if (lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 54:
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 55:
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 56:
      if (lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 57:
      if (lookahead == 'p') ADVANCE(9);
      END_STATE();
    case 58:
      if (lookahead == 'p') ADVANCE(102);
      END_STATE();
    case 59:
      if (lookahead == 'p') ADVANCE(21);
      END_STATE();
    case 60:
      if (lookahead == 'r') ADVANCE(89);
      END_STATE();
    case 61:
      if (lookahead == 'r') ADVANCE(8);
      END_STATE();
    case 62:
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 63:
      if (lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 64:
      if (lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 65:
      if (lookahead == 's') ADVANCE(104);
      END_STATE();
    case 66:
      if (lookahead == 's') ADVANCE(85);
      END_STATE();
    case 67:
      if (lookahead == 's') ADVANCE(71);
      END_STATE();
    case 68:
      if (lookahead == 's') ADVANCE(65);
      END_STATE();
    case 69:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 70:
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 71:
      if (lookahead == 't') ADVANCE(10);
      END_STATE();
    case 72:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 73:
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 74:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 75:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(113);
      END_STATE();
    case 76:
      if (eof) ADVANCE(79);
      if (lookahead == '#') ADVANCE(75);
      if (lookahead == '(') ADVANCE(99);
      if (lookahead == ')') ADVANCE(100);
      if (lookahead == '+') ADVANCE(110);
      if (lookahead == ',') ADVANCE(92);
      if (lookahead == '-') ADVANCE(111);
      if (lookahead == '.') ADVANCE(109);
      if (lookahead == ':') ADVANCE(87);
      if (lookahead == '<') ADVANCE(106);
      if (lookahead == '>') ADVANCE(107);
      if (lookahead == ']') ADVANCE(93);
      if (lookahead == 'a') ADVANCE(44);
      if (lookahead == 'c') ADVANCE(56);
      if (lookahead == 'd') ADVANCE(18);
      if (lookahead == 'f') ADVANCE(62);
      if (lookahead == 'i') ADVANCE(57);
      if (lookahead == 'm') ADVANCE(51);
      if (lookahead == 'o') ADVANCE(60);
      if (lookahead == 'r') ADVANCE(19);
      if (lookahead == 's') ADVANCE(12);
      if (lookahead == 't') ADVANCE(30);
      if (lookahead == 'w') ADVANCE(31);
      if (lookahead == '{') ADVANCE(105);
      if (lookahead == '}') ADVANCE(108);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(78)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 77:
      if (eof) ADVANCE(79);
      if (lookahead == '#') ADVANCE(75);
      if (lookahead == '(') ADVANCE(99);
      if (lookahead == ')') ADVANCE(100);
      if (lookahead == '+') ADVANCE(110);
      if (lookahead == ',') ADVANCE(92);
      if (lookahead == '-') ADVANCE(111);
      if (lookahead == ':') ADVANCE(87);
      if (lookahead == '<') ADVANCE(106);
      if (lookahead == '>') ADVANCE(107);
      if (lookahead == '[') ADVANCE(91);
      if (lookahead == ']') ADVANCE(93);
      if (lookahead == 'a') ADVANCE(44);
      if (lookahead == 'c') ADVANCE(56);
      if (lookahead == 'd') ADVANCE(18);
      if (lookahead == 'f') ADVANCE(62);
      if (lookahead == 'i') ADVANCE(57);
      if (lookahead == 'm') ADVANCE(51);
      if (lookahead == 'o') ADVANCE(60);
      if (lookahead == 'r') ADVANCE(19);
      if (lookahead == 's') ADVANCE(12);
      if (lookahead == 't') ADVANCE(30);
      if (lookahead == 'w') ADVANCE(31);
      if (lookahead == '{') ADVANCE(105);
      if (lookahead == '}') ADVANCE(108);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(77)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 78:
      if (eof) ADVANCE(79);
      if (lookahead == '#') ADVANCE(75);
      if (lookahead == '(') ADVANCE(99);
      if (lookahead == ')') ADVANCE(100);
      if (lookahead == '+') ADVANCE(110);
      if (lookahead == ',') ADVANCE(92);
      if (lookahead == '-') ADVANCE(111);
      if (lookahead == ':') ADVANCE(87);
      if (lookahead == '<') ADVANCE(106);
      if (lookahead == '>') ADVANCE(107);
      if (lookahead == ']') ADVANCE(93);
      if (lookahead == 'a') ADVANCE(44);
      if (lookahead == 'c') ADVANCE(56);
      if (lookahead == 'd') ADVANCE(18);
      if (lookahead == 'f') ADVANCE(62);
      if (lookahead == 'i') ADVANCE(57);
      if (lookahead == 'm') ADVANCE(51);
      if (lookahead == 'o') ADVANCE(60);
      if (lookahead == 'r') ADVANCE(19);
      if (lookahead == 's') ADVANCE(12);
      if (lookahead == 't') ADVANCE(30);
      if (lookahead == 'w') ADVANCE(31);
      if (lookahead == '{') ADVANCE(105);
      if (lookahead == '}') ADVANCE(108);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(78)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_model);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_schema);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_version);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_relations);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_define);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '*') ADVANCE(97);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_COLON_STAR);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_condition);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_duration);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_timestamp);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_ipaddress);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(113);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 76},
  [2] = {.lex_state = 76},
  [3] = {.lex_state = 76},
  [4] = {.lex_state = 76},
  [5] = {.lex_state = 76},
  [6] = {.lex_state = 76},
  [7] = {.lex_state = 76},
  [8] = {.lex_state = 76},
  [9] = {.lex_state = 76},
  [10] = {.lex_state = 76},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 76},
  [13] = {.lex_state = 76},
  [14] = {.lex_state = 76},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 76},
  [17] = {.lex_state = 76},
  [18] = {.lex_state = 76},
  [19] = {.lex_state = 76},
  [20] = {.lex_state = 76},
  [21] = {.lex_state = 76},
  [22] = {.lex_state = 76},
  [23] = {.lex_state = 76},
  [24] = {.lex_state = 76},
  [25] = {.lex_state = 76},
  [26] = {.lex_state = 76},
  [27] = {.lex_state = 76},
  [28] = {.lex_state = 76},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 76},
  [31] = {.lex_state = 76},
  [32] = {.lex_state = 76},
  [33] = {.lex_state = 76},
  [34] = {.lex_state = 76},
  [35] = {.lex_state = 76},
  [36] = {.lex_state = 76},
  [37] = {.lex_state = 76},
  [38] = {.lex_state = 76},
  [39] = {.lex_state = 76},
  [40] = {.lex_state = 76},
  [41] = {.lex_state = 76},
  [42] = {.lex_state = 76},
  [43] = {.lex_state = 76},
  [44] = {.lex_state = 76},
  [45] = {.lex_state = 76},
  [46] = {.lex_state = 76},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 76},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 76},
  [51] = {.lex_state = 76},
  [52] = {.lex_state = 76},
  [53] = {.lex_state = 76},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 76},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 76},
  [58] = {.lex_state = 76},
  [59] = {.lex_state = 76},
  [60] = {.lex_state = 76},
  [61] = {.lex_state = 76},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 76},
  [64] = {.lex_state = 76},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 76},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 76},
  [69] = {.lex_state = 76},
  [70] = {.lex_state = 76},
  [71] = {.lex_state = 76},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 76},
  [74] = {.lex_state = 76},
  [75] = {.lex_state = 76},
  [76] = {.lex_state = 3},
  [77] = {.lex_state = 76},
  [78] = {.lex_state = 3},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 76},
  [81] = {.lex_state = 76},
  [82] = {.lex_state = 3},
  [83] = {.lex_state = 3},
  [84] = {.lex_state = 76},
  [85] = {.lex_state = 3},
  [86] = {.lex_state = 76},
  [87] = {.lex_state = 3},
  [88] = {.lex_state = 3},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 3},
  [91] = {.lex_state = 76},
  [92] = {.lex_state = 76},
  [93] = {.lex_state = 76},
  [94] = {.lex_state = 3},
  [95] = {.lex_state = 3},
  [96] = {.lex_state = 3},
  [97] = {.lex_state = 3},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_model] = ACTIONS(1),
    [anon_sym_schema] = ACTIONS(1),
    [sym_version] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_relations] = ACTIONS(1),
    [anon_sym_define] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
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
    [anon_sym_duration] = ACTIONS(1),
    [anon_sym_timestamp] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_ipaddress] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(86),
    [sym_model] = STATE(23),
    [anon_sym_model] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_from,
    STATE(8), 1,
      aux_sym_relation_def_repeat1,
    STATE(67), 1,
      sym_operator,
    ACTIONS(11), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(9), 4,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_define,
      anon_sym_condition,
  [23] = 6,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_from,
    STATE(6), 1,
      aux_sym_relation_def_repeat1,
    STATE(67), 1,
      sym_operator,
    ACTIONS(11), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(15), 4,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_define,
      anon_sym_condition,
  [46] = 5,
    ACTIONS(7), 1,
      sym_comment,
    STATE(4), 1,
      aux_sym_relation_def_repeat1,
    STATE(67), 1,
      sym_operator,
    ACTIONS(19), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(17), 4,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_define,
      anon_sym_condition,
  [66] = 6,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(24), 1,
      anon_sym_DOT,
    STATE(13), 1,
      aux_sym_expression_repeat1,
    STATE(85), 1,
      sym_condition_operator,
    ACTIONS(26), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(22), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_RBRACE,
  [88] = 5,
    ACTIONS(7), 1,
      sym_comment,
    STATE(4), 1,
      aux_sym_relation_def_repeat1,
    STATE(67), 1,
      sym_operator,
    ACTIONS(11), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(28), 4,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_define,
      anon_sym_condition,
  [108] = 5,
    ACTIONS(7), 1,
      sym_comment,
    STATE(8), 1,
      aux_sym_relation_def_repeat1,
    STATE(67), 1,
      sym_operator,
    ACTIONS(11), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(9), 4,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_define,
      anon_sym_condition,
  [128] = 5,
    ACTIONS(7), 1,
      sym_comment,
    STATE(4), 1,
      aux_sym_relation_def_repeat1,
    STATE(67), 1,
      sym_operator,
    ACTIONS(11), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(30), 4,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_define,
      anon_sym_condition,
  [148] = 5,
    ACTIONS(7), 1,
      sym_comment,
    STATE(6), 1,
      aux_sym_relation_def_repeat1,
    STATE(67), 1,
      sym_operator,
    ACTIONS(11), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(15), 4,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_define,
      anon_sym_condition,
  [168] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_from,
    ACTIONS(17), 6,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_define,
      anon_sym_or,
      anon_sym_and,
      anon_sym_condition,
  [183] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(32), 1,
      anon_sym_COMMA,
    ACTIONS(34), 1,
      anon_sym_RBRACK,
    ACTIONS(36), 1,
      anon_sym_with,
    ACTIONS(38), 1,
      anon_sym_POUND,
    ACTIONS(40), 1,
      anon_sym_COLON_STAR,
    STATE(58), 1,
      aux_sym_direct_relationship_repeat1,
    STATE(60), 1,
      sym_conditional,
  [208] = 5,
    ACTIONS(7), 1,
      sym_comment,
    STATE(12), 1,
      aux_sym_expression_repeat1,
    STATE(85), 1,
      sym_condition_operator,
    ACTIONS(44), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(42), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_RBRACE,
  [227] = 5,
    ACTIONS(7), 1,
      sym_comment,
    STATE(12), 1,
      aux_sym_expression_repeat1,
    STATE(85), 1,
      sym_condition_operator,
    ACTIONS(26), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(47), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_RBRACE,
  [246] = 4,
    ACTIONS(7), 1,
      sym_comment,
    STATE(72), 1,
      sym_operator,
    ACTIONS(11), 2,
      anon_sym_or,
      anon_sym_and,
    ACTIONS(9), 4,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_define,
      anon_sym_condition,
  [263] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(36), 1,
      anon_sym_with,
    ACTIONS(38), 1,
      anon_sym_POUND,
    ACTIONS(40), 1,
      anon_sym_COLON_STAR,
    STATE(73), 1,
      sym_conditional,
    ACTIONS(49), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [283] = 5,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
    ACTIONS(53), 1,
      anon_sym_type,
    ACTIONS(56), 1,
      anon_sym_condition,
    STATE(16), 3,
      sym_type_declaration,
      sym_condition_declaration,
      aux_sym_source_file_repeat1,
  [301] = 5,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
    ACTIONS(61), 1,
      anon_sym_type,
    ACTIONS(63), 1,
      anon_sym_condition,
    STATE(16), 3,
      sym_type_declaration,
      sym_condition_declaration,
      aux_sym_source_file_repeat1,
  [319] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(17), 6,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_define,
      anon_sym_or,
      anon_sym_and,
      anon_sym_condition,
  [331] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(65), 6,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_define,
      anon_sym_or,
      anon_sym_and,
      anon_sym_condition,
  [343] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(67), 6,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_define,
      anon_sym_or,
      anon_sym_and,
      anon_sym_condition,
  [355] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_define,
    STATE(25), 2,
      sym_definition,
      aux_sym_relations_repeat1,
    ACTIONS(69), 3,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_condition,
  [371] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(73), 6,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_define,
      anon_sym_or,
      anon_sym_and,
      anon_sym_condition,
  [383] = 5,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_type,
    ACTIONS(63), 1,
      anon_sym_condition,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
    STATE(17), 3,
      sym_type_declaration,
      sym_condition_declaration,
      aux_sym_source_file_repeat1,
  [401] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(79), 1,
      anon_sym_define,
    STATE(24), 2,
      sym_definition,
      aux_sym_relations_repeat1,
    ACTIONS(77), 3,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_condition,
  [417] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_define,
    STATE(24), 2,
      sym_definition,
      aux_sym_relations_repeat1,
    ACTIONS(82), 3,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_condition,
  [433] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(84), 6,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_define,
      anon_sym_or,
      anon_sym_and,
      anon_sym_condition,
  [445] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(42), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
  [456] = 3,
    ACTIONS(7), 1,
      sym_comment,
    STATE(69), 1,
      sym_param_type,
    ACTIONS(86), 4,
      anon_sym_duration,
      anon_sym_timestamp,
      anon_sym_string,
      anon_sym_ipaddress,
  [469] = 6,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(88), 1,
      anon_sym_LBRACK,
    ACTIONS(90), 1,
      sym_identifier,
    STATE(7), 1,
      sym_indirect_relation,
    STATE(14), 1,
      sym_direct_relationship,
    STATE(32), 1,
      sym_relation_def,
  [488] = 6,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(32), 1,
      anon_sym_COMMA,
    ACTIONS(34), 1,
      anon_sym_RBRACK,
    ACTIONS(36), 1,
      anon_sym_with,
    STATE(58), 1,
      aux_sym_direct_relationship_repeat1,
    STATE(60), 1,
      sym_conditional,
  [507] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(94), 1,
      anon_sym_relations,
    STATE(57), 1,
      sym_relations,
    ACTIONS(92), 3,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_condition,
  [522] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(96), 4,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_define,
      anon_sym_condition,
  [532] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(36), 1,
      anon_sym_with,
    STATE(73), 1,
      sym_conditional,
    ACTIONS(49), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [546] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(98), 3,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_condition,
  [555] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(100), 1,
      anon_sym_COMMA,
    ACTIONS(102), 1,
      anon_sym_RPAREN,
    STATE(40), 1,
      aux_sym_fn_repeat1,
  [568] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_RBRACE,
    ACTIONS(104), 2,
      anon_sym_LT,
      anon_sym_GT,
  [579] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(22), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_RBRACE,
  [588] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_COMMA,
    ACTIONS(111), 1,
      anon_sym_RPAREN,
    STATE(38), 1,
      aux_sym_fn_repeat1,
  [601] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(113), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_RBRACE,
  [610] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(100), 1,
      anon_sym_COMMA,
    ACTIONS(115), 1,
      anon_sym_RPAREN,
    STATE(38), 1,
      aux_sym_fn_repeat1,
  [623] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(117), 3,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_condition,
  [632] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(119), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_RBRACE,
  [641] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_COMMA,
    ACTIONS(124), 1,
      anon_sym_RPAREN,
    STATE(43), 1,
      aux_sym_condition_declaration_repeat1,
  [654] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_RBRACK,
    ACTIONS(126), 1,
      anon_sym_COMMA,
    STATE(44), 1,
      aux_sym_direct_relationship_repeat1,
  [667] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(32), 1,
      anon_sym_COMMA,
    ACTIONS(129), 1,
      anon_sym_RBRACK,
    STATE(44), 1,
      aux_sym_direct_relationship_repeat1,
  [680] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(131), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_with,
  [689] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(133), 1,
      sym_identifier,
    STATE(37), 1,
      sym_fn,
    STATE(93), 1,
      sym_expression,
  [702] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(135), 3,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_condition,
  [711] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(137), 1,
      sym_identifier,
    STATE(30), 2,
      sym_relation_ref,
      sym_all,
  [722] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(139), 3,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_condition,
  [731] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(141), 1,
      anon_sym_COMMA,
    ACTIONS(143), 1,
      anon_sym_RPAREN,
    STATE(43), 1,
      aux_sym_condition_declaration_repeat1,
  [744] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(145), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_RBRACE,
  [753] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(147), 3,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_condition,
  [762] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(149), 1,
      anon_sym_RPAREN,
    ACTIONS(151), 1,
      sym_identifier,
    STATE(59), 1,
      sym_param,
  [775] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(153), 3,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_condition,
  [784] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(133), 1,
      sym_identifier,
    STATE(36), 1,
      sym_expression,
    STATE(37), 1,
      sym_fn,
  [797] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(155), 3,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_condition,
  [806] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(32), 1,
      anon_sym_COMMA,
    ACTIONS(157), 1,
      anon_sym_RBRACK,
    STATE(44), 1,
      aux_sym_direct_relationship_repeat1,
  [819] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(141), 1,
      anon_sym_COMMA,
    ACTIONS(159), 1,
      anon_sym_RPAREN,
    STATE(51), 1,
      aux_sym_condition_declaration_repeat1,
  [832] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(32), 1,
      anon_sym_COMMA,
    ACTIONS(157), 1,
      anon_sym_RBRACK,
    STATE(45), 1,
      aux_sym_direct_relationship_repeat1,
  [845] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(161), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_with,
  [854] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(163), 1,
      sym_identifier,
    STATE(33), 2,
      sym_relation_ref,
      sym_all,
  [865] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(165), 3,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_condition,
  [874] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_LBRACE,
    STATE(41), 1,
      sym_condition_body,
  [884] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_RPAREN,
    ACTIONS(171), 1,
      sym_identifier,
  [894] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(173), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [902] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(175), 1,
      sym_identifier,
    STATE(18), 1,
      sym_indirect_relation,
  [912] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_LBRACE,
    STATE(55), 1,
      sym_condition_body,
  [922] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(177), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [930] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(111), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [938] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_schema,
    STATE(50), 1,
      sym_schema,
  [948] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(181), 1,
      sym_identifier,
    STATE(9), 1,
      sym_indirect_relation,
  [958] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(183), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [966] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(124), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [974] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_LBRACE,
    STATE(34), 1,
      sym_condition_body,
  [984] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(151), 1,
      sym_identifier,
    STATE(74), 1,
      sym_param,
  [994] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(185), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1002] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(187), 1,
      sym_identifier,
  [1009] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      anon_sym_LF,
  [1016] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(191), 1,
      sym_version,
  [1023] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_COLON,
  [1030] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(195), 1,
      sym_identifier,
  [1037] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(197), 1,
      sym_identifier,
  [1044] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_COLON,
  [1051] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(201), 1,
      sym_identifier,
  [1058] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(203), 1,
      ts_builtin_sym_end,
  [1065] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(205), 1,
      sym_identifier,
  [1072] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(207), 1,
      sym_identifier,
  [1079] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      anon_sym_LF,
  [1086] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(211), 1,
      sym_identifier,
  [1093] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
  [1100] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_LPAREN,
  [1107] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(217), 1,
      anon_sym_RBRACE,
  [1114] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(219), 1,
      sym_identifier,
  [1121] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(221), 1,
      sym_identifier,
  [1128] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(223), 1,
      sym_identifier,
  [1135] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(225), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 23,
  [SMALL_STATE(4)] = 46,
  [SMALL_STATE(5)] = 66,
  [SMALL_STATE(6)] = 88,
  [SMALL_STATE(7)] = 108,
  [SMALL_STATE(8)] = 128,
  [SMALL_STATE(9)] = 148,
  [SMALL_STATE(10)] = 168,
  [SMALL_STATE(11)] = 183,
  [SMALL_STATE(12)] = 208,
  [SMALL_STATE(13)] = 227,
  [SMALL_STATE(14)] = 246,
  [SMALL_STATE(15)] = 263,
  [SMALL_STATE(16)] = 283,
  [SMALL_STATE(17)] = 301,
  [SMALL_STATE(18)] = 319,
  [SMALL_STATE(19)] = 331,
  [SMALL_STATE(20)] = 343,
  [SMALL_STATE(21)] = 355,
  [SMALL_STATE(22)] = 371,
  [SMALL_STATE(23)] = 383,
  [SMALL_STATE(24)] = 401,
  [SMALL_STATE(25)] = 417,
  [SMALL_STATE(26)] = 433,
  [SMALL_STATE(27)] = 445,
  [SMALL_STATE(28)] = 456,
  [SMALL_STATE(29)] = 469,
  [SMALL_STATE(30)] = 488,
  [SMALL_STATE(31)] = 507,
  [SMALL_STATE(32)] = 522,
  [SMALL_STATE(33)] = 532,
  [SMALL_STATE(34)] = 546,
  [SMALL_STATE(35)] = 555,
  [SMALL_STATE(36)] = 568,
  [SMALL_STATE(37)] = 579,
  [SMALL_STATE(38)] = 588,
  [SMALL_STATE(39)] = 601,
  [SMALL_STATE(40)] = 610,
  [SMALL_STATE(41)] = 623,
  [SMALL_STATE(42)] = 632,
  [SMALL_STATE(43)] = 641,
  [SMALL_STATE(44)] = 654,
  [SMALL_STATE(45)] = 667,
  [SMALL_STATE(46)] = 680,
  [SMALL_STATE(47)] = 689,
  [SMALL_STATE(48)] = 702,
  [SMALL_STATE(49)] = 711,
  [SMALL_STATE(50)] = 722,
  [SMALL_STATE(51)] = 731,
  [SMALL_STATE(52)] = 744,
  [SMALL_STATE(53)] = 753,
  [SMALL_STATE(54)] = 762,
  [SMALL_STATE(55)] = 775,
  [SMALL_STATE(56)] = 784,
  [SMALL_STATE(57)] = 797,
  [SMALL_STATE(58)] = 806,
  [SMALL_STATE(59)] = 819,
  [SMALL_STATE(60)] = 832,
  [SMALL_STATE(61)] = 845,
  [SMALL_STATE(62)] = 854,
  [SMALL_STATE(63)] = 865,
  [SMALL_STATE(64)] = 874,
  [SMALL_STATE(65)] = 884,
  [SMALL_STATE(66)] = 894,
  [SMALL_STATE(67)] = 902,
  [SMALL_STATE(68)] = 912,
  [SMALL_STATE(69)] = 922,
  [SMALL_STATE(70)] = 930,
  [SMALL_STATE(71)] = 938,
  [SMALL_STATE(72)] = 948,
  [SMALL_STATE(73)] = 958,
  [SMALL_STATE(74)] = 966,
  [SMALL_STATE(75)] = 974,
  [SMALL_STATE(76)] = 984,
  [SMALL_STATE(77)] = 994,
  [SMALL_STATE(78)] = 1002,
  [SMALL_STATE(79)] = 1009,
  [SMALL_STATE(80)] = 1016,
  [SMALL_STATE(81)] = 1023,
  [SMALL_STATE(82)] = 1030,
  [SMALL_STATE(83)] = 1037,
  [SMALL_STATE(84)] = 1044,
  [SMALL_STATE(85)] = 1051,
  [SMALL_STATE(86)] = 1058,
  [SMALL_STATE(87)] = 1065,
  [SMALL_STATE(88)] = 1072,
  [SMALL_STATE(89)] = 1079,
  [SMALL_STATE(90)] = 1086,
  [SMALL_STATE(91)] = 1093,
  [SMALL_STATE(92)] = 1100,
  [SMALL_STATE(93)] = 1107,
  [SMALL_STATE(94)] = 1114,
  [SMALL_STATE(95)] = 1121,
  [SMALL_STATE(96)] = 1128,
  [SMALL_STATE(97)] = 1135,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_def, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_def, 3),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_def_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_def_repeat1, 2), SHIFT_REPEAT(78),
  [22] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [24] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_def, 4),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_def, 2),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(87),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 2),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_direct_relationship_repeat1, 2),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(83),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(82),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direct_relationship, 5),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indirect_relation, 3),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relations, 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direct_relationship, 3),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relations_repeat1, 2),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relations_repeat1, 2), SHIFT_REPEAT(94),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relations, 2),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direct_relationship, 4),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 3),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 4, .production_id = 2),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition_declaration, 7),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fn_repeat1, 2), SHIFT_REPEAT(90),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fn_repeat1, 2),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn, 7, .production_id = 3),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition_declaration, 6),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn, 6, .production_id = 3),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_condition_declaration_repeat1, 2), SHIFT_REPEAT(76),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_condition_declaration_repeat1, 2),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_direct_relationship_repeat1, 2), SHIFT_REPEAT(62),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_ref, 3),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition_body, 3),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model, 3),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn, 5, .production_id = 3),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schema, 2),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition_declaration, 5),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 4),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_all, 2),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition_body, 5),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_type, 1),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 3),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_direct_relationship_repeat1, 3),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 2),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [203] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition_operator, 1, .production_id = 1),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
