cmd_Release/tree_sitter_fga_binding.node := c++ -bundle -undefined dynamic_lookup -Wl,-search_paths_first -mmacosx-version-min=10.7 -arch arm64 -L./Release -stdlib=libc++ -L/opt/homebrew/opt/llvm/lib, -L/opt/homebrew/opt/llvm/lib/c++ -Wl,-rpath,/opt/homebrew/opt/llvm/lib/c++ -o Release/tree_sitter_fga_binding.node Release/obj.target/tree_sitter_fga_binding/bindings/node/binding.o Release/obj.target/tree_sitter_fga_binding/src/parser.o 