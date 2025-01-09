#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    double totalBalance;

public:
    BankAccount(int accNo, double balance) : accountNumber(accNo), totalBalance(balance) {}

    void deposit(double amount) {
        totalBalance += amount;
        cout << "Deposited: " << amount << ", New Balance: " << totalBalance << endl;
    }

    void withdraw(double amount) {
        if (amount <= totalBalance) {
            totalBalance -= amount;
            cout << "Withdrawn: " << amount << ", Remaining Balance: " << totalBalance << endl;
        } else {
            cout << "Insufficient funds!" << endl;
        }
    }

    void displayBalance() {
        cout << "Total Balance: " << totalBalance << endl;
    }
};

int main() {
    BankAccount account(12345, 5000);

    account.deposit(2000);
    account.withdraw(1500);
    account.displayBalance();

    return 0;
}