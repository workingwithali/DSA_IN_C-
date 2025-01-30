#include <iostream>
using namespace std;

void printNum(int nums){
	if (nums == 1){
		cout << "1 \n" ;
		return ;
	}
	
	cout << nums<<' ';
	printNum(nums-1);
}


int main (){
	printNum(1000);
	return 0 ;
}