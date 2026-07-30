# Sinq Helper for VSCode

Official Visual Studio Code extension for [Sinq](https://sinq.veitangie.dev), a tool for stateful workflow-based HTTP API testing.

This extension provides syntax highlighting for `.sinq` files and serves as the official editor integration for the Sinq CLI toolchain.

## Features
* **Full AST Parsing:** Uses a compiled WebAssembly Tree-sitter grammar for context-aware highlighting.
* **Multiple Requests & Folding:** Supports new `###` multi-request syntax and natively provides folding for requests and multi-line Lua scripts.
* **Lua Injection:** Natively parses and highlights embedded Lua code inside code blocks without breaking the surrounding syntax.
