#include "RomanBankApp.hpp"

RomanBankApp::RomanBankApp(RomanBank * romanBank) : _bank(romanBank) {}

bool RomanBankApp::changeAccountValue(std::string accountId, std::string newValue)
{
    bool result = _bank->changeAccountValue(accountId, newValue);
    return result;
}

std::string RomanBankApp::getTotalSavings()
{
    std::string sum = "";
    for (auto accountId : _accountIds)
    {
        std::string accountValue = _bank->getValueInAccount(accountId);
        sum = _calculator.add(sum, accountValue);
    }
    return sum;
}

std::string RomanBankApp::getSavingsInGreekCurrency(std::string accountId)
{
    return _bank->getSavingsInGreekCurrency(accountId);
}
