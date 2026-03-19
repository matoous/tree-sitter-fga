package tree_sitter_fga_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_fga "github.com/matoous/tree-sitter-fga/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_fga.Language())
	if language == nil {
		t.Errorf("Error loading Fga grammar")
	}
}
