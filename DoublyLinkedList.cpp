#include <iostream>

using namespace std;

struct Node{
	public:
		Node *previous;
		int data;
		Node *next;
	public:
		Node(int data){
			this -> previous = NULL;
			this -> data = data;
			this -> next = NULL;
		}
};

struct Doubly{
	public:
		Node *head;
	public:
		Doubly(){
			head = NULL;
			// later add tail logic
		}
		Node* addBeforeHead(int data){
			Node *newNode = new Node(data);
			if(head == NULL){
				head = newNode;
				return newNode;
			}
			head -> previous = newNode;
			newNode -> next = head;
			head = newNode;
			return newNode;
		}
		
		Node* addToEnd(int data){
			Node *newNode = new Node(data);
			if(head == NULL){
				head = newNode;
				return newNode;
			}
			Node *temp = head;
			while(temp -> next != NULL){
				temp = temp->next;
			}
			temp -> next = newNode;
			newNode -> previous = temp;
			return newNode;
		}
		
		void insertAfterNode(Node *node, int data){
			if(head == NULL){
				cout << "The List is empty";
				return;
			}
			Node *newNode = new Node(data);
			if(node -> next != NULL){
				Node *temp = node -> next;
				node -> next = newNode;
				newNode -> previous = node;
				newNode -> next = temp;
				temp -> previous = newNode;
			}
			else if(node -> next == NULL){
				node -> next = newNode;
				newNode -> previous = node;
			}
		}
		
		void insertBeforeNode(Node *node, int data){
			if(head == NULL){
				cout << "The List is empty";
				return;
			}
			
			Node *newNode = new Node(data);
			Node *temp = node -> previous;
			if(temp == NULL ){
				temp = newNode;
				newNode -> next = node; 
			}
			else if(temp != NULL){
				temp = newNode;
				newNode -> previous = temp;
				node = newNode -> next;
			}
		}
		
		void displayNodesFromFront(){
			if(head == NULL){
				cout << "List is empty";
				return;
			}
			Node *temp = head;
			while(temp != NULL){
				cout << temp -> data << "\t";
				temp = temp -> next;
			}
		
		}
		
		void displayFromEnd(){
			if(head == NULL){
				cout << "The List is empty";
				return;
			}
			
			Node *temp = head;
//			Node *lastNode;
			while(temp -> next != NULL){
				temp = temp->next;
			}
			// lastNode = temp;
			
			while(temp != NULL){
				cout << temp -> data << "\t";
				temp = temp->previous;
			}
			
		}
};

int main(){
	Doubly d;
	Node *node;
	Node *node1;
	Node *node2;
	node = d.addBeforeHead(1);
//	d.addBeforeHead(2);
//	d.addBeforeHead(3);
	node1 = d.addToEnd(4);
	node2 = d.addToEnd(5);
//	d.insertAfterNode(node, 6);
//	d.insertAfterNode(node1, 7);
//	d.insertAfterNode(node2, 8);
	d.insertBeforeNode(node, 100);
	d.insertBeforeNode(node1,200);
	d.insertBeforeNode(node2, 300);
	d.displayNodesFromFront();
	cout << endl;
//	d.displayFromEnd();
}
