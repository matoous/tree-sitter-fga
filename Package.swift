// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterFga",
    products: [
        .library(name: "TreeSitterFga", targets: ["TreeSitterFga"]),
    ],
    dependencies: [
        .package(name: "SwiftTreeSitter", url: "https://github.com/tree-sitter/swift-tree-sitter", from: "0.8.0"),
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
                "SwiftTreeSitter",
                "TreeSitterFga",
            ],
            path: "bindings/swift/TreeSitterFgaTests"
        )
    ],
    cLanguageStandard: .c11
)
