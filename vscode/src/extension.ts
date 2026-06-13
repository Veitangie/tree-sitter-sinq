// tree-sitter-sinq grammar wrapper for vs code extension
// Copyright (C) 2026 Veitangie
// SPDX-License-Identifier: GPL-3.0-or-later
import * as vscode from 'vscode';
import { Parser, Language, Query } from 'web-tree-sitter';
import * as path from 'path';
import * as fs from 'fs';

const tokenTypes = [
    'keyword',
    'operator',
    'method',
    'string',
    'variable',
    'property',
    'function',
    'number'
];
const tokenModifiers: string[] = [];
const legend = new vscode.SemanticTokensLegend(tokenTypes, tokenModifiers);

const captureToTokenMap: Record<string, number> = {
    'keyword.function': 0,
    'punctuation.bracket': 1,
    'punctuation.delimiter': 1,
    'method': 2,
    'string.url': 3,
    'constant.builtin': 0,
    'field': 5,
    'string': 3,
    'variable': 4,
    'string.special': 3
};

export async function activate(context: vscode.ExtensionContext) {
    await Parser.init();

    const sinqWasm = path.join(context.extensionPath, 'bin', 'tree-sitter-sinq.wasm');
    const luaWasm = path.join(context.extensionPath, 'bin', 'tree-sitter-lua.wasm');
    
    const sinqLanguage = await Language.load(sinqWasm);
    const luaLanguage = await Language.load(luaWasm);
    
    const parser = new Parser();
    parser.setLanguage(sinqLanguage);

    const sinqHighlights = fs.readFileSync(path.join(context.extensionPath, 'queries', 'highlights.scm'), 'utf8');
    const sinqQuery = new Query(sinqLanguage, sinqHighlights);

    const luaQuery = new Query(luaLanguage, `
        (function_call name: (identifier) @method)
        (string) @string
        (number) @number
        (identifier) @variable
        ["if" "then" "end" "local" "return" "not" "and" "or"] @keyword.function
    `);

    const provider: vscode.DocumentSemanticTokensProvider = {
        provideDocumentSemanticTokens(document: vscode.TextDocument): vscode.SemanticTokens {
            const builder = new vscode.SemanticTokensBuilder(legend);
            const tree = parser.parse(document.getText());

            if (!tree) return builder.build();
            const captures = sinqQuery.captures(tree.rootNode);

            for (const capture of captures) {
                if (capture.node.type === 'raw_lua_content') continue;

                const tokenTypeIndex = captureToTokenMap[capture.name];
                if (tokenTypeIndex !== undefined) {
                    builder.push(
                        capture.node.startPosition.row,
                        capture.node.startPosition.column,
                        capture.node.endIndex - capture.node.startIndex,
                        tokenTypeIndex,
                        0
                    );
                }
            }

            const luaNodes = tree.rootNode.descendantsOfType('raw_lua_content');
            for (const node of luaNodes) {
                const luaParser = new Parser();
                luaParser.setLanguage(luaLanguage);
                const luaTree = luaParser.parse(node.text);
                if (!luaTree) continue;
                const luaCaptures = luaQuery.captures(luaTree.rootNode);
                
                for (const lc of luaCaptures) {
                    const tokenTypeIndex = captureToTokenMap[lc.name] ?? 4; 
                    
                    const isFirstLine = lc.node.startPosition.row === 0;
                    const rowOffset = node.startPosition.row;
                    const colOffset = isFirstLine ? node.startPosition.column : 0;

                    builder.push(
                        rowOffset + lc.node.startPosition.row,
                        colOffset + lc.node.startPosition.column,
                        lc.node.endIndex - lc.node.startIndex,
                        tokenTypeIndex,
                        0
                    );
                }
            }

            return builder.build();
        }
    };

    context.subscriptions.push(
        vscode.languages.registerDocumentSemanticTokensProvider({ language: 'sinq' }, provider, legend)
    );
}
