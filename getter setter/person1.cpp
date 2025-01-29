#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string name, gender;
    int age;

public:
    // Constructor
    Person(string n, int a, string g) {
        name = n;
        age = a;
        gender = g;
    }

    // Getters
    string getName() const { return name; }
    int getAge() const { return age; }
    string getGender() const { return gender; }

    // Setters
    void setName(string n) { name = n; }
    void setAge(int a) { age = a; }
    void setGender(string g) { gender = g; }

    // Methods
    void EatFood() { cout << name << " is eating." << endl; }
    void Walk() { cout << name << " is walking." << endl; }
};

class Student : public Person {
private:
    string program;
    int year;

public:
    // Constructor
    Student(string n, int a, string g, string p, int y) : Person(n, a, g) {
        program = p;
        year = y;
    }

    // Getters
    string getProgram() const { return program; }
    int getYear() const { return year; }

    // Setters
    void setProgram(string p) { program = p; }
    void setYear(int y) { year = y; }

    // Methods
    void Study() {
        cout << getName() << " is studying in the " << program
             << " program, year " << year << "." << endl;
    }
    void HeldExam() {
        cout << getName() << " is giving an exam." << endl;
    }
};

class Teacher : public Person {
private:
    string designation;
    int salary;

public:
    // Constructor
    Teacher(string n, int a, string g, string d, int s) : Person(n, a, g) {
        designation = d;
        salary = s;
    }

    // Getters
    string getDesignation() const { return designation; }
    int getSalary() const { return salary; }

    // Setters
    void setDesignation(string d) { designation = d; }
    void setSalary(int s) { salary = s; }

    // Methods
    void TakeClasses() {
        cout << getName() << " is taking classes as a " << designation << "." << endl;
    }
    void TakeExam() {
        cout << getName() << " is conducting an exam." << endl;
    }
};

class Doctor : public Person {
private:
    string designation;
    int salary;

public:
    // Constructor
    Doctor(string n, int a, string g, string d, int s) : Person(n, a, g) {
        designation = d;
        salary = s;
    }

    // Getters
    string getDesignation() const { return designation; }
    int getSalary() const { return salary; }

    // Setters
    void setDesignation(string d) { designation = d; }
    void setSalary(int s) { salary = s; }

    // Methods
    void CheckUp() {
        cout << getName() << " is performing a check-up." << endl;
    }
    void Prescribe() {
        cout << getName() << " is prescribing medication." << endl;
    }
};

int main() {
    // Create objects for each derived class
    Student student("Ali", 20, "Male", "Computer Science", 2);
    Doctor doctor("Dr. Ahmed", 45, "Male", "Cardiologist", 200000);
    Teacher teacher("Ms. Sarah", 30, "Female", "Professor", 150000);

    // Demonstrate functionality
    student.EatFood();
    student.Walk();
    student.Study();
    student.HeldExam();

    doctor.EatFood();
    doctor.Walk();
    doctor.CheckUp();
    doctor.Prescribe();

    teacher.EatFood();
    teacher.Walk();
    teacher.TakeClasses();
    teacher.TakeExam();

    return 0;
}
