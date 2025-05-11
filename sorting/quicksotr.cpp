#include<iostream>
#include<vector>
using namespace std;
int partition(vector<int>&arr,int st , int end){
	int Idx = st-1 , pivot = arr[end];
	for(int i=st ; i<end;i++){
		if(arr[i]<=pivot){
			Idx ++;
			swap(arr[i],arr[Idx]);
		}
	}
	Idx++;
	swap(arr[end],arr[Idx]);
	return Idx;
}

void quickSort(vector<int>&arr, int st , int end){
	if(st<end){
		int pivIdx = partition(arr,st ,end);
		quickSort(arr, st, pivIdx-1 );
		quickSort(arr,pivIdx+1,end);
	}
}
int main(){
	vector<int>arr = {2,3,6,7,9,1};
	int st =0;
	int end = arr.size()-1;
	quickSort(arr,st,end);
	for(int num:arr){
		cout<<num<<" ";
	}
	return 0;
}