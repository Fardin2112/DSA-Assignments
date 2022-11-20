#include <iostream>
using namespace std;

struct Node{
	int data;
	Node *next;
};
 
Node* createNewNode(int val){
	Node *temp = new Node;
	temp->data = val;
	return temp;
}

//complete the functions
class Stack{
	Node *head;
	Node *tail;
	int s;
	
	public:
	//constructor is called whenever an object of the class is declared
	Stack(){
		cout<<"constructor is Called\n";
		tail=NULL;
		s=0; 
	}
	
	//push the value at the back
	void push(int val){
		cout<<"pushing the val: "<<val<<" at the back of queue\n";
       struct Node *temp=new *Node;
       temp->data=val;
        if(head==NULL){
            head=temp;
            s++;
            return;
        }else{
            temp->next=head;
            head=temp;
            s++;
           
        }

	}
	
	int top(){
		cout<<"returning the value at top or last:\n";
		return head->data;
	}
	
	// void pop(){
	// 	cout<<"removing the last element:\n";
    //     head=head->next;
	// }
	
	// int size(){
	// 	cout<<"return the size of the queue:\n";
	// 	return s;
	// }
	
	// bool isEmpty(){
	// 	cout<<"returning if the stack is empty:\n";
	// 	return true;
	// }
};

int main() {
	Stack s; //constructor is called on this line
	s.push(4);
	cout<<"top: "<<s.top()<<"\n";
	// s.pop();
	// cout<<"size: "<<s.size()<<"\n";
	// cout<<"empty: "<<s.isEmpty()<<"\n";
	
	// s.push(5);
	// s.push(3);
	// cout<<"front: "<<s.top()<<"\n";
	// s.pop();
	// cout<<"size: "<<s.size()<<"\n";
	// cout<<"empty: "<<s.isEmpty()<<"\n";
	
	// cout<<"top: "<<s.top()<<"\n";
	// s.pop();
	// cout<<"size: "<<s.size()<<"\n";
	// cout<<"empty: "<<s.isEmpty()<<"\n";
	return 0;
}
