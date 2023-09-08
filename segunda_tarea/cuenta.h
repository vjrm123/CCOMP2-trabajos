#ifndef CUENTA_H
#define CUENTA_H
#include <string>

class Account {
public:
    Account(std::string accountName, double initialBalance)
        : name{accountName} {

        if (initialBalance > 0) {
            balance = initialBalance;
        }
    }

    void deposit(double depositAmount) {
        if (depositAmount > 0) {
            balance += depositAmount;
        }
    }

    void setName(std::string accountName) {
        name = accountName;
    }

    std::string getName() const {
        return name;
    }

private:
    std::string name; 
    double balance{0}; 
};

#endif