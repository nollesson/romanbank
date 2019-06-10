cc_library(
    name = "RomanCalculator",
    srcs = ["RomanCalculator.cpp"],
    hdrs = ["RomanCalculator.hpp"],
)

cc_library(
    name = "RomanBank",
    srcs = ["RomanBank.cpp"],
    hdrs = ["RomanBank.hpp"],
)

cc_library(
    name = "RomanBankApp",
    srcs = ["RomanBankApp.cpp"],
    hdrs = ["RomanBankApp.hpp"],
    deps =
        [
            "RomanBank",
            "RomanCalculator",
        ],
)

cc_library(
    name = "RomanBank_Mock",
    hdrs = ["RomanBank_Mock.hpp"],
    deps = [
        "RomanBank",
        "@gtest//:gtest_main",
    ],
)

cc_test(
    name = "RomanCalculator_Test",
    srcs = ["RomanCalculator_Test.cpp"],
    deps = [
        "RomanCalculator",
        "@gtest//:gtest_main",
    ],
)

cc_test(
    name = "RomanBankApp_Test",
    srcs = ["RomanBankApp_Test.cpp"],
    deps = [
        "RomanBank_Mock",
        "RomanBankApp",
        "@gtest//:gtest_main",
    ],
)
