load("@rules_cc//cc:defs.bzl", "cc_binary", "cc_library", "cc_test")

cc_library(
    name = "tutorial_01",
    srcs = ["tutorial_01.cpp"],
    hdrs = ["tutorial_01.h"],
)

cc_test(
    name = "tutorial_01_test",
    srcs = ["tutorial_01_test.cpp"],
    deps = [":tutorial_01"],
)

cc_binary(
    name = "main",
    srcs = ["main.cpp"],
    deps = [":tutorial_01"],
)
