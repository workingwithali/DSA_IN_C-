#include<iostream>
using namespace std;
int main(){
	int a[5] = {1,5,3,4,};
	for(int i=0; i<5; i++){
		if (a[0] < a[i]){
			a[0] =a[i];
		}
	}
	cout<<a[0];
	return 0;	
}