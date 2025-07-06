set quiet

_default: _help

_help:
    just --list

# Regenerate parser files from grammar.js
generate:
    tree-sitter generate

# Compile the parser
build: generate
    tree-sitter build

# Run the tests (queries and parsing examples)
test: build
    tree-sitter test

# Update config (e.g., for queries or highlighting)
update:
    tree-sitter init --update

# Clean generated files (optional, if you have a clean step)
clean:
    make clean

# Show syntax tree of sample file
# Usage: just parse example.fga
parse file: build
    tree-sitter parse {{file}}

# Create highlights of sample file
# Usage: just highlight example.fga
highlight file: build
    tree-sitter highlight {{file}}

# Shortcut to open tree-sitter playground in browser (local HTML)
playground: build
    open tree-sitter-playground/index.html

# Ensure tree-sitter CLI is installed
check:
    which tree-sitter || cargo install tree-sitter-cli
