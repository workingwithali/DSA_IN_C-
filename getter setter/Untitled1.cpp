#include<iostream>
#include<string>
using namespace std;
class Employee{
	private:
		string name ,desig;
		int id, salary;
	public:
		Empolyee(int i,string n,int s,string d){
			name = n;
			id = i;
			salary = s;
			desig = d;			
		}
		void Setdate(){
			cout << "set data";
		}
		void displayDate(){
			cout << "display data"
		}


		
};
class Facilty:public Employee{
	private:
		int allowance;
	
	
	public:
		Facilty(int i,string n,int s,string d,int a):Empolyee(i,n,s,d){
			allowance = a;			
		}
	
		
		
};
class Staff:public Employee{
	private:
		string task;
		
		
	public:
		Staff(int i,string n,int s,string d,string t):Employee(i,n,s,d){
			task = t;			
		}
		
};