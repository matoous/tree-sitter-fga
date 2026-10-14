import assert from "node:assert";
import { readFileSync } from "node:fs";
import { test } from "node:test";
import Parser from "tree-sitter";
import language from "../bindings/node/index.js";

const upstream = JSON.parse(readFileSync(new URL("./fixtures/openfga-syntax.json", import.meta.url), "utf8"));
for (const { name, dsl, validSyntax } of upstream.cases) {
  test(`OpenFGA: ${name}`, () => {
    const parser = new Parser();
    parser.setLanguage(language);
    const tree = parser.parse(dsl);
    assert.equal(tree.rootNode.hasError, !validSyntax, tree.rootNode.toString());
  });
}
