#include "RomanCalculator.hpp"

#include <gtest/gtest.h>


TEST(RomanCalulator, addShouldReturnEmptyString)
{
    RomanCalculator calculator;
    EXPECT_EQ(calculator.add("I", "I"), "");

}

