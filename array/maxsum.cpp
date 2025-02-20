#include<iostream>
using namespace std;
int main(){
	int n = 5;
	int arr[n] = {-4,-2,3,-5,6} ;
	int maxSum = INT_MIN;
	for (int i= 0;i<n;i++){
		int curSum = 0;
		for(int j = i;j<n;j++){
			curSum += arr[j];
			maxSum = max(curSum,maxSum);			
		}
	}
	cout << "max sum of sub array : "<<maxSum << endl;
}