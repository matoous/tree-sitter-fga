package tree_sitter_fga_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-fga"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_fga.Language())
	if language == nil {
		t.Errorf("Error loading Fga grammar")
	}
}
