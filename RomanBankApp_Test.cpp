#include "RomanBank.hpp"
#include "RomanBankApp.hpp"
#include "RomanCalculator.hpp"

#include <gtest/gtest.h>

TEST(RomanBankApp, changeAccountValueShouldReturnTrue)
{
    RomanBank bank;
    bank.createAccount("I", "XXVI");
    RomanBankApp app(&bank);
    EXPECT_TRUE(bank.changeAccountValue("I", "V"));
}
