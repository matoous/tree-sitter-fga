// swift-tools-version:5.6
import PackageDescription

let package = Package(
    name: "TreeSitterFga",
    products: [
        .library(name: "TreeSitterFga", targets: ["TreeSitterFga"]),
    ],
    dependencies: [
        .package(url: "https://github.com/tree-sitter/swift-tree-sitter", from: "0.25.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterFga",
            dependencies: [],
            path: ".",
            sources: [
                "src/parser.c",
            ],
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterFgaTests",
            dependencies: [
                .product(name: "SwiftTreeSitter", package: "swift-tree-sitter"),
                "TreeSitterFga",
            ],
            path: "bindings/swift/TreeSitterFgaTests"
        )
    ],
    cLanguageStandard: .c11
)
