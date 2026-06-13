/*
 * MIT License
 * Copyright (c) 2021 Munif Tanjim
 * Copyright (c) 2026 Veitangie - Modifications for Sinq DSL
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"), to
 * deal in the Software without restriction, including without limitation the
 * rights to use, copy, modify, merge, publish, distribute, sublicense, and/or
 * sell copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#include <tree_sitter/parser.h>
#include <wctype.h>

enum TokenType { RAW_LUA_CONTENT };

void *tree_sitter_sinq_external_scanner_create() { return NULL; }
void tree_sitter_sinq_external_scanner_destroy(void *payload) {}
unsigned tree_sitter_sinq_external_scanner_serialize(void *payload,
                                                     char *buffer) {
  return 0;
}
void tree_sitter_sinq_external_scanner_deserialize(void *payload,
                                                   const char *buffer,
                                                   unsigned length) {}

static inline void consume(TSLexer *lexer) { lexer->advance(lexer, false); }

static inline bool consume_char(char c, TSLexer *lexer) {
  if (lexer->lookahead != c)
    return false;
  consume(lexer);
  return true;
}

static inline uint8_t consume_and_count_char(char c, TSLexer *lexer) {
  uint8_t count = 0;
  while (lexer->lookahead == c) {
    ++count;
    consume(lexer);
  }
  return count;
}

bool tree_sitter_sinq_external_scanner_scan(void *payload, TSLexer *lexer,
                                            const bool *valid_symbols) {
  if (!valid_symbols[RAW_LUA_CONTENT])
    return false;

  int brace_depth = 1;

  while (lexer->lookahead != 0) {

    if (lexer->lookahead == '"' || lexer->lookahead == '\'') {
      char quote = (char)lexer->lookahead;
      consume(lexer);
      while (lexer->lookahead != 0) {
        if (lexer->lookahead == '\\') {
          consume(lexer);
          if (lexer->lookahead != 0)
            consume(lexer);
        } else if (lexer->lookahead == quote) {
          consume(lexer);
          break;
        } else {
          consume(lexer);
        }
      }
      continue;
    }

    bool is_long_bracket = false;
    if (lexer->lookahead == '-') {
      consume(lexer);
      if (lexer->lookahead == '-') {
        consume(lexer);
        if (lexer->lookahead == '[')
          is_long_bracket = true;
      }
    } else if (lexer->lookahead == '[') {
      is_long_bracket = true;
    }

    if (is_long_bracket) {
      consume(lexer);
      uint8_t level = consume_and_count_char('=', lexer);

      if (consume_char('[', lexer)) {
        while (lexer->lookahead != 0) {
          if (lexer->lookahead == ']') {
            consume(lexer);
            uint8_t close_level = consume_and_count_char('=', lexer);
            if (close_level == level && consume_char(']', lexer)) {
              break;
            }
          } else {
            consume(lexer);
          }
        }
        continue;
      }
    }

    if (lexer->lookahead == '{') {
      brace_depth++;
    } else if (lexer->lookahead == '}') {
      brace_depth--;
      if (brace_depth == 0) {
        lexer->result_symbol = RAW_LUA_CONTENT;
        return true;
      }
    }

    consume(lexer);
  }

  return false;
}
