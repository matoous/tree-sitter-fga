(condition_declaration
  name: (identifier) @function)

(conditional
  condition: (identifier) @function)

((simple_type_identifier) @type.builtin)

((container_type_identifier) @type.builtin)

(version) @number
(int) @number
(uint) @number
(float) @number.float

(string) @string
(bytes) @string.special

(boolean) @boolean
(null) @constant.builtin

(relation_ref) @type
(all) @type

(operator) @operator
(condition_operator) @operator

(model) @keyword
(module) @keyword
(schema) @keyword
(relations) @keyword
(type_declaration) @keyword
(definition) @keyword

[
  "from"
  "contents"
  "extend"
] @keyword

[
  "condition"
  "with"
] @keyword.function

(comment) @comment
