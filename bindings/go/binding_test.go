package tree_sitter_sinq_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_sinq "github.com/tree-sitter/tree-sitter-sinq/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_sinq.Language())
	if language == nil {
		t.Errorf("Error loading Sinq grammar")
	}
}
