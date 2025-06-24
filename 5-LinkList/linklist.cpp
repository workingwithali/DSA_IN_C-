#include<iostream>
using namespace std;

class Node {
public:
	int data;
	Node* next;
	Node(int val) {
		data = val;
		next = NULL;
	}
};

class list {
	Node* head;
	Node* tail;
public:
	list() {
		head = NULL;
		tail = NULL;
	}

	void push_front(int val) {
		Node* newNode = new Node(val);
		if (head == NULL) {
			head = tail = newNode;
		}
		else {
			newNode->next = head;
			head = newNode;
		}
	}

	void push_back(int val) {
		Node* newNode = new Node(val);
		if (tail == NULL) {
			tail = head = newNode;
		}
		else {
			tail->next = newNode;
			tail = newNode;
		}
	}
	void pop_font(){
		if(head==NULL){
			return;
		}
		Node* temp = head;
		head = head->next;
		delete temp;
	}
	void pop_back() {
    if (head == NULL) return;  

    if (head == tail) {  
        delete head;
        head = tail = NULL;
        return;
    }

    Node* temp = head;
    while (temp->next != tail) {
        temp = temp->next;
    }
    delete tail;
    tail = temp;
    tail->next = NULL;
}


	void print() {
		Node* temp = head;
		while (temp != NULL) {
			cout << temp->data << "->";
			temp = temp->next;
		}
		cout << "NULL" << endl;
	}
	void insert(int val, int pos){
		if (pos<0){
			cout <<"invalid pos";
			return;
		}
		if(pos == 0){
			push_front(val);
		}
		Node* newNode = new Node(val);
		Node* temp = head;
		for(int i = 0;i<=pos-1;i++){
			temp = temp->next;
		}
		newNode->next = temp->next;
		temp->next = newNode;
	}
};

int main() {
	list ll;
	ll.push_front(3);
	ll.push_front(2);
	ll.push_front(1);
	ll.push_back(4);
	ll.print();
	ll.insert(6,3);
	ll.print();

	return 0;
}
