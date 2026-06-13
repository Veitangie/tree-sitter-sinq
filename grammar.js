// tree-sitter-sinq grammar
// Copyright (C) 2026 Veitangie
// SPDX-License-Identifier: GPL-3.0-or-later

module.exports = grammar({
  name: 'sinq',

  extras: $ => [],

  externals: $ => [
    $.raw_lua_content
  ],

  conflicts: $ => [
    [$.header_name, $.dynamic_header]
  ],

  rules: {
    source_file: $ => seq(
      optional($._ws),
      repeat(seq($.lifecycle_script, optional($._ws))),
      $.request_line,
      repeat($.header_line),
      optional(seq(
        $.body,
        optional($._ws)
      )),
      repeat(seq($.lifecycle_script, optional($._ws)))
    ),

    _ws: $ => /[ \t\r\n]+/,

    lifecycle_script: $ => seq(
      field('directive', $.lifecycle_directive),
      '{',
      field('lua_code', $.raw_lua_content),
      '}'
    ),

    lifecycle_directive: $ => choice('$PRE', '$RETRY', '$ASSERT', '$POST'),

    inline_script: $ => seq(
      field('directive', $.directive),
      '{',
      field('lua_code', $.raw_lua_content),
      '}'
    ),

    directive: $ => choice('$', /\$[a-zA-Z0-9_]+/),

    request_line: $ => seq(
      choice(
        $.inline_script,
        seq(
          field('method', $.method),
          / /,
          field('url', $.url),
          optional(seq(
            / /,
            field('proto', $.proto)
          ))
        )
      ),
      /\r?\n/
    ),

    method: $ => repeat1(choice($.method_chunk, $.inline_script)),
    method_chunk: $ => /[a-zA-Z0-9]+/,

    url: $ => repeat1(choice($.url_chunk, $.inline_script)),
    url_chunk: $ => /[^\s$]+/,

    proto: $ => repeat1(choice($.proto_chunk, $.inline_script)),
    proto_chunk: $ => /[a-zA-Z0-9.\/]+/,

    header_line: $ => seq(
      choice(
        prec.dynamic(1, seq(
          optional(/[ \t]+/),
          field('name', $.header_name),
          ':',
          optional(/[ \t]+/),
          optional(field('value', $.header_value))
        )),
        field('dynamic', $.dynamic_header)
      ),
      /\r?\n/
    ),

    header_name: $ => repeat1(choice($.header_name_chunk, $.inline_script)),
    header_name_chunk: $ => /[a-zA-Z0-9-]+/,

    header_value: $ => repeat1(choice($.header_value_chunk, $.inline_script)),
    header_value_chunk: $ => /[^\r\n$]+/,

    dynamic_header: $ => seq(optional($.dynamic_chunk), $.inline_script, repeat(choice($.dynamic_chunk, $.inline_script))),
    dynamic_chunk: $ => /[^\r\n:$]+/,

    body: $ => seq(/\r?\n/,repeat1(choice($.body_chunk, $.inline_script))),
    body_chunk: $ => /[^$]+/
  }
});
