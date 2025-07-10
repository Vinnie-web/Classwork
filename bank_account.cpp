/*
    Name: Vincent Muriithi
    Description: Program to manage bank accounts using inheritance in C++
    BSE-05-0159/2024
*/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// Base class
class AccountHolder {
protected:
    string name;

public:
    void setName(const string& n) {
        name = n;
    }

    string getName() const {
        return name;
    }
};

// Derived class
class BankAccount : public AccountHolder {
private:
    int accountNumber;
    double balance;

public:
    BankAccount(const string& n, int accNum, double bal) {
        name = n;
        accountNumber = accNum;
        balance = bal;
    }

    int getAccountNumber() const {
        return accountNumber;
    }

    double getBalance() const {
        return balance;
    }
};

// Second derived class
class SavingsAccount : public BankAccount {
private:
    double interestRate;

public:
    SavingsAccount(const string& n, int accNum, double bal, double rate)
        : BankAccount(n, accNum, bal) {
        interestRate = rate;
    }

    double getInterestRate() const {
        return interestRate;
    }
};

// Main program
int main() {
    SavingsAccount account("John Doe", 123456, 10000.00, 3.5);

    cout << fixed << setprecision(2);
    cout << "===================================" << endl;
    cout << "      Bank Account Details" << endl;
    cout << "===================================" << endl;
    cout << "Account Holder:  " << account.getName() << endl;
    cout << "Account Number:  " << account.getAccountNumber() << endl;
    cout << "Balance:         $" << account.getBalance() << endl;
    cout << "Interest Rate:   " << account.getInterestRate() << "%" << endl;

    cout << "\nUpdating account holder name..." << endl;
    account.setName("Jane Doe");
    cout << "Updated Name:    " << account.getName() << endl;

    return 0;
}
