import XCTest
import SwiftTreeSitter
import TreeSitterSinq

final class TreeSitterSinqTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_sinq())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Sinq grammar")
    }
}
