#include<iostream>
#include<vector>
#include<queue>
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

// Global index for preorder traversal
int idx = -1;

// Use reference to vector<int>
Node* buildTree(const vector<int>& preorder) {
    idx++;
    if (idx >= preorder.size() || preorder[idx] == -1) {
        return nullptr;
    }

    Node* root = new Node(preorder[idx]);
    root->left = buildTree(preorder);
    root->right = buildTree(preorder);
    return root;
}

// Helper function to print inorder traversal
void inorder(Node* root) {
    if (root == nullptr) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
void levelorder(Node* root){
	queue<Node*> q ;
	q.push(root);
	while(!q.empty()){
		Node* curr = q.front();
		q.pop();
		cout<< curr->data;
		if(root->left !=NULL){
			q.push(curr->left);
		}
		if(root->right !=NULL){
			q.push(curr->right);
		}
	}
	
	
}

int main(){
    vector<int> preorder = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    
    Node* root = buildTree(preorder);

    cout << "Inorder Traversal: ";
    inorder(root);
    cout<<"levelorder traversal: ";
    levelorder(root);
    cout << endl;

    return 0;
}
