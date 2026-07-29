# Sinq Syntax Highlighting

Native Tree-sitter syntax highlighting for `.sinq` in Visual Studio Code. 

This extension provides robust, context-aware syntax highlighting and serves as the official editor integration for the Sinq CLI toolchain.

## Features
* **Full AST Parsing:** Uses a compiled WebAssembly Tree-sitter grammar for context-aware highlighting.
* **Multiple Requests & Folding:** Supports new `###` multi-request syntax and natively provides folding for requests and multi-line Lua scripts.
* **Lua Injection:** Natively parses and highlights embedded Lua code inside code blocks without breaking the surrounding syntax.

## Usage
Simply install the extension from the [VS Code Marketplace](https://marketplace.visualstudio.com/items?itemName=Veitangie.sinq-helper), open any `.sinq` file, and the internal Tree-sitter engine will automatically initialize and take over the syntax highlighting.
