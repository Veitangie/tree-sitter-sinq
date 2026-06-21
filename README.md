[![License: GPL v3](https://img.shields.io/badge/License-GPLv3-blue.svg)](https://www.gnu.org/licenses/gpl-3.0)
![Pipeline Status](https://github.com/Veitangie/sinq/actions/workflows/ci.yml/badge.svg)

# tree-sitter-sinq

A Tree-sitter grammar for **Sinq**, a domain-specific language (DSL) for standalone CLI API testing.

## Features

* **Full AST Generation:** Strictly parses HTTP request lines, headers, and bodies.
* **Embedded Lua:** Provides syntax highlighting and injection for Lua scripts inside `$PRE{}`, `$POST{}`, and `$ASSERT{}` lifecycle blocks, as well as inline `${...}` evaluations.

## Editor Integration

### Neovim (0.10+)

The easiest way to install the parser and its highlighting queries is to add this repository as a plugin using your package manager (e.g., `lazy.nvim`). This automatically adds the grammar and query files to your Neovim runtime path.

Add the following to your Neovim configuration:

```lua
return {
  "Veitangie/tree-sitter-sinq",
  build = "build.lua",
  config = function()
    vim.filetype.add({
      extension = {
        sinq = "sinq",
      },
    })
    vim.filetype.add({
      filename = {
        [".scenario"] = "json",
      },
      extension = {
        scenario = "json",
      },
    })

    vim.api.nvim_create_autocmd("FileType", {
      pattern = "sinq",
      callback = function(args)
        vim.treesitter.start(args.buf, "sinq")
      end,
    })
  end,
}
```

Once you restart Neovim, install the parser binary by running:
```vim
:TSInstall sinq
```

## Development

To build and run tests locally, you need [Node.js](https://nodejs.org/) installed. We use `npx` to execute the Tree-sitter CLI directly from the project's dependencies.

```bash
# Install local dependencies (including the Tree-sitter CLI)
npm install

# Regenerate the C parser code
npx tree-sitter generate

# Run the test corpus
npx tree-sitter test
```
