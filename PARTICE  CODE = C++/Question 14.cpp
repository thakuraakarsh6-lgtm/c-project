// write a program to implement a BankACCOUNT class with the following feathers
#include <iostream>
using namespace std;

class BankAccount {
private:
    int accNo;
    string name;
    double balance;

public:
    void createAccount() {
        cout << "Enter Account Number: ";
        cin >> accNo;

        cout << "Enter Account Holder Name: ";
        cin >> name;

        cout << "Enter Initial Balance: ";
        cin >> balance;
    }

    void deposit() {
        double amount;
        cout << "Enter amount to deposit: ";
        cin >> amount;
        balance = balance + amount;
    }

    void withdraw() {
        double amount;
        cout << "Enter amount to withdraw: ";
        cin >> amount;

        if (amount > balance) {
            cout << "Insufficient Balance!" << endl;
        } else {
            balance = balance - amount;
        }
    }

    void display() {
        cout << "\nAccount Number: " << accNo << endl;
        cout << "Name: " << name << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount b;

    b.createAccount();
    b.deposit();
    b.withdraw();
    b.display();

    return 0;
}