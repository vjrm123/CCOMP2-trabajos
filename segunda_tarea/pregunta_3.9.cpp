
#include <iostream>
using namespace std;


class Account {

    private:
        string name;
        double balance{0};

    public:
    Account(string accountName, double initialBalance)
        : name{accountName} {
        
        if (initialBalance > 0) {
            balance = initialBalance;
        }
    }

    void deposito(double depositAmount) {
        if (depositAmount > 0) {
            balance += depositAmount;
        }
    }

    void withdraw(double withdrawalAmount) {
        if (withdrawalAmount > balance) {
            cout << "el monto es demasiado alto para poder retirar" << endl;
        } else {
            balance -= withdrawalAmount;
        }
    }

    void setName(string accountName) {
        name = accountName;
    }

    string getName() const {
        return name;
    }

    double getBalance() const {
        return balance;
    }

};



int main() {
    Account account1{"Juan Perez", 1000.0};
    Account account2{"Maria Garcia", -50.0};

    cout << "El saldo de " << account1.getName() << " es $" << account1.getBalance() << endl;
    cout << "El saldo de " << account2.getName() << " es $" << account2.getBalance() << endl;

    double depositAmount;

    cout << "ingrese el monto a depositar en la cuenta de " << account1.getName() << ": ";
    cin >> depositAmount;
    account1.deposito(depositAmount);

    cout << "El saldo de " << account1.getName() << " es " << account1.getBalance() << endl;

    double withdrawalAmount;

    cout << "ingrese el monto a retirar de la cuenta de " << account1.getName() << ": ";
    cin >> withdrawalAmount;
    account1.withdraw(withdrawalAmount);

    cout << "El saldo de " << account1.getName() << " es $" << account1.getBalance() << endl;

    cout << "intentando retirar $2000 de la cuenta de " << account2.getName() << endl;
    account2.withdraw(2000.0);

    cout << "El saldo de " << account2.getName() << " es $" << account2.getBalance() << endl;

    return 0;
}