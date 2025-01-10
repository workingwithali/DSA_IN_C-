#include <iostream>
using namespace std;

struct rectanger{
	int length;
	int weith;
};
int main(){
	rectanger r;
	cout<<"Enter length:";
	cin>> r.length;
	cout <<"Enter weith:";
	cin>>r.weith;
	float area = r.length * r.weith;
	float perimeter = 2 * (r.length + r.weith);
	cout << area <<" area of rectange"<<endl;
	cout <<perimeter<<" perimeter of reactange" << endl;
}