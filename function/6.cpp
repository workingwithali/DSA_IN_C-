#include <iostream>
using namespace std;
///////////////////////////////
void sort(int array[],int s){
	for(int i=0; i<s-1; i++){
		for(int j=0; j<s-1;j++){
			if (array[j]<array[j+1])
			{
				int temp = array[j];
				array[j] = array[j+1];
				array[j+1]=temp;
//				array[j],array[j+1]=array[j+1],array[j];
				
			}
		}
	}
	

		
}
//////////////////////////////////////////

int main(){
	int s = 5;
	int array[s];
	
	for (int i=0;i<s;i++){
		cin>>array[i];
	};
	sort(array,s);
	
	for(int i=0;i<s;i++){
		cout<<array[i];
	};
	
	return 0;
	
}