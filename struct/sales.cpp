#include <iostream>
using namespace std;

struct Sales {
    string product;
    int quantity;
    float price;
};

int main() {
    int n;
    cout << "Enter number of products: ";
    cin >> n;

    Sales sales[n];
    float totalSales = 0;

    for (int i = 0; i < n; i++) {
        cout << "\nEnter product name: ";
        cin.ignore();
        getline(cin, sales[i].product);
        cout << "Enter quantity sold: ";
        cin >> sales[i].quantity;
        cout << "Enter price per unit: ";
        cin >> sales[i].price;
        totalSales += sales[i].quantity * sales[i].price;
    }

    cout << "\nTotal Sales: " << totalSales << endl;
    return 0;
}
