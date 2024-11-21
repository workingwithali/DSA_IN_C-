#include<iostream>
using namespace std;
void reverse(int array[],int s){
	int l =0;
	int r =s-1;
	while(l<r){
		int temp = array[l];
		array[l] = array[r];
		array[r]=temp;
		l++;
		r--;
	}
	for (int i=0; i<5;i++){
	cout<<array[i]<<'\t';
		
	}
	
}
//////////////////////////////////////////////
int main(){
	int a[5]={1,2,3,4,5};
	int s =5;
	reverse(a,s);
	
	
	return 0;	
}