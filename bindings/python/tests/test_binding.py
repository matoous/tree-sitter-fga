from unittest import TestCase

import tree_sitter
import tree_sitter_fga


class TestLanguage(TestCase):
    def test_can_load_grammar(self):
        language = tree_sitter.Language(tree_sitter_fga.language())
        parser = tree_sitter.Parser(language)
        tree = parser.parse(b"model\n  schema 1.2\ntype user\n")
        self.assertFalse(tree.root_node.has_error)
