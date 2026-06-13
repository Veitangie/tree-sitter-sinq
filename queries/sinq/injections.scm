(lifecycle_script
  lua_code: (raw_lua_content) @injection.content
  (#set! injection.language "lua"))

(inline_script
  lua_code: (raw_lua_content) @injection.content
  (#set! injection.language "lua"))

