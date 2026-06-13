# Sinq Syntax Highlighting

Native Tree-sitter syntax highlighting for `.sinq` in Visual Studio Code. 

This extension provides robust, context-aware syntax highlighting and serves as the official editor integration for the Sinq CLI toolchain.

## Features
* **Full AST Parsing:** Uses a compiled WebAssembly Tree-sitter grammar for context-aware highlighting.
* **Lua Injection:** Natively parses and highlights embedded Lua code inside code blocks without breaking the surrounding syntax.

## Usage
Simply install the extension from the Marketplace, open any `.sinq` file, and the internal Tree-sitter engine will automatically initialize and take over the syntax highlighting.
