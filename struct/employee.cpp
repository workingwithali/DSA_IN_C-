#include <iostream>
using namespace std;

struct Employee {
    string name;
    int id;
    float salary;
};

int main() {
    Employee e;
    cout << "Enter name: ";
    getline(cin, e.name);
    cout << "Enter ID: ";
    cin >> e.id;
    cout << "Enter salary: ";
    cin >> e.salary;

    cout << "\nEmployee Information:\n";
    cout << "Name: " << e.name << "\nID: " << e.id << "\nSalary: " << e.salary << endl;
    return 0;
}