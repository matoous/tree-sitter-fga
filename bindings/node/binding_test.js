import assert from "node:assert";
import { test } from "node:test";
import Parser from "tree-sitter";
import language from "./index.js";

test("can load grammar", () => {
  const parser = new Parser();
  parser.setLanguage(language);
  const tree = parser.parse("model\n  schema 1.2\ntype user\n");
  assert.equal(tree.rootNode.hasError, false);
  assert.equal(tree.rootNode.namedChild(1).type, "schema");
  assert.ok(Array.isArray(language.nodeTypeInfo));
});

for (const key of ["HIGHLIGHTS_QUERY", "LOCALS_QUERY"]) {
  test(`${key} compiles`, () => {
    assert.equal(typeof language[key], "string");
    new Parser.Query(language, language[key]);
  });
}
