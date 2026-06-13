(lifecycle_script
  directive: (lifecycle_directive) @keyword.function
)

(inline_script
  directive: (directive) @keyword.function
)

["{" "}"] @punctuation.bracket
[":" ] @punctuation.delimiter

(method) @method
(url) @string.url
(proto) @constant.builtin

(header_name) @field
(header_value) @string

(dynamic_header) @variable

(body_chunk) @string.special
