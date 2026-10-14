from unittest import TestCase

import tree_sitter
import tree_sitter_fga


class TestWheelQueries(TestCase):
    def test_queries_compile(self):
        language = tree_sitter.Language(tree_sitter_fga.language())
        tree_sitter.Query(language, tree_sitter_fga.HIGHLIGHTS_QUERY)
        tree_sitter.Query(language, tree_sitter_fga.LOCALS_QUERY)
