#include<iostream>
using namespace std;
int main(){
	int s = 5;
	int a[s] = {1,5,3,4,35};
	int count = 0;
	
	for(int i=0; i<s; i++){
		if (a[i] < 33){
			cout <<a[i]<<endl;
			count ++;
			
		}
	};
	cout<<"total less then 33 ="<<count;
	
	return 0;	
}