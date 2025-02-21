#include<iostream>
#include<vector>
using namespace std;
vector<int> sum(vector<int>arr, int tar){
	vector<int>ans;
	int n= arr.size();
	for(int i= 0; i<n;i++){
		for(int j=i+1;j<n;j++){
			if (arr[i]+arr[j]==tar){
				ans.push_back(arr[i]);
				ans.push_back(arr[j]);
				return ans;
			}
		}
	}
	return ans ;
}
int main(){
	vector<int> arr = {1,2,3,4,5};
	int target = 9;
	vector<int> ans = sum(arr,target) ;
	cout<<'('<<ans[0]<<','<<ans[1]<<')'<<endl;
	return 0;
}