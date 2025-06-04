#include<iostream>
#include<vector>
using namespace std;
class Node {
	public:
		int data;
		Node* left;
		Node* right;
		
		Node(int val){
			data = val;
			left = right = nullptr;
		}
		
};
int main(){
	int s = 4;
	int* ptr = &s;
	cout << *(ptr)<<endl;
	
	return 0;
	
}