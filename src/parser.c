#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 134
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 55
#define ALIAS_COUNT 0
#define TOKEN_COUNT 28
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 8
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 12

enum ts_symbol_identifiers {
  aux_sym_request_separator_token1 = 1,
  aux_sym_request_separator_token2 = 2,
  aux_sym_request_separator_token3 = 3,
  aux_sym_request_separator_token4 = 4,
  sym_request_name = 5,
  sym__ws = 6,
  anon_sym_LBRACE = 7,
  anon_sym_RBRACE = 8,
  anon_sym_DOLLARPRE = 9,
  anon_sym_DOLLARRETRY = 10,
  anon_sym_DOLLARASSERT = 11,
  anon_sym_DOLLARPOST = 12,
  anon_sym_DOLLAR = 13,
  aux_sym_directive_token1 = 14,
  aux_sym_request_line_token1 = 15,
  sym_method_chunk = 16,
  sym_url_chunk = 17,
  sym_proto_chunk = 18,
  anon_sym_COLON = 19,
  sym_header_name_chunk = 20,
  sym_header_value_chunk = 21,
  sym_dynamic_chunk = 22,
  aux_sym_body_chunk_token1 = 23,
  aux_sym_body_chunk_token2 = 24,
  aux_sym_body_chunk_token3 = 25,
  aux_sym_body_chunk_token4 = 26,
  sym_raw_lua_content = 27,
  sym_source_file = 28,
  sym_request_separator = 29,
  sym_request = 30,
  sym_lifecycle_script = 31,
  sym_lifecycle_directive = 32,
  sym_inline_script = 33,
  sym_directive = 34,
  sym_request_line = 35,
  sym_method = 36,
  sym_url = 37,
  sym_proto = 38,
  sym_header_line = 39,
  sym_header_name = 40,
  sym_header_value = 41,
  sym_dynamic_header = 42,
  sym_body = 43,
  sym_body_chunk = 44,
  aux_sym_source_file_repeat1 = 45,
  aux_sym_request_repeat1 = 46,
  aux_sym_request_repeat2 = 47,
  aux_sym_method_repeat1 = 48,
  aux_sym_url_repeat1 = 49,
  aux_sym_proto_repeat1 = 50,
  aux_sym_header_name_repeat1 = 51,
  aux_sym_header_value_repeat1 = 52,
  aux_sym_dynamic_header_repeat1 = 53,
  aux_sym_body_repeat1 = 54,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_request_separator_token1] = "request_separator_token1",
  [aux_sym_request_separator_token2] = "request_separator_token2",
  [aux_sym_request_separator_token3] = "request_separator_token3",
  [aux_sym_request_separator_token4] = "request_separator_token4",
  [sym_request_name] = "request_name",
  [sym__ws] = "_ws",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_DOLLARPRE] = "$PRE",
  [anon_sym_DOLLARRETRY] = "$RETRY",
  [anon_sym_DOLLARASSERT] = "$ASSERT",
  [anon_sym_DOLLARPOST] = "$POST",
  [anon_sym_DOLLAR] = "$",
  [aux_sym_directive_token1] = "directive_token1",
  [aux_sym_request_line_token1] = "request_line_token1",
  [sym_method_chunk] = "method_chunk",
  [sym_url_chunk] = "url_chunk",
  [sym_proto_chunk] = "proto_chunk",
  [anon_sym_COLON] = ":",
  [sym_header_name_chunk] = "header_name_chunk",
  [sym_header_value_chunk] = "header_value_chunk",
  [sym_dynamic_chunk] = "dynamic_chunk",
  [aux_sym_body_chunk_token1] = "body_chunk_token1",
  [aux_sym_body_chunk_token2] = "body_chunk_token2",
  [aux_sym_body_chunk_token3] = "body_chunk_token3",
  [aux_sym_body_chunk_token4] = "body_chunk_token4",
  [sym_raw_lua_content] = "raw_lua_content",
  [sym_source_file] = "source_file",
  [sym_request_separator] = "request_separator",
  [sym_request] = "request",
  [sym_lifecycle_script] = "lifecycle_script",
  [sym_lifecycle_directive] = "lifecycle_directive",
  [sym_inline_script] = "inline_script",
  [sym_directive] = "directive",
  [sym_request_line] = "request_line",
  [sym_method] = "method",
  [sym_url] = "url",
  [sym_proto] = "proto",
  [sym_header_line] = "header_line",
  [sym_header_name] = "header_name",
  [sym_header_value] = "header_value",
  [sym_dynamic_header] = "dynamic_header",
  [sym_body] = "body",
  [sym_body_chunk] = "body_chunk",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_request_repeat1] = "request_repeat1",
  [aux_sym_request_repeat2] = "request_repeat2",
  [aux_sym_method_repeat1] = "method_repeat1",
  [aux_sym_url_repeat1] = "url_repeat1",
  [aux_sym_proto_repeat1] = "proto_repeat1",
  [aux_sym_header_name_repeat1] = "header_name_repeat1",
  [aux_sym_header_value_repeat1] = "header_value_repeat1",
  [aux_sym_dynamic_header_repeat1] = "dynamic_header_repeat1",
  [aux_sym_body_repeat1] = "body_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_request_separator_token1] = aux_sym_request_separator_token1,
  [aux_sym_request_separator_token2] = aux_sym_request_separator_token2,
  [aux_sym_request_separator_token3] = aux_sym_request_separator_token3,
  [aux_sym_request_separator_token4] = aux_sym_request_separator_token4,
  [sym_request_name] = sym_request_name,
  [sym__ws] = sym__ws,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_DOLLARPRE] = anon_sym_DOLLARPRE,
  [anon_sym_DOLLARRETRY] = anon_sym_DOLLARRETRY,
  [anon_sym_DOLLARASSERT] = anon_sym_DOLLARASSERT,
  [anon_sym_DOLLARPOST] = anon_sym_DOLLARPOST,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [aux_sym_directive_token1] = aux_sym_directive_token1,
  [aux_sym_request_line_token1] = aux_sym_request_line_token1,
  [sym_method_chunk] = sym_method_chunk,
  [sym_url_chunk] = sym_url_chunk,
  [sym_proto_chunk] = sym_proto_chunk,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_header_name_chunk] = sym_header_name_chunk,
  [sym_header_value_chunk] = sym_header_value_chunk,
  [sym_dynamic_chunk] = sym_dynamic_chunk,
  [aux_sym_body_chunk_token1] = aux_sym_body_chunk_token1,
  [aux_sym_body_chunk_token2] = aux_sym_body_chunk_token2,
  [aux_sym_body_chunk_token3] = aux_sym_body_chunk_token3,
  [aux_sym_body_chunk_token4] = aux_sym_body_chunk_token4,
  [sym_raw_lua_content] = sym_raw_lua_content,
  [sym_source_file] = sym_source_file,
  [sym_request_separator] = sym_request_separator,
  [sym_request] = sym_request,
  [sym_lifecycle_script] = sym_lifecycle_script,
  [sym_lifecycle_directive] = sym_lifecycle_directive,
  [sym_inline_script] = sym_inline_script,
  [sym_directive] = sym_directive,
  [sym_request_line] = sym_request_line,
  [sym_method] = sym_method,
  [sym_url] = sym_url,
  [sym_proto] = sym_proto,
  [sym_header_line] = sym_header_line,
  [sym_header_name] = sym_header_name,
  [sym_header_value] = sym_header_value,
  [sym_dynamic_header] = sym_dynamic_header,
  [sym_body] = sym_body,
  [sym_body_chunk] = sym_body_chunk,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_request_repeat1] = aux_sym_request_repeat1,
  [aux_sym_request_repeat2] = aux_sym_request_repeat2,
  [aux_sym_method_repeat1] = aux_sym_method_repeat1,
  [aux_sym_url_repeat1] = aux_sym_url_repeat1,
  [aux_sym_proto_repeat1] = aux_sym_proto_repeat1,
  [aux_sym_header_name_repeat1] = aux_sym_header_name_repeat1,
  [aux_sym_header_value_repeat1] = aux_sym_header_value_repeat1,
  [aux_sym_dynamic_header_repeat1] = aux_sym_dynamic_header_repeat1,
  [aux_sym_body_repeat1] = aux_sym_body_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_request_separator_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_request_separator_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_request_separator_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_request_separator_token4] = {
    .visible = false,
    .named = false,
  },
  [sym_request_name] = {
    .visible = true,
    .named = true,
  },
  [sym__ws] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLARPRE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLARRETRY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLARASSERT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLARPOST] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_directive_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_request_line_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_method_chunk] = {
    .visible = true,
    .named = true,
  },
  [sym_url_chunk] = {
    .visible = true,
    .named = true,
  },
  [sym_proto_chunk] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_header_name_chunk] = {
    .visible = true,
    .named = true,
  },
  [sym_header_value_chunk] = {
    .visible = true,
    .named = true,
  },
  [sym_dynamic_chunk] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_body_chunk_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_body_chunk_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_body_chunk_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_body_chunk_token4] = {
    .visible = false,
    .named = false,
  },
  [sym_raw_lua_content] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_request_separator] = {
    .visible = true,
    .named = true,
  },
  [sym_request] = {
    .visible = true,
    .named = true,
  },
  [sym_lifecycle_script] = {
    .visible = true,
    .named = true,
  },
  [sym_lifecycle_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_script] = {
    .visible = true,
    .named = true,
  },
  [sym_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_request_line] = {
    .visible = true,
    .named = true,
  },
  [sym_method] = {
    .visible = true,
    .named = true,
  },
  [sym_url] = {
    .visible = true,
    .named = true,
  },
  [sym_proto] = {
    .visible = true,
    .named = true,
  },
  [sym_header_line] = {
    .visible = true,
    .named = true,
  },
  [sym_header_name] = {
    .visible = true,
    .named = true,
  },
  [sym_header_value] = {
    .visible = true,
    .named = true,
  },
  [sym_dynamic_header] = {
    .visible = true,
    .named = true,
  },
  [sym_body] = {
    .visible = true,
    .named = true,
  },
  [sym_body_chunk] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_request_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_request_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_method_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_url_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_proto_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_header_name_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_header_value_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dynamic_header_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_body_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_directive = 1,
  field_dynamic = 2,
  field_lua_code = 3,
  field_method = 4,
  field_name = 5,
  field_proto = 6,
  field_url = 7,
  field_value = 8,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_directive] = "directive",
  [field_dynamic] = "dynamic",
  [field_lua_code] = "lua_code",
  [field_method] = "method",
  [field_name] = "name",
  [field_proto] = "proto",
  [field_url] = "url",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 2},
  [5] = {.index = 5, .length = 1},
  [6] = {.index = 6, .length = 2},
  [7] = {.index = 8, .length = 2},
  [8] = {.index = 10, .length = 2},
  [9] = {.index = 12, .length = 2},
  [10] = {.index = 14, .length = 3},
  [11] = {.index = 17, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_dynamic, 0},
  [2] =
    {field_name, 2},
  [3] =
    {field_directive, 0},
    {field_lua_code, 2},
  [5] =
    {field_name, 0},
  [6] =
    {field_method, 0},
    {field_url, 2},
  [8] =
    {field_name, 0},
    {field_value, 2},
  [10] =
    {field_name, 1},
    {field_value, 3},
  [12] =
    {field_name, 0},
    {field_value, 3},
  [14] =
    {field_method, 0},
    {field_proto, 4},
    {field_url, 2},
  [17] =
    {field_name, 1},
    {field_value, 4},
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
  [50] = 43,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 54,
  [59] = 56,
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
  [77] = 15,
  [78] = 78,
  [79] = 79,
  [80] = 15,
  [81] = 81,
  [82] = 15,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 15,
  [87] = 15,
  [88] = 15,
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
  [102] = 93,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 104,
  [113] = 113,
  [114] = 105,
  [115] = 105,
  [116] = 105,
  [117] = 105,
  [118] = 105,
  [119] = 100,
  [120] = 120,
  [121] = 93,
  [122] = 93,
  [123] = 93,
  [124] = 93,
  [125] = 93,
  [126] = 109,
  [127] = 98,
  [128] = 98,
  [129] = 98,
  [130] = 98,
  [131] = 98,
  [132] = 98,
  [133] = 105,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(25);
      ADVANCE_MAP(
        '\t', 29,
        '\n', 80,
        '\r', 1,
        ' ', 29,
        '#', 18,
        '$', 46,
        '-', 68,
        ':', 67,
        '{', 40,
        '}', 41,
        '.', 66,
        '/', 66,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(80);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(34);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead == '\r') ADVANCE(77);
      if (lookahead == '#') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '$') ADVANCE(77);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(82);
      if (lookahead == '\r') ADVANCE(79);
      if (lookahead == '$') ADVANCE(47);
      if (lookahead != 0) ADVANCE(77);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(33);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == ' ') ADVANCE(62);
      if (lookahead == '$') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == ' ') ADVANCE(62);
      if (lookahead == '$') ADVANCE(47);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(65);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '$') ADVANCE(47);
      if (lookahead == ':') ADVANCE(67);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      if (lookahead != 0) ADVANCE(73);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '$') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(31);
      if (lookahead != 0) ADVANCE(70);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '$') ADVANCE(47);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '$') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(73);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '$') ADVANCE(47);
      if (lookahead != 0) ADVANCE(70);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(32);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 15:
      if (lookahead == '#') ADVANCE(26);
      END_STATE();
    case 16:
      if (lookahead == '#') ADVANCE(28);
      END_STATE();
    case 17:
      if (lookahead == '#') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '$') ADVANCE(77);
      END_STATE();
    case 18:
      if (lookahead == '#') ADVANCE(15);
      END_STATE();
    case 19:
      if (lookahead == '#') ADVANCE(16);
      END_STATE();
    case 20:
      if (lookahead == '$') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 21:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '$') ADVANCE(77);
      END_STATE();
    case 22:
      if (eof) ADVANCE(25);
      if (lookahead == '\n') ADVANCE(38);
      if (lookahead == '\r') ADVANCE(36);
      if (lookahead == '#') ADVANCE(18);
      if (lookahead == '$') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 23:
      if (eof) ADVANCE(25);
      if (lookahead == '\n') ADVANCE(34);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == '#') ADVANCE(72);
      if (lookahead == '$') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      if (lookahead != 0 &&
          (lookahead < '0' || ':' < lookahead)) ADVANCE(73);
      END_STATE();
    case 24:
      if (eof) ADVANCE(25);
      if (lookahead == '\n') ADVANCE(81);
      if (lookahead == '\r') ADVANCE(74);
      if (lookahead == '#') ADVANCE(76);
      if (lookahead == '$') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(78);
      if (lookahead != 0) ADVANCE(77);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_request_separator_token1);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_request_separator_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != ':') ADVANCE(73);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_request_separator_token2);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_request_separator_token3);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_request_separator_token3);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != ':') ADVANCE(73);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_request_separator_token3);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$') ADVANCE(70);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_request_separator_token3);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(35);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_request_separator_token4);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_request_separator_token4);
      if (lookahead == '#') ADVANCE(19);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_request_name);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym__ws);
      if (lookahead == '\n') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(39);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym__ws);
      if (lookahead == '\n') ADVANCE(37);
      if (lookahead == '\r') ADVANCE(78);
      if (lookahead == '#') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '$') ADVANCE(77);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym__ws);
      if (lookahead == '#') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(39);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym__ws);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_DOLLARPRE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_DOLLARRETRY);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_DOLLARASSERT);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_DOLLARPOST);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == 'A') ADVANCE(54);
      if (lookahead == 'P') ADVANCE(51);
      if (lookahead == 'R') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == 'E') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == 'E') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == 'E') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == 'O') ADVANCE(55);
      if (lookahead == 'R') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == 'R') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == 'R') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == 'S') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == 'S') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == 'S') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == 'T') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == 'T') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == 'T') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == 'Y') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_request_line_token1);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_method_chunk);
      if (lookahead == '-') ADVANCE(68);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_method_chunk);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_url_chunk);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_proto_chunk);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_header_name_chunk);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_header_name_chunk);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          (lookahead < '0' || ':' < lookahead)) ADVANCE(73);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_header_value_chunk);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$') ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_dynamic_chunk);
      if (lookahead == '#') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != '$' &&
          lookahead != ':') ADVANCE(73);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_dynamic_chunk);
      if (lookahead == '#') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != '$' &&
          lookahead != ':') ADVANCE(73);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_dynamic_chunk);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != ':') ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_body_chunk_token1);
      if (lookahead == '\n') ADVANCE(81);
      if (lookahead == '\r') ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '$') ADVANCE(77);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_body_chunk_token1);
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead == '\r') ADVANCE(77);
      if (lookahead == '#') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '$') ADVANCE(77);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_body_chunk_token1);
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead == '\r') ADVANCE(77);
      if (lookahead == '#') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '$') ADVANCE(77);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_body_chunk_token1);
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead == '\r') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '$') ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_body_chunk_token1);
      if (lookahead == '\n') ADVANCE(37);
      if (lookahead == '\r') ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '$') ADVANCE(77);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_body_chunk_token1);
      if (lookahead == '\n') ADVANCE(82);
      if (lookahead == '\r') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '$') ADVANCE(77);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_body_chunk_token2);
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_body_chunk_token2);
      if (lookahead == '\n') ADVANCE(81);
      if (lookahead == '\r') ADVANCE(74);
      if (lookahead == '#') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '$') ADVANCE(77);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_body_chunk_token2);
      if (lookahead == '\n') ADVANCE(82);
      if (lookahead == '\r') ADVANCE(79);
      if (lookahead == '#') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '$') ADVANCE(77);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_body_chunk_token3);
      if (lookahead == '#') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '$') ADVANCE(77);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_body_chunk_token4);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '$') ADVANCE(77);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 22},
  [2] = {.lex_state = 23},
  [3] = {.lex_state = 23},
  [4] = {.lex_state = 23},
  [5] = {.lex_state = 23},
  [6] = {.lex_state = 23},
  [7] = {.lex_state = 23},
  [8] = {.lex_state = 22},
  [9] = {.lex_state = 23},
  [10] = {.lex_state = 24},
  [11] = {.lex_state = 24},
  [12] = {.lex_state = 22},
  [13] = {.lex_state = 22},
  [14] = {.lex_state = 22},
  [15] = {.lex_state = 24},
  [16] = {.lex_state = 24},
  [17] = {.lex_state = 23},
  [18] = {.lex_state = 23},
  [19] = {.lex_state = 23},
  [20] = {.lex_state = 23},
  [21] = {.lex_state = 23},
  [22] = {.lex_state = 23},
  [23] = {.lex_state = 23},
  [24] = {.lex_state = 23},
  [25] = {.lex_state = 23},
  [26] = {.lex_state = 23},
  [27] = {.lex_state = 23},
  [28] = {.lex_state = 23},
  [29] = {.lex_state = 22},
  [30] = {.lex_state = 22},
  [31] = {.lex_state = 22},
  [32] = {.lex_state = 22},
  [33] = {.lex_state = 22},
  [34] = {.lex_state = 22},
  [35] = {.lex_state = 22},
  [36] = {.lex_state = 22},
  [37] = {.lex_state = 22},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 22},
  [40] = {.lex_state = 22},
  [41] = {.lex_state = 22},
  [42] = {.lex_state = 22},
  [43] = {.lex_state = 22},
  [44] = {.lex_state = 22},
  [45] = {.lex_state = 22},
  [46] = {.lex_state = 22},
  [47] = {.lex_state = 22},
  [48] = {.lex_state = 22},
  [49] = {.lex_state = 22},
  [50] = {.lex_state = 22},
  [51] = {.lex_state = 8},
  [52] = {.lex_state = 9},
  [53] = {.lex_state = 9},
  [54] = {.lex_state = 20},
  [55] = {.lex_state = 12},
  [56] = {.lex_state = 20},
  [57] = {.lex_state = 12},
  [58] = {.lex_state = 22},
  [59] = {.lex_state = 22},
  [60] = {.lex_state = 7},
  [61] = {.lex_state = 7},
  [62] = {.lex_state = 11},
  [63] = {.lex_state = 7},
  [64] = {.lex_state = 11},
  [65] = {.lex_state = 8},
  [66] = {.lex_state = 6},
  [67] = {.lex_state = 12},
  [68] = {.lex_state = 10},
  [69] = {.lex_state = 6},
  [70] = {.lex_state = 8},
  [71] = {.lex_state = 11},
  [72] = {.lex_state = 8},
  [73] = {.lex_state = 12},
  [74] = {.lex_state = 11},
  [75] = {.lex_state = 10},
  [76] = {.lex_state = 10},
  [77] = {.lex_state = 8},
  [78] = {.lex_state = 22},
  [79] = {.lex_state = 22},
  [80] = {.lex_state = 7},
  [81] = {.lex_state = 22},
  [82] = {.lex_state = 6},
  [83] = {.lex_state = 6},
  [84] = {.lex_state = 22},
  [85] = {.lex_state = 4},
  [86] = {.lex_state = 11},
  [87] = {.lex_state = 12},
  [88] = {.lex_state = 10},
  [89] = {.lex_state = 22},
  [90] = {.lex_state = 13},
  [91] = {.lex_state = 7},
  [92] = {.lex_state = 14},
  [93] = {.lex_state = 0, .external_lex_state = 1},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 8},
  [96] = {.lex_state = 8},
  [97] = {.lex_state = 8},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 8},
  [100] = {.lex_state = 0, .external_lex_state = 1},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0, .external_lex_state = 1},
  [103] = {.lex_state = 7},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 8},
  [107] = {.lex_state = 8},
  [108] = {.lex_state = 8},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 8},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0, .external_lex_state = 1},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0, .external_lex_state = 1},
  [122] = {.lex_state = 0, .external_lex_state = 1},
  [123] = {.lex_state = 0, .external_lex_state = 1},
  [124] = {.lex_state = 0, .external_lex_state = 1},
  [125] = {.lex_state = 0, .external_lex_state = 1},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_request_separator_token1] = ACTIONS(1),
    [aux_sym_request_separator_token2] = ACTIONS(1),
    [aux_sym_request_separator_token3] = ACTIONS(1),
    [aux_sym_request_separator_token4] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DOLLARPRE] = ACTIONS(1),
    [anon_sym_DOLLARRETRY] = ACTIONS(1),
    [anon_sym_DOLLARASSERT] = ACTIONS(1),
    [anon_sym_DOLLARPOST] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [aux_sym_directive_token1] = ACTIONS(1),
    [aux_sym_request_line_token1] = ACTIONS(1),
    [sym_method_chunk] = ACTIONS(1),
    [sym_proto_chunk] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_header_name_chunk] = ACTIONS(1),
    [aux_sym_body_chunk_token2] = ACTIONS(1),
    [sym_raw_lua_content] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(101),
    [sym_request_separator] = STATE(8),
    [sym_request] = STATE(78),
    [sym_lifecycle_script] = STATE(54),
    [sym_lifecycle_directive] = STATE(109),
    [sym_inline_script] = STATE(83),
    [sym_directive] = STATE(98),
    [sym_request_line] = STATE(2),
    [sym_method] = STATE(103),
    [aux_sym_source_file_repeat1] = STATE(84),
    [aux_sym_request_repeat1] = STATE(13),
    [aux_sym_method_repeat1] = STATE(69),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_request_separator_token1] = ACTIONS(5),
    [aux_sym_request_separator_token2] = ACTIONS(5),
    [sym__ws] = ACTIONS(7),
    [anon_sym_DOLLARPRE] = ACTIONS(9),
    [anon_sym_DOLLARRETRY] = ACTIONS(9),
    [anon_sym_DOLLARASSERT] = ACTIONS(9),
    [anon_sym_DOLLARPOST] = ACTIONS(9),
    [anon_sym_DOLLAR] = ACTIONS(11),
    [aux_sym_directive_token1] = ACTIONS(11),
    [sym_method_chunk] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 18,
    ACTIONS(17), 1,
      aux_sym_request_separator_token1,
    ACTIONS(19), 1,
      aux_sym_request_separator_token3,
    ACTIONS(21), 1,
      aux_sym_request_separator_token4,
    ACTIONS(23), 1,
      sym_header_name_chunk,
    ACTIONS(25), 1,
      sym_dynamic_chunk,
    STATE(29), 1,
      sym_body,
    STATE(37), 1,
      aux_sym_request_repeat1,
    STATE(51), 1,
      sym_inline_script,
    STATE(58), 1,
      sym_lifecycle_script,
    STATE(70), 1,
      aux_sym_header_name_repeat1,
    STATE(108), 1,
      sym_dynamic_header,
    STATE(113), 1,
      sym_header_name,
    STATE(126), 1,
      sym_lifecycle_directive,
    STATE(127), 1,
      sym_directive,
    ACTIONS(11), 2,
      anon_sym_DOLLAR,
      aux_sym_directive_token1,
    ACTIONS(15), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token2,
    STATE(5), 2,
      sym_header_line,
      aux_sym_request_repeat2,
    ACTIONS(9), 4,
      anon_sym_DOLLARPRE,
      anon_sym_DOLLARRETRY,
      anon_sym_DOLLARASSERT,
      anon_sym_DOLLARPOST,
  [61] = 18,
    ACTIONS(19), 1,
      aux_sym_request_separator_token3,
    ACTIONS(21), 1,
      aux_sym_request_separator_token4,
    ACTIONS(23), 1,
      sym_header_name_chunk,
    ACTIONS(25), 1,
      sym_dynamic_chunk,
    ACTIONS(29), 1,
      aux_sym_request_separator_token1,
    STATE(30), 1,
      sym_body,
    STATE(41), 1,
      aux_sym_request_repeat1,
    STATE(51), 1,
      sym_inline_script,
    STATE(58), 1,
      sym_lifecycle_script,
    STATE(70), 1,
      aux_sym_header_name_repeat1,
    STATE(108), 1,
      sym_dynamic_header,
    STATE(113), 1,
      sym_header_name,
    STATE(126), 1,
      sym_lifecycle_directive,
    STATE(127), 1,
      sym_directive,
    ACTIONS(11), 2,
      anon_sym_DOLLAR,
      aux_sym_directive_token1,
    ACTIONS(27), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token2,
    STATE(9), 2,
      sym_header_line,
      aux_sym_request_repeat2,
    ACTIONS(9), 4,
      anon_sym_DOLLARPRE,
      anon_sym_DOLLARRETRY,
      anon_sym_DOLLARASSERT,
      anon_sym_DOLLARPOST,
  [122] = 18,
    ACTIONS(19), 1,
      aux_sym_request_separator_token3,
    ACTIONS(21), 1,
      aux_sym_request_separator_token4,
    ACTIONS(23), 1,
      sym_header_name_chunk,
    ACTIONS(25), 1,
      sym_dynamic_chunk,
    ACTIONS(33), 1,
      aux_sym_request_separator_token1,
    STATE(34), 1,
      sym_body,
    STATE(40), 1,
      aux_sym_request_repeat1,
    STATE(51), 1,
      sym_inline_script,
    STATE(58), 1,
      sym_lifecycle_script,
    STATE(70), 1,
      aux_sym_header_name_repeat1,
    STATE(108), 1,
      sym_dynamic_header,
    STATE(113), 1,
      sym_header_name,
    STATE(126), 1,
      sym_lifecycle_directive,
    STATE(127), 1,
      sym_directive,
    ACTIONS(11), 2,
      anon_sym_DOLLAR,
      aux_sym_directive_token1,
    ACTIONS(31), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token2,
    STATE(3), 2,
      sym_header_line,
      aux_sym_request_repeat2,
    ACTIONS(9), 4,
      anon_sym_DOLLARPRE,
      anon_sym_DOLLARRETRY,
      anon_sym_DOLLARASSERT,
      anon_sym_DOLLARPOST,
  [183] = 18,
    ACTIONS(19), 1,
      aux_sym_request_separator_token3,
    ACTIONS(21), 1,
      aux_sym_request_separator_token4,
    ACTIONS(23), 1,
      sym_header_name_chunk,
    ACTIONS(25), 1,
      sym_dynamic_chunk,
    ACTIONS(33), 1,
      aux_sym_request_separator_token1,
    STATE(34), 1,
      sym_body,
    STATE(40), 1,
      aux_sym_request_repeat1,
    STATE(51), 1,
      sym_inline_script,
    STATE(58), 1,
      sym_lifecycle_script,
    STATE(70), 1,
      aux_sym_header_name_repeat1,
    STATE(108), 1,
      sym_dynamic_header,
    STATE(113), 1,
      sym_header_name,
    STATE(126), 1,
      sym_lifecycle_directive,
    STATE(127), 1,
      sym_directive,
    ACTIONS(11), 2,
      anon_sym_DOLLAR,
      aux_sym_directive_token1,
    ACTIONS(31), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token2,
    STATE(9), 2,
      sym_header_line,
      aux_sym_request_repeat2,
    ACTIONS(9), 4,
      anon_sym_DOLLARPRE,
      anon_sym_DOLLARRETRY,
      anon_sym_DOLLARASSERT,
      anon_sym_DOLLARPOST,
  [244] = 18,
    ACTIONS(19), 1,
      aux_sym_request_separator_token3,
    ACTIONS(21), 1,
      aux_sym_request_separator_token4,
    ACTIONS(23), 1,
      sym_header_name_chunk,
    ACTIONS(25), 1,
      sym_dynamic_chunk,
    ACTIONS(29), 1,
      aux_sym_request_separator_token1,
    STATE(30), 1,
      sym_body,
    STATE(41), 1,
      aux_sym_request_repeat1,
    STATE(51), 1,
      sym_inline_script,
    STATE(58), 1,
      sym_lifecycle_script,
    STATE(70), 1,
      aux_sym_header_name_repeat1,
    STATE(108), 1,
      sym_dynamic_header,
    STATE(113), 1,
      sym_header_name,
    STATE(126), 1,
      sym_lifecycle_directive,
    STATE(127), 1,
      sym_directive,
    ACTIONS(11), 2,
      anon_sym_DOLLAR,
      aux_sym_directive_token1,
    ACTIONS(27), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token2,
    STATE(7), 2,
      sym_header_line,
      aux_sym_request_repeat2,
    ACTIONS(9), 4,
      anon_sym_DOLLARPRE,
      anon_sym_DOLLARRETRY,
      anon_sym_DOLLARASSERT,
      anon_sym_DOLLARPOST,
  [305] = 18,
    ACTIONS(19), 1,
      aux_sym_request_separator_token3,
    ACTIONS(21), 1,
      aux_sym_request_separator_token4,
    ACTIONS(23), 1,
      sym_header_name_chunk,
    ACTIONS(25), 1,
      sym_dynamic_chunk,
    ACTIONS(37), 1,
      aux_sym_request_separator_token1,
    STATE(32), 1,
      sym_body,
    STATE(39), 1,
      aux_sym_request_repeat1,
    STATE(51), 1,
      sym_inline_script,
    STATE(58), 1,
      sym_lifecycle_script,
    STATE(70), 1,
      aux_sym_header_name_repeat1,
    STATE(108), 1,
      sym_dynamic_header,
    STATE(113), 1,
      sym_header_name,
    STATE(126), 1,
      sym_lifecycle_directive,
    STATE(127), 1,
      sym_directive,
    ACTIONS(11), 2,
      anon_sym_DOLLAR,
      aux_sym_directive_token1,
    ACTIONS(35), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token2,
    STATE(9), 2,
      sym_header_line,
      aux_sym_request_repeat2,
    ACTIONS(9), 4,
      anon_sym_DOLLARPRE,
      anon_sym_DOLLARRETRY,
      anon_sym_DOLLARASSERT,
      anon_sym_DOLLARPOST,
  [366] = 14,
    ACTIONS(7), 1,
      sym__ws,
    ACTIONS(13), 1,
      sym_method_chunk,
    STATE(2), 1,
      sym_request_line,
    STATE(13), 1,
      aux_sym_request_repeat1,
    STATE(54), 1,
      sym_lifecycle_script,
    STATE(69), 1,
      aux_sym_method_repeat1,
    STATE(83), 1,
      sym_inline_script,
    STATE(89), 1,
      sym_request,
    STATE(98), 1,
      sym_directive,
    STATE(103), 1,
      sym_method,
    STATE(109), 1,
      sym_lifecycle_directive,
    ACTIONS(11), 2,
      anon_sym_DOLLAR,
      aux_sym_directive_token1,
    ACTIONS(39), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_request_separator_token2,
    ACTIONS(9), 4,
      anon_sym_DOLLARPRE,
      anon_sym_DOLLARRETRY,
      anon_sym_DOLLARASSERT,
      anon_sym_DOLLARPOST,
  [415] = 12,
    ACTIONS(45), 1,
      aux_sym_request_separator_token3,
    ACTIONS(51), 1,
      sym_header_name_chunk,
    ACTIONS(54), 1,
      sym_dynamic_chunk,
    STATE(51), 1,
      sym_inline_script,
    STATE(70), 1,
      aux_sym_header_name_repeat1,
    STATE(108), 1,
      sym_dynamic_header,
    STATE(113), 1,
      sym_header_name,
    STATE(127), 1,
      sym_directive,
    ACTIONS(41), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token2,
    ACTIONS(48), 2,
      anon_sym_DOLLAR,
      aux_sym_directive_token1,
    STATE(9), 2,
      sym_header_line,
      aux_sym_request_repeat2,
    ACTIONS(43), 6,
      aux_sym_request_separator_token1,
      aux_sym_request_separator_token4,
      anon_sym_DOLLARPRE,
      anon_sym_DOLLARRETRY,
      anon_sym_DOLLARASSERT,
      anon_sym_DOLLARPOST,
  [460] = 7,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    ACTIONS(61), 1,
      aux_sym_body_chunk_token1,
    STATE(128), 1,
      sym_directive,
    ACTIONS(11), 2,
      anon_sym_DOLLAR,
      aux_sym_directive_token1,
    ACTIONS(63), 3,
      aux_sym_body_chunk_token2,
      aux_sym_body_chunk_token3,
      aux_sym_body_chunk_token4,
    STATE(11), 3,
      sym_inline_script,
      sym_body_chunk,
      aux_sym_body_repeat1,
    ACTIONS(59), 7,
      aux_sym_request_separator_token1,
      aux_sym_request_separator_token2,
      sym__ws,
      anon_sym_DOLLARPRE,
      anon_sym_DOLLARRETRY,
      anon_sym_DOLLARASSERT,
      anon_sym_DOLLARPOST,
  [493] = 7,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
    ACTIONS(72), 1,
      aux_sym_body_chunk_token1,
    STATE(128), 1,
      sym_directive,
    ACTIONS(69), 2,
      anon_sym_DOLLAR,
      aux_sym_directive_token1,
    ACTIONS(75), 3,
      aux_sym_body_chunk_token2,
      aux_sym_body_chunk_token3,
      aux_sym_body_chunk_token4,
    STATE(11), 3,
      sym_inline_script,
      sym_body_chunk,
      aux_sym_body_repeat1,
    ACTIONS(67), 7,
      aux_sym_request_separator_token1,
      aux_sym_request_separator_token2,
      sym__ws,
      anon_sym_DOLLARPRE,
      anon_sym_DOLLARRETRY,
      anon_sym_DOLLARASSERT,
      anon_sym_DOLLARPOST,
  [526] = 11,
    ACTIONS(13), 1,
      sym_method_chunk,
    STATE(4), 1,
      sym_request_line,
    STATE(14), 1,
      aux_sym_request_repeat1,
    STATE(54), 1,
      sym_lifecycle_script,
    STATE(69), 1,
      aux_sym_method_repeat1,
    STATE(83), 1,
      sym_inline_script,
    STATE(98), 1,
      sym_directive,
    STATE(103), 1,
      sym_method,
    STATE(109), 1,
      sym_lifecycle_directive,
    ACTIONS(11), 2,
      anon_sym_DOLLAR,
      aux_sym_directive_token1,
    ACTIONS(9), 4,
      anon_sym_DOLLARPRE,
      anon_sym_DOLLARRETRY,
      anon_sym_DOLLARASSERT,
      anon_sym_DOLLARPOST,
  [564] = 11,
    ACTIONS(13), 1,
      sym_method_chunk,
    STATE(4), 1,
      sym_request_line,
    STATE(43), 1,
      aux_sym_request_repeat1,
    STATE(54), 1,
      sym_lifecycle_script,
    STATE(69), 1,
      aux_sym_method_repeat1,
    STATE(83), 1,
      sym_inline_script,
    STATE(98), 1,
      sym_directive,
    STATE(103), 1,
      sym_method,
    STATE(109), 1,
      sym_lifecycle_directive,
    ACTIONS(11), 2,
      anon_sym_DOLLAR,
      aux_sym_directive_token1,
    ACTIONS(9), 4,
      anon_sym_DOLLARPRE,
      anon_sym_DOLLARRETRY,
      anon_sym_DOLLARASSERT,
      anon_sym_DOLLARPOST,
  [602] = 11,
    ACTIONS(13), 1,
      sym_method_chunk,
    STATE(6), 1,
      sym_request_line,
    STATE(43), 1,
      aux_sym_request_repeat1,
    STATE(54), 1,
      sym_lifecycle_script,
    STATE(69), 1,
      aux_sym_method_repeat1,
    STATE(83), 1,
      sym_inline_script,
    STATE(98), 1,
      sym_directive,
    STATE(103), 1,
      sym_method,
    STATE(109), 1,
      sym_lifecycle_directive,
    ACTIONS(11), 2,
      anon_sym_DOLLAR,
      aux_sym_directive_token1,
    ACTIONS(9), 4,
      anon_sym_DOLLARPRE,
      anon_sym_DOLLARRETRY,
      anon_sym_DOLLARASSERT,
      anon_sym_DOLLARPOST,
  [640] = 2,
    ACTIONS(78), 2,
      ts_builtin_sym_end,
      aux_sym_body_chunk_token1,
    ACTIONS(80), 12,
      aux_sym_request_separator_token1,
      aux_sym_request_separator_token2,
      sym__ws,
      anon_sym_DOLLARPRE,
      anon_sym_DOLLARRETRY,
      anon_sym_DOLLARASSERT,
      anon_sym_DOLLARPOST,
      anon_sym_DOLLAR,
      aux_sym_directive_token1,
      aux_sym_body_chunk_token2,
      aux_sym_body_chunk_token3,
      aux_sym_body_chunk_token4,
  [659] = 2,
    ACTIONS(82), 2,
      ts_builtin_sym_end,
      aux_sym_body_chunk_token1,
    ACTIONS(84), 12,
      aux_sym_request_separator_token1,
      aux_sym_request_separator_token2,
      sym__ws,
      anon_sym_DOLLARPRE,
      anon_sym_DOLLARRETRY,
      anon_sym_DOLLARASSERT,
      anon_sym_DOLLARPOST,
      anon_sym_DOLLAR,
      aux_sym_directive_token1,
      aux_sym_body_chunk_token2,
      aux_sym_body_chunk_token3,
      aux_sym_body_chunk_token4,
  [678] = 2,
    ACTIONS(86), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token2,
    ACTIONS(88), 11,
      aux_sym_request_separator_token1,
      aux_sym_request_separator_token3,
      aux_sym_request_separator_token4,
      anon_sym_DOLLARPRE,
      anon_sym_DOLLARRETRY,
      anon_sym_DOLLARASSERT,
      anon_sym_DOLLARPOST,
      anon_sym_DOLLAR,
      aux_sym_directive_token1,
      sym_header_name_chunk,
      sym_dynamic_chunk,
  [696] = 2,
    ACTIONS(90), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token2,
    ACTIONS(92), 11,
      aux_sym_request_separator_token1,
      aux_sym_request_separator_token3,
      aux_sym_request_separator_token4,
      anon_sym_DOLLARPRE,
      anon_sym_DOLLARRETRY,
      anon_sym_DOLLARASSERT,
      anon_sym_DOLLARPOST,
      anon_sym_DOLLAR,
      aux_sym_directive_token1,
      sym_header_name_chunk,
      sym_dynamic_chunk,
  [714] = 2,
    ACTIONS(94), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token2,
    ACTIONS(96), 11,
      aux_sym_request_separator_token1,
      aux_sym_request_separator_token3,
      aux_sym_request_separator_token4,
      anon_sym_DOLLARPRE,
      anon_sym_DOLLARRETRY,
      anon_sym_DOLLARASSERT,
      anon_sym_DOLLARPOST,
      anon_sym_DOLLAR,
      aux_sym_directive_token1,
      sym_header_name_chunk,
      sym_dynamic_chunk,
  [732] = 2,
    ACTIONS(98), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token2,
    ACTIONS(100), 11,
      aux_sym_request_separator_token1,
      aux_sym_request_separator_token3,
      aux_sym_request_separator_token4,
      anon_sym_DOLLARPRE,
      anon_sym_DOLLARRETRY,
      anon_sym_DOLLARASSERT,
      anon_sym_DOLLARPOST,
      anon_sym_DOLLAR,
      aux_sym_directive_token1,
      sym_header_name_chunk,
      sym_dynamic_chunk,
  [750] = 2,
    ACTIONS(102), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token2,
    ACTIONS(104), 11,
      aux_sym_request_separator_token1,
      aux_sym_request_separator_token3,
      aux_sym_request_separator_token4,
      anon_sym_DOLLARPRE,
      anon_sym_DOLLARRETRY,
      anon_sym_DOLLARASSERT,
      anon_sym_DOLLARPOST,
      anon_sym_DOLLAR,
      aux_sym_directive_token1,
      sym_header_name_chunk,
      sym_dynamic_chunk,
  [768] = 2,
    ACTIONS(106), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token2,
    ACTIONS(108), 11,
      aux_sym_request_separator_token1,
      aux_sym_request_separator_token3,
      aux_sym_request_separator_token4,
      anon_sym_DOLLARPRE,
      anon_sym_DOLLARRETRY,
      anon_sym_DOLLARASSERT,
      anon_sym_DOLLARPOST,
      anon_sym_DOLLAR,
      aux_sym_directive_token1,
      sym_header_name_chunk,
      sym_dynamic_chunk,
  [786] = 2,
    ACTIONS(110), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token2,
    ACTIONS(112), 11,
      aux_sym_request_separator_token1,
      aux_sym_request_separator_token3,
      aux_sym_request_separator_token4,
      anon_sym_DOLLARPRE,
      anon_sym_DOLLARRETRY,
      anon_sym_DOLLARASSERT,
      anon_sym_DOLLARPOST,
      anon_sym_DOLLAR,
      aux_sym_directive_token1,
      sym_header_name_chunk,
      sym_dynamic_chunk,
  [804] = 2,
    ACTIONS(114), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token2,
    ACTIONS(116), 11,
      aux_sym_request_separator_token1,
      aux_sym_request_separator_token3,
      aux_sym_request_separator_token4,
      anon_sym_DOLLARPRE,
      anon_sym_DOLLARRETRY,
      anon_sym_DOLLARASSERT,
      anon_sym_DOLLARPOST,
      anon_sym_DOLLAR,
      aux_sym_directive_token1,
      sym_header_name_chunk,
      sym_dynamic_chunk,
  [822] = 2,
    ACTIONS(118), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token2,
    ACTIONS(120), 11,
      aux_sym_request_separator_token1,
      aux_sym_request_separator_token3,
      aux_sym_request_separator_token4,
      anon_sym_DOLLARPRE,
      anon_sym_DOLLARRETRY,
      anon_sym_DOLLARASSERT,
      anon_sym_DOLLARPOST,
      anon_sym_DOLLAR,
      aux_sym_directive_token1,
      sym_header_name_chunk,
      sym_dynamic_chunk,
  [840] = 2,
    ACTIONS(122), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token2,
    ACTIONS(124), 11,
      aux_sym_request_separator_token1,
      aux_sym_request_separator_token3,
      aux_sym_request_separator_token4,
      anon_sym_DOLLARPRE,
      anon_sym_DOLLARRETRY,
      anon_sym_DOLLARASSERT,
      anon_sym_DOLLARPOST,
      anon_sym_DOLLAR,
      aux_sym_directive_token1,
      sym_header_name_chunk,
      sym_dynamic_chunk,
  [858] = 2,
    ACTIONS(126), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token2,
    ACTIONS(128), 11,
      aux_sym_request_separator_token1,
      aux_sym_request_separator_token3,
      aux_sym_request_separator_token4,
      anon_sym_DOLLARPRE,
      anon_sym_DOLLARRETRY,
      anon_sym_DOLLARASSERT,
      anon_sym_DOLLARPOST,
      anon_sym_DOLLAR,
      aux_sym_directive_token1,
      sym_header_name_chunk,
      sym_dynamic_chunk,
  [876] = 2,
    ACTIONS(130), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token2,
    ACTIONS(132), 11,
      aux_sym_request_separator_token1,
      aux_sym_request_separator_token3,
      aux_sym_request_separator_token4,
      anon_sym_DOLLARPRE,
      anon_sym_DOLLARRETRY,
      anon_sym_DOLLARASSERT,
      anon_sym_DOLLARPOST,
      anon_sym_DOLLAR,
      aux_sym_directive_token1,
      sym_header_name_chunk,
      sym_dynamic_chunk,
  [894] = 6,
    ACTIONS(134), 1,
      sym__ws,
    STATE(40), 1,
      aux_sym_request_repeat1,
    STATE(58), 1,
      sym_lifecycle_script,
    STATE(126), 1,
      sym_lifecycle_directive,
    ACTIONS(31), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_request_separator_token2,
    ACTIONS(136), 4,
      anon_sym_DOLLARPRE,
      anon_sym_DOLLARRETRY,
      anon_sym_DOLLARASSERT,
      anon_sym_DOLLARPOST,
  [918] = 6,
    ACTIONS(138), 1,
      sym__ws,
    STATE(39), 1,
      aux_sym_request_repeat1,
    STATE(58), 1,
      sym_lifecycle_script,
    STATE(126), 1,
      sym_lifecycle_directive,
    ACTIONS(35), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_request_separator_token2,
    ACTIONS(136), 4,
      anon_sym_DOLLARPRE,
      anon_sym_DOLLARRETRY,
      anon_sym_DOLLARASSERT,
      anon_sym_DOLLARPOST,
  [942] = 2,
    ACTIONS(140), 4,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_request_separator_token2,
      sym_method_chunk,
    ACTIONS(142), 7,
      sym__ws,
      anon_sym_DOLLARPRE,
      anon_sym_DOLLARRETRY,
      anon_sym_DOLLARASSERT,
      anon_sym_DOLLARPOST,
      anon_sym_DOLLAR,
      aux_sym_directive_token1,
  [958] = 6,
    ACTIONS(146), 1,
      sym__ws,
    STATE(46), 1,
      aux_sym_request_repeat1,
    STATE(58), 1,
      sym_lifecycle_script,
    STATE(126), 1,
      sym_lifecycle_directive,
    ACTIONS(144), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_request_separator_token2,
    ACTIONS(136), 4,
      anon_sym_DOLLARPRE,
      anon_sym_DOLLARRETRY,
      anon_sym_DOLLARASSERT,
      anon_sym_DOLLARPOST,
  [982] = 2,
    ACTIONS(148), 4,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_request_separator_token2,
      sym_method_chunk,
    ACTIONS(150), 7,
      sym__ws,
      anon_sym_DOLLARPRE,
      anon_sym_DOLLARRETRY,
      anon_sym_DOLLARASSERT,
      anon_sym_DOLLARPOST,
      anon_sym_DOLLAR,
      aux_sym_directive_token1,
  [998] = 6,
    ACTIONS(152), 1,
      sym__ws,
    STATE(41), 1,
      aux_sym_request_repeat1,
    STATE(58), 1,
      sym_lifecycle_script,
    STATE(126), 1,
      sym_lifecycle_directive,
    ACTIONS(27), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_request_separator_token2,
    ACTIONS(136), 4,
      anon_sym_DOLLARPRE,
      anon_sym_DOLLARRETRY,
      anon_sym_DOLLARASSERT,
      anon_sym_DOLLARPOST,
  [1022] = 2,
    ACTIONS(154), 4,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_request_separator_token2,
      sym_method_chunk,
    ACTIONS(156), 7,
      sym__ws,
      anon_sym_DOLLARPRE,
      anon_sym_DOLLARRETRY,
      anon_sym_DOLLARASSERT,
      anon_sym_DOLLARPOST,
      anon_sym_DOLLAR,
      aux_sym_directive_token1,
  [1038] = 2,
    ACTIONS(158), 4,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_request_separator_token2,
      sym_method_chunk,
    ACTIONS(160), 7,
      sym__ws,
      anon_sym_DOLLARPRE,
      anon_sym_DOLLARRETRY,
      anon_sym_DOLLARASSERT,
      anon_sym_DOLLARPOST,
      anon_sym_DOLLAR,
      aux_sym_directive_token1,
  [1054] = 5,
    STATE(50), 1,
      aux_sym_request_repeat1,
    STATE(58), 1,
      sym_lifecycle_script,
    STATE(126), 1,
      sym_lifecycle_directive,
    ACTIONS(31), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_request_separator_token2,
    ACTIONS(136), 4,
      anon_sym_DOLLARPRE,
      anon_sym_DOLLARRETRY,
      anon_sym_DOLLARASSERT,
      anon_sym_DOLLARPOST,
  [1075] = 6,
    ACTIONS(11), 1,
      anon_sym_DOLLAR,
    ACTIONS(61), 1,
      aux_sym_body_chunk_token1,
    ACTIONS(162), 1,
      aux_sym_directive_token1,
    STATE(128), 1,
      sym_directive,
    ACTIONS(63), 3,
      aux_sym_body_chunk_token2,
      aux_sym_body_chunk_token3,
      aux_sym_body_chunk_token4,
    STATE(10), 3,
      sym_inline_script,
      sym_body_chunk,
      aux_sym_body_repeat1,
  [1098] = 5,
    STATE(50), 1,
      aux_sym_request_repeat1,
    STATE(58), 1,
      sym_lifecycle_script,
    STATE(126), 1,
      sym_lifecycle_directive,
    ACTIONS(144), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_request_separator_token2,
    ACTIONS(136), 4,
      anon_sym_DOLLARPRE,
      anon_sym_DOLLARRETRY,
      anon_sym_DOLLARASSERT,
      anon_sym_DOLLARPOST,
  [1119] = 5,
    STATE(50), 1,
      aux_sym_request_repeat1,
    STATE(58), 1,
      sym_lifecycle_script,
    STATE(126), 1,
      sym_lifecycle_directive,
    ACTIONS(27), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_request_separator_token2,
    ACTIONS(136), 4,
      anon_sym_DOLLARPRE,
      anon_sym_DOLLARRETRY,
      anon_sym_DOLLARASSERT,
      anon_sym_DOLLARPOST,
  [1140] = 5,
    STATE(50), 1,
      aux_sym_request_repeat1,
    STATE(58), 1,
      sym_lifecycle_script,
    STATE(126), 1,
      sym_lifecycle_directive,
    ACTIONS(35), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_request_separator_token2,
    ACTIONS(136), 4,
      anon_sym_DOLLARPRE,
      anon_sym_DOLLARRETRY,
      anon_sym_DOLLARASSERT,
      anon_sym_DOLLARPOST,
  [1161] = 5,
    STATE(46), 1,
      aux_sym_request_repeat1,
    STATE(58), 1,
      sym_lifecycle_script,
    STATE(126), 1,
      sym_lifecycle_directive,
    ACTIONS(144), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_request_separator_token2,
    ACTIONS(136), 4,
      anon_sym_DOLLARPRE,
      anon_sym_DOLLARRETRY,
      anon_sym_DOLLARASSERT,
      anon_sym_DOLLARPOST,
  [1182] = 6,
    ACTIONS(169), 1,
      sym_method_chunk,
    STATE(43), 1,
      aux_sym_request_repeat1,
    STATE(54), 1,
      sym_lifecycle_script,
    STATE(109), 1,
      sym_lifecycle_directive,
    ACTIONS(167), 2,
      anon_sym_DOLLAR,
      aux_sym_directive_token1,
    ACTIONS(164), 4,
      anon_sym_DOLLARPRE,
      anon_sym_DOLLARRETRY,
      anon_sym_DOLLARASSERT,
      anon_sym_DOLLARPOST,
  [1205] = 5,
    STATE(45), 1,
      aux_sym_request_repeat1,
    STATE(58), 1,
      sym_lifecycle_script,
    STATE(126), 1,
      sym_lifecycle_directive,
    ACTIONS(171), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_request_separator_token2,
    ACTIONS(136), 4,
      anon_sym_DOLLARPRE,
      anon_sym_DOLLARRETRY,
      anon_sym_DOLLARASSERT,
      anon_sym_DOLLARPOST,
  [1226] = 5,
    STATE(50), 1,
      aux_sym_request_repeat1,
    STATE(58), 1,
      sym_lifecycle_script,
    STATE(126), 1,
      sym_lifecycle_directive,
    ACTIONS(173), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_request_separator_token2,
    ACTIONS(136), 4,
      anon_sym_DOLLARPRE,
      anon_sym_DOLLARRETRY,
      anon_sym_DOLLARASSERT,
      anon_sym_DOLLARPOST,
  [1247] = 5,
    STATE(50), 1,
      aux_sym_request_repeat1,
    STATE(58), 1,
      sym_lifecycle_script,
    STATE(126), 1,
      sym_lifecycle_directive,
    ACTIONS(171), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_request_separator_token2,
    ACTIONS(136), 4,
      anon_sym_DOLLARPRE,
      anon_sym_DOLLARRETRY,
      anon_sym_DOLLARASSERT,
      anon_sym_DOLLARPOST,
  [1268] = 5,
    STATE(41), 1,
      aux_sym_request_repeat1,
    STATE(58), 1,
      sym_lifecycle_script,
    STATE(126), 1,
      sym_lifecycle_directive,
    ACTIONS(27), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_request_separator_token2,
    ACTIONS(136), 4,
      anon_sym_DOLLARPRE,
      anon_sym_DOLLARRETRY,
      anon_sym_DOLLARASSERT,
      anon_sym_DOLLARPOST,
  [1289] = 2,
    ACTIONS(169), 4,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_request_separator_token2,
      sym_method_chunk,
    ACTIONS(167), 6,
      anon_sym_DOLLARPRE,
      anon_sym_DOLLARRETRY,
      anon_sym_DOLLARASSERT,
      anon_sym_DOLLARPOST,
      anon_sym_DOLLAR,
      aux_sym_directive_token1,
  [1304] = 5,
    STATE(39), 1,
      aux_sym_request_repeat1,
    STATE(58), 1,
      sym_lifecycle_script,
    STATE(126), 1,
      sym_lifecycle_directive,
    ACTIONS(35), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_request_separator_token2,
    ACTIONS(136), 4,
      anon_sym_DOLLARPRE,
      anon_sym_DOLLARRETRY,
      anon_sym_DOLLARASSERT,
      anon_sym_DOLLARPOST,
  [1325] = 5,
    STATE(50), 1,
      aux_sym_request_repeat1,
    STATE(58), 1,
      sym_lifecycle_script,
    STATE(126), 1,
      sym_lifecycle_directive,
    ACTIONS(169), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_request_separator_token2,
    ACTIONS(175), 4,
      anon_sym_DOLLARPRE,
      anon_sym_DOLLARRETRY,
      anon_sym_DOLLARASSERT,
      anon_sym_DOLLARPOST,
  [1346] = 8,
    ACTIONS(178), 1,
      aux_sym_request_separator_token4,
    ACTIONS(180), 1,
      anon_sym_DOLLAR,
    ACTIONS(183), 1,
      aux_sym_directive_token1,
    ACTIONS(186), 1,
      anon_sym_COLON,
    ACTIONS(188), 1,
      sym_header_name_chunk,
    ACTIONS(190), 1,
      sym_dynamic_chunk,
    STATE(129), 1,
      sym_directive,
    STATE(62), 2,
      sym_inline_script,
      aux_sym_dynamic_header_repeat1,
  [1372] = 8,
    ACTIONS(11), 1,
      anon_sym_DOLLAR,
    ACTIONS(162), 1,
      aux_sym_directive_token1,
    ACTIONS(192), 1,
      aux_sym_request_separator_token3,
    ACTIONS(194), 1,
      aux_sym_request_separator_token4,
    ACTIONS(196), 1,
      sym_header_value_chunk,
    STATE(95), 1,
      sym_header_value,
    STATE(131), 1,
      sym_directive,
    STATE(73), 2,
      sym_inline_script,
      aux_sym_header_value_repeat1,
  [1398] = 8,
    ACTIONS(11), 1,
      anon_sym_DOLLAR,
    ACTIONS(162), 1,
      aux_sym_directive_token1,
    ACTIONS(196), 1,
      sym_header_value_chunk,
    ACTIONS(198), 1,
      aux_sym_request_separator_token3,
    ACTIONS(200), 1,
      aux_sym_request_separator_token4,
    STATE(106), 1,
      sym_header_value,
    STATE(131), 1,
      sym_directive,
    STATE(73), 2,
      sym_inline_script,
      aux_sym_header_value_repeat1,
  [1424] = 3,
    ACTIONS(202), 1,
      sym__ws,
    ACTIONS(206), 1,
      sym_method_chunk,
    ACTIONS(204), 6,
      anon_sym_DOLLARPRE,
      anon_sym_DOLLARRETRY,
      anon_sym_DOLLARASSERT,
      anon_sym_DOLLARPOST,
      anon_sym_DOLLAR,
      aux_sym_directive_token1,
  [1439] = 7,
    ACTIONS(11), 1,
      anon_sym_DOLLAR,
    ACTIONS(162), 1,
      aux_sym_directive_token1,
    ACTIONS(208), 1,
      aux_sym_request_separator_token4,
    ACTIONS(210), 1,
      sym_header_value_chunk,
    STATE(96), 1,
      sym_header_value,
    STATE(131), 1,
      sym_directive,
    STATE(73), 2,
      sym_inline_script,
      aux_sym_header_value_repeat1,
  [1462] = 2,
    ACTIONS(212), 2,
      sym__ws,
      sym_method_chunk,
    ACTIONS(214), 6,
      anon_sym_DOLLARPRE,
      anon_sym_DOLLARRETRY,
      anon_sym_DOLLARASSERT,
      anon_sym_DOLLARPOST,
      anon_sym_DOLLAR,
      aux_sym_directive_token1,
  [1475] = 7,
    ACTIONS(11), 1,
      anon_sym_DOLLAR,
    ACTIONS(162), 1,
      aux_sym_directive_token1,
    ACTIONS(210), 1,
      sym_header_value_chunk,
    ACTIONS(216), 1,
      aux_sym_request_separator_token4,
    STATE(107), 1,
      sym_header_value,
    STATE(131), 1,
      sym_directive,
    STATE(73), 2,
      sym_inline_script,
      aux_sym_header_value_repeat1,
  [1498] = 2,
    ACTIONS(218), 1,
      sym__ws,
    ACTIONS(206), 7,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_request_separator_token2,
      anon_sym_DOLLARPRE,
      anon_sym_DOLLARRETRY,
      anon_sym_DOLLARASSERT,
      anon_sym_DOLLARPOST,
  [1511] = 2,
    ACTIONS(214), 1,
      sym__ws,
    ACTIONS(212), 7,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_request_separator_token2,
      anon_sym_DOLLARPRE,
      anon_sym_DOLLARRETRY,
      anon_sym_DOLLARASSERT,
      anon_sym_DOLLARPOST,
  [1524] = 6,
    ACTIONS(11), 1,
      anon_sym_DOLLAR,
    ACTIONS(162), 1,
      aux_sym_directive_token1,
    ACTIONS(222), 1,
      sym_url_chunk,
    STATE(130), 1,
      sym_directive,
    ACTIONS(220), 2,
      aux_sym_request_separator_token4,
      aux_sym_request_line_token1,
    STATE(61), 2,
      sym_inline_script,
      aux_sym_url_repeat1,
  [1545] = 6,
    ACTIONS(226), 1,
      anon_sym_DOLLAR,
    ACTIONS(229), 1,
      aux_sym_directive_token1,
    ACTIONS(232), 1,
      sym_url_chunk,
    STATE(130), 1,
      sym_directive,
    ACTIONS(224), 2,
      aux_sym_request_separator_token4,
      aux_sym_request_line_token1,
    STATE(61), 2,
      sym_inline_script,
      aux_sym_url_repeat1,
  [1566] = 6,
    ACTIONS(11), 1,
      anon_sym_DOLLAR,
    ACTIONS(162), 1,
      aux_sym_directive_token1,
    ACTIONS(235), 1,
      aux_sym_request_separator_token4,
    ACTIONS(237), 1,
      sym_dynamic_chunk,
    STATE(129), 1,
      sym_directive,
    STATE(74), 2,
      sym_inline_script,
      aux_sym_dynamic_header_repeat1,
  [1586] = 6,
    ACTIONS(11), 1,
      anon_sym_DOLLAR,
    ACTIONS(162), 1,
      aux_sym_directive_token1,
    ACTIONS(239), 1,
      sym_url_chunk,
    STATE(91), 1,
      sym_url,
    STATE(130), 1,
      sym_directive,
    STATE(60), 2,
      sym_inline_script,
      aux_sym_url_repeat1,
  [1606] = 6,
    ACTIONS(11), 1,
      anon_sym_DOLLAR,
    ACTIONS(162), 1,
      aux_sym_directive_token1,
    ACTIONS(235), 1,
      aux_sym_request_separator_token4,
    ACTIONS(241), 1,
      sym_dynamic_chunk,
    STATE(129), 1,
      sym_directive,
    STATE(71), 2,
      sym_inline_script,
      aux_sym_dynamic_header_repeat1,
  [1626] = 6,
    ACTIONS(11), 1,
      anon_sym_DOLLAR,
    ACTIONS(162), 1,
      aux_sym_directive_token1,
    ACTIONS(243), 1,
      sym_header_name_chunk,
    STATE(111), 1,
      sym_header_name,
    STATE(127), 1,
      sym_directive,
    STATE(70), 2,
      sym_inline_script,
      aux_sym_header_name_repeat1,
  [1646] = 6,
    ACTIONS(245), 1,
      anon_sym_DOLLAR,
    ACTIONS(248), 1,
      aux_sym_directive_token1,
    ACTIONS(251), 1,
      aux_sym_request_line_token1,
    ACTIONS(253), 1,
      sym_method_chunk,
    STATE(98), 1,
      sym_directive,
    STATE(66), 2,
      sym_inline_script,
      aux_sym_method_repeat1,
  [1666] = 6,
    ACTIONS(256), 1,
      aux_sym_request_separator_token4,
    ACTIONS(258), 1,
      anon_sym_DOLLAR,
    ACTIONS(261), 1,
      aux_sym_directive_token1,
    ACTIONS(264), 1,
      sym_header_value_chunk,
    STATE(131), 1,
      sym_directive,
    STATE(67), 2,
      sym_inline_script,
      aux_sym_header_value_repeat1,
  [1686] = 6,
    ACTIONS(11), 1,
      anon_sym_DOLLAR,
    ACTIONS(162), 1,
      aux_sym_directive_token1,
    ACTIONS(267), 1,
      aux_sym_request_separator_token4,
    ACTIONS(269), 1,
      sym_proto_chunk,
    STATE(132), 1,
      sym_directive,
    STATE(75), 2,
      sym_inline_script,
      aux_sym_proto_repeat1,
  [1706] = 6,
    ACTIONS(11), 1,
      anon_sym_DOLLAR,
    ACTIONS(162), 1,
      aux_sym_directive_token1,
    ACTIONS(271), 1,
      aux_sym_request_line_token1,
    ACTIONS(273), 1,
      sym_method_chunk,
    STATE(98), 1,
      sym_directive,
    STATE(66), 2,
      sym_inline_script,
      aux_sym_method_repeat1,
  [1726] = 6,
    ACTIONS(11), 1,
      anon_sym_DOLLAR,
    ACTIONS(162), 1,
      aux_sym_directive_token1,
    ACTIONS(275), 1,
      anon_sym_COLON,
    ACTIONS(277), 1,
      sym_header_name_chunk,
    STATE(127), 1,
      sym_directive,
    STATE(72), 2,
      sym_inline_script,
      aux_sym_header_name_repeat1,
  [1746] = 6,
    ACTIONS(11), 1,
      anon_sym_DOLLAR,
    ACTIONS(162), 1,
      aux_sym_directive_token1,
    ACTIONS(237), 1,
      sym_dynamic_chunk,
    ACTIONS(279), 1,
      aux_sym_request_separator_token4,
    STATE(129), 1,
      sym_directive,
    STATE(74), 2,
      sym_inline_script,
      aux_sym_dynamic_header_repeat1,
  [1766] = 6,
    ACTIONS(281), 1,
      anon_sym_DOLLAR,
    ACTIONS(284), 1,
      aux_sym_directive_token1,
    ACTIONS(287), 1,
      anon_sym_COLON,
    ACTIONS(289), 1,
      sym_header_name_chunk,
    STATE(127), 1,
      sym_directive,
    STATE(72), 2,
      sym_inline_script,
      aux_sym_header_name_repeat1,
  [1786] = 6,
    ACTIONS(11), 1,
      anon_sym_DOLLAR,
    ACTIONS(162), 1,
      aux_sym_directive_token1,
    ACTIONS(292), 1,
      aux_sym_request_separator_token4,
    ACTIONS(294), 1,
      sym_header_value_chunk,
    STATE(131), 1,
      sym_directive,
    STATE(67), 2,
      sym_inline_script,
      aux_sym_header_value_repeat1,
  [1806] = 6,
    ACTIONS(296), 1,
      aux_sym_request_separator_token4,
    ACTIONS(298), 1,
      anon_sym_DOLLAR,
    ACTIONS(301), 1,
      aux_sym_directive_token1,
    ACTIONS(304), 1,
      sym_dynamic_chunk,
    STATE(129), 1,
      sym_directive,
    STATE(74), 2,
      sym_inline_script,
      aux_sym_dynamic_header_repeat1,
  [1826] = 6,
    ACTIONS(307), 1,
      aux_sym_request_separator_token4,
    ACTIONS(309), 1,
      anon_sym_DOLLAR,
    ACTIONS(312), 1,
      aux_sym_directive_token1,
    ACTIONS(315), 1,
      sym_proto_chunk,
    STATE(132), 1,
      sym_directive,
    STATE(75), 2,
      sym_inline_script,
      aux_sym_proto_repeat1,
  [1846] = 6,
    ACTIONS(11), 1,
      anon_sym_DOLLAR,
    ACTIONS(162), 1,
      aux_sym_directive_token1,
    ACTIONS(318), 1,
      sym_proto_chunk,
    STATE(110), 1,
      sym_proto,
    STATE(132), 1,
      sym_directive,
    STATE(68), 2,
      sym_inline_script,
      aux_sym_proto_repeat1,
  [1866] = 2,
    ACTIONS(78), 3,
      aux_sym_request_separator_token4,
      aux_sym_directive_token1,
      anon_sym_COLON,
    ACTIONS(80), 3,
      anon_sym_DOLLAR,
      sym_header_name_chunk,
      sym_dynamic_chunk,
  [1877] = 4,
    ACTIONS(320), 1,
      ts_builtin_sym_end,
    STATE(8), 1,
      sym_request_separator,
    STATE(81), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(5), 2,
      aux_sym_request_separator_token1,
      aux_sym_request_separator_token2,
  [1891] = 4,
    ACTIONS(322), 1,
      ts_builtin_sym_end,
    STATE(8), 1,
      sym_request_separator,
    STATE(79), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(324), 2,
      aux_sym_request_separator_token1,
      aux_sym_request_separator_token2,
  [1905] = 2,
    ACTIONS(80), 1,
      anon_sym_DOLLAR,
    ACTIONS(78), 4,
      aux_sym_request_separator_token4,
      aux_sym_directive_token1,
      aux_sym_request_line_token1,
      sym_url_chunk,
  [1915] = 4,
    ACTIONS(327), 1,
      ts_builtin_sym_end,
    STATE(8), 1,
      sym_request_separator,
    STATE(79), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(5), 2,
      aux_sym_request_separator_token1,
      aux_sym_request_separator_token2,
  [1929] = 2,
    ACTIONS(80), 1,
      anon_sym_DOLLAR,
    ACTIONS(78), 4,
      aux_sym_request_separator_token4,
      aux_sym_directive_token1,
      aux_sym_request_line_token1,
      sym_method_chunk,
  [1939] = 3,
    ACTIONS(329), 1,
      aux_sym_request_separator_token4,
    ACTIONS(331), 1,
      anon_sym_DOLLAR,
    ACTIONS(333), 3,
      aux_sym_directive_token1,
      aux_sym_request_line_token1,
      sym_method_chunk,
  [1951] = 4,
    ACTIONS(320), 1,
      ts_builtin_sym_end,
    STATE(8), 1,
      sym_request_separator,
    STATE(79), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(5), 2,
      aux_sym_request_separator_token1,
      aux_sym_request_separator_token2,
  [1965] = 4,
    ACTIONS(11), 1,
      anon_sym_DOLLAR,
    ACTIONS(162), 1,
      aux_sym_directive_token1,
    STATE(64), 1,
      sym_inline_script,
    STATE(129), 1,
      sym_directive,
  [1978] = 2,
    ACTIONS(80), 1,
      anon_sym_DOLLAR,
    ACTIONS(78), 3,
      aux_sym_request_separator_token4,
      aux_sym_directive_token1,
      sym_dynamic_chunk,
  [1987] = 2,
    ACTIONS(80), 1,
      anon_sym_DOLLAR,
    ACTIONS(78), 3,
      aux_sym_request_separator_token4,
      aux_sym_directive_token1,
      sym_header_value_chunk,
  [1996] = 2,
    ACTIONS(80), 1,
      anon_sym_DOLLAR,
    ACTIONS(78), 3,
      aux_sym_request_separator_token4,
      aux_sym_directive_token1,
      sym_proto_chunk,
  [2005] = 1,
    ACTIONS(322), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_request_separator_token2,
  [2011] = 3,
    ACTIONS(335), 1,
      aux_sym_request_separator_token3,
    ACTIONS(337), 1,
      aux_sym_request_separator_token4,
    ACTIONS(339), 1,
      sym_request_name,
  [2021] = 2,
    ACTIONS(341), 1,
      aux_sym_request_separator_token4,
    ACTIONS(343), 1,
      aux_sym_request_line_token1,
  [2028] = 2,
    ACTIONS(345), 1,
      aux_sym_request_separator_token4,
    ACTIONS(347), 1,
      sym_request_name,
  [2035] = 1,
    ACTIONS(349), 1,
      sym_raw_lua_content,
  [2039] = 1,
    ACTIONS(351), 1,
      anon_sym_LBRACE,
  [2043] = 1,
    ACTIONS(353), 1,
      aux_sym_request_separator_token4,
  [2047] = 1,
    ACTIONS(355), 1,
      aux_sym_request_separator_token4,
  [2051] = 1,
    ACTIONS(357), 1,
      aux_sym_request_separator_token4,
  [2055] = 1,
    ACTIONS(359), 1,
      anon_sym_LBRACE,
  [2059] = 1,
    ACTIONS(361), 1,
      aux_sym_request_separator_token4,
  [2063] = 1,
    ACTIONS(363), 1,
      sym_raw_lua_content,
  [2067] = 1,
    ACTIONS(365), 1,
      ts_builtin_sym_end,
  [2071] = 1,
    ACTIONS(367), 1,
      sym_raw_lua_content,
  [2075] = 1,
    ACTIONS(369), 1,
      aux_sym_request_line_token1,
  [2079] = 1,
    ACTIONS(371), 1,
      anon_sym_RBRACE,
  [2083] = 1,
    ACTIONS(373), 1,
      anon_sym_RBRACE,
  [2087] = 1,
    ACTIONS(375), 1,
      aux_sym_request_separator_token4,
  [2091] = 1,
    ACTIONS(377), 1,
      aux_sym_request_separator_token4,
  [2095] = 1,
    ACTIONS(379), 1,
      aux_sym_request_separator_token4,
  [2099] = 1,
    ACTIONS(381), 1,
      anon_sym_LBRACE,
  [2103] = 1,
    ACTIONS(383), 1,
      aux_sym_request_separator_token4,
  [2107] = 1,
    ACTIONS(385), 1,
      anon_sym_COLON,
  [2111] = 1,
    ACTIONS(387), 1,
      anon_sym_RBRACE,
  [2115] = 1,
    ACTIONS(389), 1,
      anon_sym_COLON,
  [2119] = 1,
    ACTIONS(391), 1,
      anon_sym_RBRACE,
  [2123] = 1,
    ACTIONS(393), 1,
      anon_sym_RBRACE,
  [2127] = 1,
    ACTIONS(395), 1,
      anon_sym_RBRACE,
  [2131] = 1,
    ACTIONS(397), 1,
      anon_sym_RBRACE,
  [2135] = 1,
    ACTIONS(399), 1,
      anon_sym_RBRACE,
  [2139] = 1,
    ACTIONS(401), 1,
      sym_raw_lua_content,
  [2143] = 1,
    ACTIONS(403), 1,
      anon_sym_LBRACE,
  [2147] = 1,
    ACTIONS(405), 1,
      sym_raw_lua_content,
  [2151] = 1,
    ACTIONS(407), 1,
      sym_raw_lua_content,
  [2155] = 1,
    ACTIONS(409), 1,
      sym_raw_lua_content,
  [2159] = 1,
    ACTIONS(411), 1,
      sym_raw_lua_content,
  [2163] = 1,
    ACTIONS(413), 1,
      sym_raw_lua_content,
  [2167] = 1,
    ACTIONS(415), 1,
      anon_sym_LBRACE,
  [2171] = 1,
    ACTIONS(417), 1,
      anon_sym_LBRACE,
  [2175] = 1,
    ACTIONS(419), 1,
      anon_sym_LBRACE,
  [2179] = 1,
    ACTIONS(421), 1,
      anon_sym_LBRACE,
  [2183] = 1,
    ACTIONS(423), 1,
      anon_sym_LBRACE,
  [2187] = 1,
    ACTIONS(425), 1,
      anon_sym_LBRACE,
  [2191] = 1,
    ACTIONS(427), 1,
      anon_sym_LBRACE,
  [2195] = 1,
    ACTIONS(429), 1,
      anon_sym_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 61,
  [SMALL_STATE(4)] = 122,
  [SMALL_STATE(5)] = 183,
  [SMALL_STATE(6)] = 244,
  [SMALL_STATE(7)] = 305,
  [SMALL_STATE(8)] = 366,
  [SMALL_STATE(9)] = 415,
  [SMALL_STATE(10)] = 460,
  [SMALL_STATE(11)] = 493,
  [SMALL_STATE(12)] = 526,
  [SMALL_STATE(13)] = 564,
  [SMALL_STATE(14)] = 602,
  [SMALL_STATE(15)] = 640,
  [SMALL_STATE(16)] = 659,
  [SMALL_STATE(17)] = 678,
  [SMALL_STATE(18)] = 696,
  [SMALL_STATE(19)] = 714,
  [SMALL_STATE(20)] = 732,
  [SMALL_STATE(21)] = 750,
  [SMALL_STATE(22)] = 768,
  [SMALL_STATE(23)] = 786,
  [SMALL_STATE(24)] = 804,
  [SMALL_STATE(25)] = 822,
  [SMALL_STATE(26)] = 840,
  [SMALL_STATE(27)] = 858,
  [SMALL_STATE(28)] = 876,
  [SMALL_STATE(29)] = 894,
  [SMALL_STATE(30)] = 918,
  [SMALL_STATE(31)] = 942,
  [SMALL_STATE(32)] = 958,
  [SMALL_STATE(33)] = 982,
  [SMALL_STATE(34)] = 998,
  [SMALL_STATE(35)] = 1022,
  [SMALL_STATE(36)] = 1038,
  [SMALL_STATE(37)] = 1054,
  [SMALL_STATE(38)] = 1075,
  [SMALL_STATE(39)] = 1098,
  [SMALL_STATE(40)] = 1119,
  [SMALL_STATE(41)] = 1140,
  [SMALL_STATE(42)] = 1161,
  [SMALL_STATE(43)] = 1182,
  [SMALL_STATE(44)] = 1205,
  [SMALL_STATE(45)] = 1226,
  [SMALL_STATE(46)] = 1247,
  [SMALL_STATE(47)] = 1268,
  [SMALL_STATE(48)] = 1289,
  [SMALL_STATE(49)] = 1304,
  [SMALL_STATE(50)] = 1325,
  [SMALL_STATE(51)] = 1346,
  [SMALL_STATE(52)] = 1372,
  [SMALL_STATE(53)] = 1398,
  [SMALL_STATE(54)] = 1424,
  [SMALL_STATE(55)] = 1439,
  [SMALL_STATE(56)] = 1462,
  [SMALL_STATE(57)] = 1475,
  [SMALL_STATE(58)] = 1498,
  [SMALL_STATE(59)] = 1511,
  [SMALL_STATE(60)] = 1524,
  [SMALL_STATE(61)] = 1545,
  [SMALL_STATE(62)] = 1566,
  [SMALL_STATE(63)] = 1586,
  [SMALL_STATE(64)] = 1606,
  [SMALL_STATE(65)] = 1626,
  [SMALL_STATE(66)] = 1646,
  [SMALL_STATE(67)] = 1666,
  [SMALL_STATE(68)] = 1686,
  [SMALL_STATE(69)] = 1706,
  [SMALL_STATE(70)] = 1726,
  [SMALL_STATE(71)] = 1746,
  [SMALL_STATE(72)] = 1766,
  [SMALL_STATE(73)] = 1786,
  [SMALL_STATE(74)] = 1806,
  [SMALL_STATE(75)] = 1826,
  [SMALL_STATE(76)] = 1846,
  [SMALL_STATE(77)] = 1866,
  [SMALL_STATE(78)] = 1877,
  [SMALL_STATE(79)] = 1891,
  [SMALL_STATE(80)] = 1905,
  [SMALL_STATE(81)] = 1915,
  [SMALL_STATE(82)] = 1929,
  [SMALL_STATE(83)] = 1939,
  [SMALL_STATE(84)] = 1951,
  [SMALL_STATE(85)] = 1965,
  [SMALL_STATE(86)] = 1978,
  [SMALL_STATE(87)] = 1987,
  [SMALL_STATE(88)] = 1996,
  [SMALL_STATE(89)] = 2005,
  [SMALL_STATE(90)] = 2011,
  [SMALL_STATE(91)] = 2021,
  [SMALL_STATE(92)] = 2028,
  [SMALL_STATE(93)] = 2035,
  [SMALL_STATE(94)] = 2039,
  [SMALL_STATE(95)] = 2043,
  [SMALL_STATE(96)] = 2047,
  [SMALL_STATE(97)] = 2051,
  [SMALL_STATE(98)] = 2055,
  [SMALL_STATE(99)] = 2059,
  [SMALL_STATE(100)] = 2063,
  [SMALL_STATE(101)] = 2067,
  [SMALL_STATE(102)] = 2071,
  [SMALL_STATE(103)] = 2075,
  [SMALL_STATE(104)] = 2079,
  [SMALL_STATE(105)] = 2083,
  [SMALL_STATE(106)] = 2087,
  [SMALL_STATE(107)] = 2091,
  [SMALL_STATE(108)] = 2095,
  [SMALL_STATE(109)] = 2099,
  [SMALL_STATE(110)] = 2103,
  [SMALL_STATE(111)] = 2107,
  [SMALL_STATE(112)] = 2111,
  [SMALL_STATE(113)] = 2115,
  [SMALL_STATE(114)] = 2119,
  [SMALL_STATE(115)] = 2123,
  [SMALL_STATE(116)] = 2127,
  [SMALL_STATE(117)] = 2131,
  [SMALL_STATE(118)] = 2135,
  [SMALL_STATE(119)] = 2139,
  [SMALL_STATE(120)] = 2143,
  [SMALL_STATE(121)] = 2147,
  [SMALL_STATE(122)] = 2151,
  [SMALL_STATE(123)] = 2155,
  [SMALL_STATE(124)] = 2159,
  [SMALL_STATE(125)] = 2163,
  [SMALL_STATE(126)] = 2167,
  [SMALL_STATE(127)] = 2171,
  [SMALL_STATE(128)] = 2175,
  [SMALL_STATE(129)] = 2179,
  [SMALL_STATE(130)] = 2183,
  [SMALL_STATE(131)] = 2187,
  [SMALL_STATE(132)] = 2191,
  [SMALL_STATE(133)] = 2195,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 1, 0, 0),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 1, 0, 0),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 3, 0, 0),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 3, 0, 0),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 2, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 2, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4, 0, 0),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 4, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat2, 2, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2, 0, 0),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2, 0, 0), SHIFT_REPEAT(65),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2, 0, 0), SHIFT_REPEAT(94),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2, 0, 0), SHIFT_REPEAT(70),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2, 0, 0), SHIFT_REPEAT(85),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 2, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 2, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2, 0, 0),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2, 0, 0), SHIFT_REPEAT(94),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_script, 4, 0, 4),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_script, 4, 0, 4),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body_chunk, 1, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body_chunk, 1, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_line, 2, 0, 2),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header_line, 2, 0, 2),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_line, 2, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request_line, 2, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_line, 3, 1, 5),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header_line, 3, 1, 5),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_line, 4, 0, 6),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request_line, 4, 0, 6),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_line, 4, 1, 1),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header_line, 4, 1, 1),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_line, 4, 1, 5),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header_line, 4, 1, 5),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_line, 4, 1, 7),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header_line, 4, 1, 7),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_line, 5, 1, 1),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header_line, 5, 1, 1),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_line, 5, 1, 8),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header_line, 5, 1, 8),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_line, 5, 1, 9),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header_line, 5, 1, 9),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_line, 6, 0, 10),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request_line, 6, 0, 10),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_line, 6, 1, 11),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header_line, 6, 1, 11),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_separator, 2, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request_separator, 2, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_separator, 3, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request_separator, 3, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_separator, 3, 0, 1),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request_separator, 3, 0, 1),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_separator, 4, 0, 3),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request_separator, 4, 0, 3),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [164] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0), SHIFT_REPEAT(120),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7, 0, 0),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0), SHIFT_REPEAT(120),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_header, 1, 0, 0),
  [180] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_header_name_repeat1, 1, 0, 0), SHIFT(94),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_header_name_repeat1, 1, 0, 0), SHIFT(94),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_header_name_repeat1, 1, 0, 0),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_header_name_repeat1, 1, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 1, 0, 0),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 1, 0, 0),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lifecycle_script, 4, 0, 4),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lifecycle_script, 4, 0, 4),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 1, 0, 0),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_url_repeat1, 2, 0, 0),
  [226] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_url_repeat1, 2, 0, 0), SHIFT_REPEAT(94),
  [229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_url_repeat1, 2, 0, 0), SHIFT_REPEAT(94),
  [232] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_url_repeat1, 2, 0, 0), SHIFT_REPEAT(61),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_header, 2, 0, 0),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [245] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_method_repeat1, 2, 0, 0), SHIFT_REPEAT(94),
  [248] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_method_repeat1, 2, 0, 0), SHIFT_REPEAT(94),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_method_repeat1, 2, 0, 0),
  [253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_method_repeat1, 2, 0, 0), SHIFT_REPEAT(66),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_header_value_repeat1, 2, 0, 0),
  [258] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_header_value_repeat1, 2, 0, 0), SHIFT_REPEAT(94),
  [261] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_header_value_repeat1, 2, 0, 0), SHIFT_REPEAT(94),
  [264] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_header_value_repeat1, 2, 0, 0), SHIFT_REPEAT(67),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proto, 1, 0, 0),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 1, 0, 0),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_name, 1, 0, 0),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_header, 3, 0, 0),
  [281] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_header_name_repeat1, 2, 0, 0), SHIFT_REPEAT(94),
  [284] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_header_name_repeat1, 2, 0, 0), SHIFT_REPEAT(94),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_header_name_repeat1, 2, 0, 0),
  [289] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_header_name_repeat1, 2, 0, 0), SHIFT_REPEAT(72),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_value, 1, 0, 0),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dynamic_header_repeat1, 2, 0, 0),
  [298] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dynamic_header_repeat1, 2, 0, 0), SHIFT_REPEAT(94),
  [301] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dynamic_header_repeat1, 2, 0, 0), SHIFT_REPEAT(94),
  [304] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dynamic_header_repeat1, 2, 0, 0), SHIFT_REPEAT(74),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_proto_repeat1, 2, 0, 0),
  [309] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_proto_repeat1, 2, 0, 0), SHIFT_REPEAT(94),
  [312] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_proto_repeat1, 2, 0, 0), SHIFT_REPEAT(94),
  [315] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_proto_repeat1, 2, 0, 0), SHIFT_REPEAT(75),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [324] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(90),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_method_repeat1, 1, 0, 0),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_method_repeat1, 1, 0, 0),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1, 0, 0),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [365] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lifecycle_directive, 1, 0, 0),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token_raw_lua_content = 0,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_raw_lua_content] = sym_raw_lua_content,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_raw_lua_content] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_sinq_external_scanner_create(void);
void tree_sitter_sinq_external_scanner_destroy(void *);
bool tree_sitter_sinq_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_sinq_external_scanner_serialize(void *, char *);
void tree_sitter_sinq_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_sinq(void) {
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
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_sinq_external_scanner_create,
      tree_sitter_sinq_external_scanner_destroy,
      tree_sitter_sinq_external_scanner_scan,
      tree_sitter_sinq_external_scanner_serialize,
      tree_sitter_sinq_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
