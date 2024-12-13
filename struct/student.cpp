#include <iostream>
using namespace std;

struct Student {
    string name;
    int rollNo;
    float marks;
};

int main() {
    Student s;
    cout << "Enter name: ";
    getline(cin, s.name);
    cout << "Enter roll number: ";
    cin >> s.rollNo;
    cout << "Enter marks: ";
    cin >> s.marks;

    cout << "\nStudent Information:\n";
    cout << "Name: " << s.name << "\nRoll No: " << s.rollNo << "\nMarks: " << s.marks << endl;
    return 0;
}
