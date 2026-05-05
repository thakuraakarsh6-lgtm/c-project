// wap to prpgram to demonstrate inheritance using bank account and saving account

#include <iostream>
using namespace std;


class BankAccount {
protected:
    int accountNumber;
    string accountHolder;
    double balance;

public:
    void setAccountData(int accNum, string name, double bal) {
        accountNumber = accNum;
        accountHolder = name;
        balance = bal;
    }

    void displayAccountData() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Balance: $" << balance << endl;
    }
};


class SavingsAccount : public BankAccount {
private:
    double interestRate;

public:
    void setSavingsData(double rate) {
        interestRate = rate;
    }

    void displaySavingsData() {
        displayAccountData();  
        cout << "Interest Rate: " << interestRate << "%" << endl;
    }

    void addInterest() {
        balance += (balance * interestRate / 100);
        cout << "Balance after interest: $" << balance << endl;
    }
};

int main() {
    
    SavingsAccount sa;

    
    sa.setAccountData(1001, "Sahil Rana", 5000);

    
    sa.setSavingsData(5); // 5% interest

    
    sa.displaySavingsData();

    
    sa.addInterest();

    return 0;
}