#include <iostream>

using namespace std;

struct Node{
	public:
		int data;
		Node * next;
	public:
		Node(int data){
			this->data = data;
			this->next = NULL;
		}
};

struct Queue{
	public:
		Node *front;
		Node *rear;
	public:
		Queue(){
			front = rear = NULL;
		}
    
	void enqueue(int data){
		Node *temp = new Node(data);
		// we always insert at rear but if our list is empty, it is a special case to treat like we are going to do below
		if(front == NULL){
			front = rear = temp;
			return;
		}
//		else if not empty
		rear->next = temp;
		rear = temp;
	}
	
	void display(){
		if(front == NULL){
			// we use queue underflow when we are deleting
			cout << "Queue is empty"<<endl;
		}	
		Node *current = front;
		while(current != NULL){
			cout << current -> data << "\t";
			current = current -> next;
		}
		cout << endl;
	}
	
	//dequeue is deleting element at front and isEmpty or isFull methods are not neccessary 
	
	void dequeue(){
			if(front == NULL){
				cout << "Queue under flow";
				return;
			}
			// we first need to keep the front
			Node * temp = front;
			front = front -> next;
			cout << endl << "This is rear data at this point: " << rear     -> data << endl;
			// if the front was the last node. It is a special case we need to treat differently. Rear will be pointing to front
//			if(front == NULL){
				// we are makeing rear not to point to a deleted address but point to null
//				rear = NULL;
//			}
			//then we will delete;
			delete temp;
			return;
	}
};

int main(){
	Queue q = Queue();
	q.enqueue(2);
	q.enqueue(5);
	q.display();
	q.dequeue();
	q.display();
	q.dequeue();
	q.display();
}
