#include <iostream>
using namespace std;
double add(double a, double b){
	return a+b;
}
double minus(double a, double b){
	return a-b;
}
double multiply(double a, double b){
	return a*b;
}
double divide(double a, double b){
	if (b != 0){
		return a / b;
	}else{
		cout <<"Error: Division By Zero";
		return 0;
	}
}
int main(){
	double num1 ,num2;
	cout <<"Enter two Number:";
	cin >> num1 >> num2 ;
	cout <<"Addition "<<add(num1,num2)<<endl;
	cout <<"minus "<<minus(num1,num2)<<endl;
	cout <<"Multiplication "<<multiply(num1,num2)<<endl;
	cout <<"Division "<<divide(num1,num2)<<endl;
	return 0;
}