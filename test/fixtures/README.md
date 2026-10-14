# OpenFGA syntax fixtures

`openfga-syntax.json` contains all 81 cases from
[`openfga/language`'s syntax suite](https://github.com/openfga/language/blob/f558baace40cebd4548ab50b6d50ce65a940babb/tests/data/dsl-syntax-validation-cases.yaml),
checked on 2026-10-14. The source is licensed under Apache-2.0; see
[OPENFGA-LICENSE](OPENFGA-LICENSE).

The names and DSL are preserved. `validSyntax` records whether parsing should
succeed. Five upstream cases test semantic errors: duplicate relations,
duplicate conditions, duplicate parameters, `extend` in a non-modular model,
and repeated extensions of the same type. They remain syntactically valid
here, with their original diagnostics recorded in `semanticErrors`.

To refresh, fetch the source at a recorded revision, copy every case's `name`
and `dsl`, classify the expected errors as syntax or semantics, and run
`npm run build && npm run test:upstream`. Review changes to the upstream lexer
and parser alongside any fixture changes. The tests run offline and require no
YAML dependency.
