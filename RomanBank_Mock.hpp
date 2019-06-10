#include "gmock/gmock.h"

#include "RomanBank.hpp"

#include <string>

class MockRomanBank : public RomanBank {
public:
    MOCK_METHOD2(createAccount, void(std::string, std::string));
    MOCK_METHOD2(changeAccountValue, bool(std::string, std::string));
    MOCK_METHOD1(getValueInAccount, std::string(std::string));
    MOCK_METHOD1(getSavingsInGreekCurrency, std::string(std::string));
};