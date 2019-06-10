#include "RomanCalculator.hpp"

#include <gtest/gtest.h>

TEST(RomanCalulator, GivenIplusI_ShouldReturnII)
{
    RomanCalculator calculator;
    EXPECT_EQ(calculator.add("I", "I"), "II");
}
