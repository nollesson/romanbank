#include "RomanBank_Mock.hpp"
#include "RomanBankApp.hpp"
#include "RomanCalculator.hpp"


#include <gtest/gtest.h>
#include <gmock/gmock.h>

using ::testing::_;
using ::testing::Return;
using ::testing::NiceMock;

TEST(RomanBankApp, verifyMocks)
{
    NiceMock<MockRomanBank> mockBank;
    EXPECT_CALL(mockBank, createAccount("1", "2"));
    ON_CALL(mockBank, changeAccountValue("3", "4")).WillByDefault(Return(true));
    EXPECT_CALL(mockBank, getValueInAccount("5")).WillRepeatedly(Return("6"));
    EXPECT_CALL(mockBank, getSavingsInGreekCurrency("7")).WillRepeatedly(Return("8"));

    mockBank.createAccount("1", "2");
    EXPECT_TRUE((mockBank.changeAccountValue("3", "4")));
    EXPECT_EQ(mockBank.getValueInAccount("5"), "6");
    EXPECT_EQ(mockBank.getSavingsInGreekCurrency("7"), "8");
}
