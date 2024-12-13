#include <iostream>
using namespace std;

struct Item {
    string name;
    int quantity;
    float price;
};

int main() {
    int n;
    cout << "Enter number of items: ";
    cin >> n;

    Item items[n];
    float totalCost = 0;

    for (int i = 0; i < n; i++) {
        cout << "\nEnter name of item " << i + 1 << ": ";
        cin.ignore();
        getline(cin, items[i].name);
        cout << "Enter quantity: ";
        cin >> items[i].quantity;
        cout << "Enter price: ";
        cin >> items[i].price;
        totalCost += items[i].quantity * items[i].price;
    }

    cout << "\nTotal cost: " << totalCost << endl;
    return 0;
}