import XCTest
import SwiftTreeSitter
import TreeSitterFga

final class TreeSitterFgaTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_fga())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Fga grammar")
    }
}
