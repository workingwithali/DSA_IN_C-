#include <iostream>
using namespace std;

int factorial(int n){
	if (n == 1){
		return 1;
	}
	return n * factorial(n-1);
}
 
int main(){
	int f = factorial(5);
	cout << f<<endl;	
	return 0;
}