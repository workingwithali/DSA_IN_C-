#include <iostream>
#include <string>
using namespace std;

void reverse(string str){
	for(int i=str.length()-1; i>=0; --i){
		cout << str[i];
	}
	cout <<endl;
}
int main(){
	string str;
	cout << "Enter string:";
	cin >> str;
	cout << "reverse string is:";
	reverse(str);
	return 0;
	
}