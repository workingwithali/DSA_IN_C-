#include <iostream>
using namespace std;
class student{
	private:
		int rollNo;
	public:
		// setter
		void setRollNo(int n){
			if(n>0){
				rollNo = n;
			}
			else
			{
				cout << "not vaild rollNo"<<endl;
			}
					
		}
		int getRollNo(){
			return rollNo;
		}
		
};
int main(){
	student s;
	student a;
	s.setRollNo(4);
	cout <<"you rollno : "<< s.getRollNo()<<endl;
	a.setRollNo(-5);
	cout <<"you rollno : "<<a.getRollNo()<<endl;
	return 0;
}