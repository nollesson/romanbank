#pragma once

#include "RomanBank.hpp"
#include "RomanCalculator.hpp"

#include <string>
#include <vector>

class RomanBankApp
{
public:
    RomanBankApp(RomanBank * romanBank);


    bool changeAccountValue(std::string accountId, std::string newValue);
    std::string getTotalSavings();
    std::string getSavingsInGreekCurrency(std::string accountId);

private:
    RomanBank * _bank;
    RomanCalculator _calculator;
    std::vector<std::string> _accountIds;
};
