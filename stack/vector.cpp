#include<iostream>
#include<vector>
using namespace std;
class stack{
	vector<int> v;
	public:
		void push(int val){
			v.push_back(val);
		}
		void pop(){
			v.pop_back();
		}
		int top(){
			return v[v.size()-1];
		}
	
};
int main(){
	stack s;
	s.push(10);
	s.push(30);
	s.push(20);
	
	return 0;
}