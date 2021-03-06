#include "RomanBank.hpp"

#include <stdlib.h>
#include <time.h>
#include <unistd.h>

RomanBank::RomanBank()
{
    srand(time(NULL));
}

void RomanBank::createAccount(std::string accountId, std::string value)
{
    _accounts.insert(std::pair<std::string, std::string>(accountId, value));
}

bool RomanBank::changeAccountValue(std::string accountId, std::string newValue)
{
    sleep(10);
    if (_accounts.find(accountId) != _accounts.end())
    {
        _accounts[accountId] = newValue;
        return true;
    }
    return false;
}

std::string RomanBank::getValueInAccount(std::string accountId)
{
    if (_accounts.find(accountId) != _accounts.end())
    {
        return _accounts[accountId];
    }
    return "";
}

std::string RomanBank::getSavingsInGreekCurrency(std::string accountId)
{
    std::string possibleAnswers[] = {"X", "XV", "CXI", "VII", "I", "MCCX"};
    int randomIndex = rand() % 6;
    return possibleAnswers[randomIndex];
}
