#include <iostream>
#include <string>
using namespace std;
class Person{
	protected:
		string name , gender;
		int age;
	public:
		Person(string n , int a, string g){
			name = n;
			gender = g;
			age = a;
		}
		void EatFood(){
			cout<<name<<" is eating"<<endl;
		}
		void Walk(){
			cout<<name<<" is walking"<<endl;
		}
};
class Student:public Person{
	private:
		string program;
		int year;
	public:
		Student(string n , int a, string g ,string p,int y):Person(n,a,g){
			program = p;
			year = y;
		}
		void Study(){
			cout << name << " is studying in the " << program
             << " program, year " << year << "." << endl;
		}
		void HeldExam(){
			cout << name << " is giving an exam." << endl;
    
		}
		
};
class Teacher:public Person{
	private:
		string designation;
		int salary;
	public:
		Teacher(string n , int a, string g ,string d,int s):Person(n,a,g){
			designation = d;
			salary = s;
		}
		void TakeClasses(){
			cout << name << " is taking classes as a " << designation << "." << endl;
		}
		void TakeExam(){
			cout << name << " is conducting an exam." << endl;
		}
};
class Doctor:public Person{
	private:
		string designation;
		int salary;
	public:
		Doctor(string n , int a, string g ,string d,int s):Person(n,a,g){
			designation = d;
			salary = s;
		}
		void CheckUp(){
			cout<<name<<" is performing a check-up."<<endl;
		}
		void Prescribe(){
			cout<<name<<" is prescribing medication."<<endl;
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