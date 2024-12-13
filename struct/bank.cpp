#include <iostream>
using namespace std;

struct BankAccount {
    string accountHolder;
    int accountNumber;
    float balance;
};

int main() {
    BankAccount ba;
    cout << "Enter account holder name: ";
    cin.ignore();
    getline(cin, ba.accountHolder);
    cout << "Enter account number: ";
    cin >> ba.accountNumber;
    cout << "Enter balance: ";
    cin >> ba.balance;

    cout << "\nBank Account Information:\n";
    cout << "Account Holder: " << ba.accountHolder << "\nAccount Number: " << ba.accountNumber << "\nBalance: " << ba.balance << endl;
    return 0;
}