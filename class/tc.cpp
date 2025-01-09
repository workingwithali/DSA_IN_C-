#include <iostream>
using namespace std;
class employee{
	private:
		int id , salary;
		string name , design ;
	public:
		void setdata(){
			cout<<"setdata ";
		}
		void displaydata(){
			cout<<"displaydata";
			cout<<"enter id:\n"<<"salary:\n"<<"name:\n"<<"design:\n";
			cin>>id>>salary>>name>>design;
			
		}
		
	
};
class faculty:employee{
	private:
		
		int allowce;
		cout<<"enter allowence\n";
		cin>>allowce;
	public:
		
	
};
class staff:employee{
	private:
		string task;
	
};


int main()
{
	
	employee tc;
	tc.displaydata();
	tc.setdata();
	return 0;	
}