#include <iostream>
using namespace std;
class person{
	private :
		string name;
		int age;
	public :
		//setter
		void setName(string n){
			name = n;
		}
		void setAge(int a){
			age = a;			
		}
		//getter
		string getName(){
			return name;
		}
		int getAga(){
			return age;
		}
};
int main(){
	person p;
	p.setName("Ali");
	p.setAge(25);
	cout << "name : " << p.getName()<<endl;
	cout << "age : " << p.getAga()<<endl;
	return 0;
}