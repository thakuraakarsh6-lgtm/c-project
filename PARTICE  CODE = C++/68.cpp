// Write a C++ program to create a class BankAccount with account holder name, account number and balance. Implement functions for deposit, withdraw and display account details.
#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string accountHolderName;
    string accountNumber;
    double balance;

public:

    BankAccount(string name, string number, double initialBalance) {
        accountHolderName = name;
        accountNumber = number;
        balance = initialBalance;
    }

    
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } else if (amount > balance) {
            cout << "Insufficient balance!" << endl;
        } else {
            cout << "Invalid withdrawal amount!" << endl;
        }
    }

    
    void display() {
        cout << "\nAccount Holder Name: " << accountHolderName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: $" << balance << endl;
    }
};

int main() {
    
    BankAccount account("Sahil Rana", "1234567890", 5000);

    
    account.display();


    account.deposit(2000);


    account.withdraw(1500);

    
    account.display();

    return 0;
}