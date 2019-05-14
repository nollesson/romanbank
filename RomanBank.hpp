#pragma once

#include <string>
#include <unordered_map>

class RomanBank
{
public:
    RomanBank();
    void createAccount(std::string accountId, std::string value);

    bool changeAccountValue(std::string accountId, std::string newValue);
    std::string getValueInAccount(std::string accountId);
    std::string getSavingsInGreekCurrency(std::string accountId);

private:
    std::unordered_map<std::string, std::string> _accounts;
};
