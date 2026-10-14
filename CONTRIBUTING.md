# Contributing

## Tooling and generated files

The generator is pinned to Tree-sitter **0.27.1** with language ABI **15**.
Review the [release notes][release-271] before changing it. Runtime bindings
have independent release versions.

The [C][c], [JavaScript][javascript], and [Python][python] grammars under the
Tree-sitter organization provide the maintenance patterns used here: a
`tree-sitter.json` manifest, checked-in generated parser sources, separate
bindings, corpus and query tests, cross-platform parser-test CI, fuzzing, and
optional real-world example parsing. The [0.27.1 binding templates][templates]
are the reference for binding implementation details. The larger grammars do
not all use the latest CLI; their package versions are not a release target.

Keep `src/parser.c`, `src/grammar.json`, `src/node-types.json` and the generated
`src/tree_sitter/*.h` files in version control. Do not commit native binaries,
`build/`, or language-specific caches. Keep the existing npm and Cargo lockfiles
tracked for reproducible development and CI.

To upgrade:

1. Check the latest stable release and read the intervening release notes.
2. Update the exact `tree-sitter-cli` version in `package.json` and the
   `tree-sitter-ref` in `.github/workflows/ci.yaml` together. Refresh the npm lock.
   Update the Rust test runtime and its lockfile. Node, Go, Python and Swift
   bindings release independently; do not copy the CLI version into them.
3. Run `npm ci` and `npm run build`. The build regenerates with ABI 15 and
   rebuilds the Node addon, including when a previous build exists.
4. Run `npm run lint`, `npm test`, `npm run test:parser`,
   `npm run test:upstream`, and
   `npx tree-sitter fuzz --iterations 100`. Inspect generated node-type changes
   and update all affected queries and corpus trees deliberately.
5. Run binding tests as applicable:

   ```sh
   cargo test --locked
   go test ./bindings/go
   python -m pip install -e '.[core]' build
   python -m unittest discover -v -s bindings/python/tests
   python -m build
   python -m pip install --force-reinstall --no-deps dist/*.whl
   python -m unittest discover -v -s bindings/python/tests/wheel
   swift test
   ```

   Use a Python virtual environment. Swift tests need a toolchain with XCTest.
   Check Python source distributions contain `src/parser.c` and headers, and
   wheels contain the queries. Free-threaded Python wheels must retain their
   interpreter-specific tag instead of claiming `abi3` compatibility.

CI pins the generator and ABI and checks every generated source file. Release
artifacts use the committed generated parser, so release-time generation cannot
silently change it. The shared release workflow is pinned; it always produces
provenance attestations.

## Repository layout

- `grammar.js` defines the grammar; `src/` contains generated parser sources.
- `queries/` contains highlighting and locals queries.
- `bindings/` contains the C, Go, Node.js, Python, Rust and Swift bindings.
- `test/corpus/` contains syntax-tree expectations and `test/highlight/`
  contains highlighting assertions, both run by `npm run test:parser`.
- `test/upstream_test.js` runs the offline OpenFGA fixtures in `test/fixtures/`.

The standard Python build copies query files into the wheel. Editable installs
support parsing; query resources are checked separately on an installed wheel.

## OpenFGA compatibility

Use [OpenFGA's ANTLR parser][fga-parser], [lexer][fga-lexer],
[syntax tests][fga-tests] and [configuration language documentation][fga-docs]
as the syntax references. The offline fixture records the upstream revision;
see [its provenance and license](test/fixtures/README.md).

At each parenthesis level, OpenFGA allows a chain of `or`, a chain of `and`, or
one `but not`. It has no implicit precedence between these operators. Only the
first operand can contain a direct restriction list; subsequent operands cannot
hide such a list inside parentheses. Restriction lists and condition parameter
lists must be nonempty. Types precede conditions. Extended identifiers allow
path separators between identifier segments. CEL identifiers do not contain
hyphens, so `left-right` is subtraction even though FGA names may contain `-`.

The condition parser intentionally handles CEL tokens and balanced delimiters
without implementing CEL's expression grammar or type system. It recognizes
line comments, raw and multiline strings, bytes, and numeric literals. Syntax
highlighting tests cover condition delimiters, locals, strings, comments and
the inline `$expression` marker.

This is an editor parser, not an OpenFGA validator. It accepts flexible
whitespace, duplicate declarations and syntactically valid but semantically
invalid models. Schema-version support, whether `extend` is allowed in a model,
module-path safety and condition evaluation belong to OpenFGA tooling.

[release-271]: https://github.com/tree-sitter/tree-sitter/releases/tag/v0.27.1
[c]: https://github.com/tree-sitter/tree-sitter-c
[javascript]: https://github.com/tree-sitter/tree-sitter-javascript
[python]: https://github.com/tree-sitter/tree-sitter-python
[templates]: https://github.com/tree-sitter/tree-sitter/tree/v0.27.1/crates/cli/src/templates
[fga-parser]: https://github.com/openfga/language/blob/f558baace40cebd4548ab50b6d50ce65a940babb/OpenFGAParser.g4
[fga-lexer]: https://github.com/openfga/language/blob/f558baace40cebd4548ab50b6d50ce65a940babb/OpenFGALexer.g4
[fga-tests]: https://github.com/openfga/language/blob/f558baace40cebd4548ab50b6d50ce65a940babb/tests/data/dsl-syntax-validation-cases.yaml
[fga-docs]: https://openfga.dev/docs/configuration-language
