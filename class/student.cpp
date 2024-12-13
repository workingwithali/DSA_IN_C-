#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int age;
    string department;
    double matricMarks;
    double interMarks;

public:
    void setDetails(string n, int a, string dept, double matric, double inter) {
        name = n;
        age = a;
        department = dept;
        matricMarks = matric;
        interMarks = inter;
    }

    void displayDetails() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Department: " << department << endl;
        cout << "Matric Marks: " << matricMarks << endl;
        cout << "Inter Marks: " << interMarks << endl;
    }
};
