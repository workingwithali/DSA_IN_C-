#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    int id;
    string position;
    double salary;

public:
    void setDetails(string n, int i, string pos, double sal) {
        name = n;
        id = i;
        position = pos;
        salary = sal;
    }

    void displayDetails() {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Position: " << position << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Employee emp;
    emp.setDetails("John", 101, "Manager", 75000);
    emp.displayDetails();

    return 0;
}