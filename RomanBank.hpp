#pragma once

#include <string>
#include <unordered_map>

// Stores information for accounts in a bank with roman money.
class RomanBank
{
public:
    RomanBank();

    // Creates an account named accountId containing value money
    virtual void createAccount(std::string accountId, std::string value);

    // Updated value in account given by accountId to newValue. Return true if success, else false.
    virtual bool changeAccountValue(std::string accountId, std::string newValue);

    // Return value in account specified by accountId
    virtual std::string getValueInAccount(std::string accountId);

    // Return value in accountId in greek currency. Depends on current currency rates.
    virtual std::string getSavingsInGreekCurrency(std::string accountId);

private:
    std::unordered_map<std::string, std::string> _accounts;
};
