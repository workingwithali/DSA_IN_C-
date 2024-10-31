#include <iostream>
using namespace std;
char cal(int per){
	if (per >=90) return 'A';
	else if (per >=75) return 'B';
	else if (per >=65) return 'C';
	else if (per >=50) return 'D';
	else  return 'F';
}
int main(){
	string student;
	double marks[7], total=0;
	cout << "Enter you name";
	cin >> student;
	
	for (int i = 0; i < 7; i++){
		cout << "Enter subject " << i+1 << " number: ";
		cin >> marks[i];
		total += marks[i];
	} 
	double percentage = (total / 700) * 100;
    char grade = cal(percentage);
		
	cout << "Hello!" << student << ", You grade is " << grade << " with a percentage of " << percentage << "%";
	
	return 0;
}
 