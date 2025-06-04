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
static int idx =-1
Node *buildTree(int preorder){
	idx++;
	if(preorder[idx]==-1){
		return nullptr;
	}
	
}
int main(){
	int s = 4;
	int* ptr = &s;

	cout << *(ptr)<<endl;
	
	return 0;
	
}