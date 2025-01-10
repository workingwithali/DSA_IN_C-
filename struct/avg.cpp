#include <iostream>
using namespace std;
struct StudentGrade{
	string name;
	int grade[5];
};
int main(){
	StudentGrade sg;
	cout <<"Enter a you name: ";
	cin >>sg.name;
	cout <<"Enter you five grade: ";
	for(int i = 0;i<5;i++){
		cin >>sg.grade[i];
	}
	float avg = 0;
	for(int i = 0;i < 5;i++){
		avg += sg.grade[i];
	}
	avg /=5;
	cout <<sg.name <<"average grade is : "<<avg;
	return 0;
}