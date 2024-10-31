#include <iostream>
using namespace std;
void table(int num, int limit){
	for(int i=1; i<=limit; i++){
		cout <<num<<" X "<<i<<" = " <<num*i<<endl;
	}
}
int main(){
	int num, limit;
	cout <<"Enter a number:";
	cin >> num;
	cout <<"Enter limit:";
	cin >> limit;
	table(num,limit);
	return 0;
	
}