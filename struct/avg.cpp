#include <iostream>
using namespace std;

struct StudentGrades {
    string name;
    int grades[5];
};

int main() {
    StudentGrades sg;
    cout << "Enter student name: ";
    cin.ignore();
    getline(cin, sg.name);

    cout << "Enter 5 grades: ";
    for (int i = 0; i < 5; i++) {
        cin >> sg.grades[i];
    }

    float average = 0;
    for (int i = 0; i < 5; i++) {
        average += sg.grades[i];
    }
    average /= 5;

    cout << "\nStudent Name: " << sg.name << "\nAverage Grade: " << average << endl;
    return 0;
}