#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main(){
	vector<int> price ={200,100,80,60,70,80,30,20,100};
	int n = price.size();
	
	vector<int> ans(n,0);
	stack<int> s;
	for(int i=0;i<n;i++){
		while(s.size()>0&&price[s.top()]<=price[i]){
			s.pop();
		}
		if(s.size()==0)
	}
	
	return 0;
}