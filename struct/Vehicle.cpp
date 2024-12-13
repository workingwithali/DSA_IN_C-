#include <iostream>
using namespace std;

struct Vehicle {
    string brand;
    string model;
    int year;
};

int main() {
    Vehicle v;
    cout << "Enter brand: ";
    getline(cin, v.brand);
    cout << "Enter model: ";
    getline(cin, v.model);
    cout << "Enter year: ";
    cin >> v.year;

    cout << "\nVehicle Information:\n";
    cout << "Brand: " << v.brand << "\nModel: " << v.model << "\nYear: " << v.year << endl;
    return 0;
}