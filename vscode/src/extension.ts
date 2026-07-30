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
    'number',
    'comment'
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
    'string.special': 3,
    'comment': 8,
    'markup.heading': 8
};

export async function activate(context: vscode.ExtensionContext) {
    await Parser.init();

    const sinqWasm = path.join(context.extensionPath, 'bin', 'tree-sitter-sinq.wasm');
    const sinqLanguage = await Language.load(sinqWasm);
    const parser = new Parser();
    parser.setLanguage(sinqLanguage);

    const sinqHighlights = fs.readFileSync(path.join(context.extensionPath, 'queries', 'highlights.scm'), 'utf8');
    const sinqQuery = new Query(sinqLanguage, sinqHighlights);

    let sinqFoldsQuery: Query | undefined;
    try {
        const sinqFolds = fs.readFileSync(path.join(context.extensionPath, 'queries', 'folds.scm'), 'utf8');
        sinqFoldsQuery = new Query(sinqLanguage, sinqFolds);
    } catch (e) {
        // folds.scm might not be available or loadable, which is fine
    }

    const provider: vscode.DocumentSemanticTokensProvider = {
        provideDocumentSemanticTokens(document: vscode.TextDocument): vscode.SemanticTokens {
            const builder = new vscode.SemanticTokensBuilder(legend);
            const tree = parser.parse(document.getText());

            if (!tree) return builder.build();
            const captures = sinqQuery.captures(tree.rootNode);
            const tokenPriorityMap: Record<number, number> = {
                0: 10, // keyword
                1: 5,  // operator
                2: 10, // method
                3: 5,  // string
                4: 1,  // variable (lowest priority)
                5: 8,  // property
                6: 10, // function
                7: 5,  // number
                8: 2,  // comment
            };

            const lineToTokens = new Map<number, { type: number, priority: number }[]>();
            
            function applyToken(startRow: number, startCol: number, endRow: number, endCol: number, type: number) {
                const priority = tokenPriorityMap[type] || 0; 
                for (let r = startRow; r <= endRow; r++) {
                    if (!lineToTokens.has(r)) lineToTokens.set(r, []);
                    const chars = lineToTokens.get(r)!;
                    
                    const colStart = (r === startRow) ? startCol : 0;
                    const colEnd = (r === endRow) ? endCol : document.lineAt(r).text.length;
                    
                    for (let i = colStart; i < colEnd; i++) {
                        if (!chars[i] || priority >= chars[i].priority) {
                            chars[i] = { type, priority };
                        }
                    }
                }
            }

            for (const capture of captures) {
                if (capture.node.type === 'raw_lua_content') continue;
                const tokenTypeIndex = captureToTokenMap[capture.name];
                if (tokenTypeIndex !== undefined) {
                    applyToken(
                        capture.node.startPosition.row,
                        capture.node.startPosition.column,
                        capture.node.endPosition.row,
                        capture.node.endPosition.column,
                        tokenTypeIndex
                    );
                }
            }

            const luaNodes = tree.rootNode.descendantsOfType('raw_lua_content');
            const luaRegex = /(--.*)|("(?:[^"\\]|\\.)*")|('(?:[^'\\]|\\.)*')|(\b\d+(?:\.\d+)?\b)|(\b(?:if|then|else|elseif|end|local|return|not|and|or|true|false|nil|for|while|repeat|until|break|goto|function)\b)|([a-zA-Z_]\w*)/g;
            
            for (const node of luaNodes) {
                const lines = node.text.split('\n');
                for (let r = 0; r < lines.length; r++) {
                    const lineStr = lines[r];
                    let match;
                    while ((match = luaRegex.exec(lineStr)) !== null) {
                        let typeIndex: number | null = null;
                        if (match[1]) typeIndex = 8; // comment
                        else if (match[2] || match[3]) typeIndex = 3; // string
                        else if (match[4]) typeIndex = 7; // number
                        else if (match[5]) typeIndex = 0; // keyword
                        else if (match[6]) typeIndex = 4; // variable
                        
                        if (typeIndex !== null) {
                            const rowOffset = node.startPosition.row + r;
                            const colOffset = (r === 0) ? node.startPosition.column + match.index : match.index;
                            applyToken(rowOffset, colOffset, rowOffset, colOffset + match[0].length, typeIndex);
                        }
                    }
                }
            }

            const lines = Array.from(lineToTokens.keys()).sort((a, b) => a - b);
            for (const line of lines) {
                const chars = lineToTokens.get(line)!;
                let currentType: number | null = null;
                let currentStart = -1;
                
                for (let i = 0; i <= chars.length; i++) {
                    const cell = chars[i];
                    const type = cell ? cell.type : null;
                    if (type !== currentType) {
                        if (currentType !== null) {
                            builder.push(line, currentStart, i - currentStart, currentType, 0);
                        }
                        currentType = type;
                        currentStart = i;
                    }
                }
            }

            return builder.build();
        }
    };

    context.subscriptions.push(
        vscode.languages.registerDocumentSemanticTokensProvider({ language: 'sinq' }, provider, legend)
    );

    const foldingProvider: vscode.FoldingRangeProvider = {
        provideFoldingRanges(document: vscode.TextDocument): vscode.FoldingRange[] {
            if (!sinqFoldsQuery) return [];
            const tree = parser.parse(document.getText());
            if (!tree) return [];
            
            const captures = sinqFoldsQuery.captures(tree.rootNode);
            const ranges: vscode.FoldingRange[] = [];
            
            for (const capture of captures) {
                if (capture.name === 'fold' && capture.node.startPosition.row < capture.node.endPosition.row) {
                    ranges.push(new vscode.FoldingRange(
                        capture.node.startPosition.row,
                        capture.node.endPosition.row
                    ));
                }
            }
            return ranges;
        }
    };

    context.subscriptions.push(
        vscode.languages.registerFoldingRangeProvider({ language: 'sinq' }, foldingProvider)
    );
}
