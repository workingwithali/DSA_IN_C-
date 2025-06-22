#include<iostream>
#include<vector>
using namespace std;
vector<int> sum(vector<int>arr, int tar){
	vector<int> ans;
	int n= arr.size();
	int l =0;
	int r = n-1;
	while(l<r){
		if(arr[l]+arr[r]<tar){
			l++;
		}else if(arr[l]+arr[r]>tar){
			r--;
		}else{
			ans.push_back(arr[l]);
			ans.push_back(arr[r]);
			return ans;
		}
	}
	return ans;
}
int main(){
	vector<int>arr={1,2,3,4,5};
	int tar=5;
	vector<int>ans= sum(arr,tar);
	cout << '('<<ans[0]<<','<<ans[1]<<')'<<endl;
	
	return 0;
}