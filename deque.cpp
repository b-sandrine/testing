// we are going to do a generalized queue known as deque also known as a double ended queue. You can add an element at rear or at front

#include <iostream>
#define MAX 100
using namespace std;
class Deque {
	public: 
		int rear;
		int front;
		int size;
		int deque[MAX];	
	public:
		Deque(int size) {
			this->rear =0;
			this->front =-1;
			this->size =size;
		}
		 
		bool isEmpty() {
	        if(front == -1) 
				return true;
	        return false;	
		}
		bool isFull() {
			if(front == 0 && rear == size-1 || front == rear+1) 
				return true;
			return false;
		}
		
		void addToFront(int data) {
			if(isFull()) {
				cout<<"Queue overflow"<<endl;
				return;
			}
			if(front == -1) {
				front = 0;
				rear = 0;
			}
			else if(front == 0) {
				front = size-1;
			}
			else {
				front--;
			}	
			deque[front] =data;
//			cout << "The element at " << front << " is " << deque[front] << endl;
		}
		void addToRear(int data) {
			if(isFull()) {
				cout<<"Queue overflow";
				return;
			}
			if(isEmpty()) {
				front =0;
				rear =0;
			}
			else if(rear == size-1) {
				rear =0;
			}
			else {
				rear++;
			}
			deque[rear] =data;
//			cout << "The element at " << rear << " is " << deque[rear] << endl;
		}
		void deleteFromFront() {
			if(isEmpty()) {
				cout<<"Queue underflow"<<endl;
				return;
			}
			if(front == rear) {
				front = -1;
				rear = -1;
			}
			else if(front == size-1) {
				front =0;
			}
			else {
				front++;
			}
				
		}
		void deleteFromRear () {
			if(isEmpty()) {
				cout<<"Queue underflow";
				return;
			}
			if(front == rear){
				front = rear = -1;
			}
			else if(rear == 0){
				rear = size-1;
			}
			else{
				rear --;
			}
		}
		void display(){
			if(isEmpty()){
				cout << "Queue underflow" << endl;
				return;
			}
			if(front < rear){
				for(int i = front; i <= rear; i++){
					cout << deque[i] << "\t";
				}
				cout << endl;
			}
			
			else if(front > rear){
				for(int i = front; i < size; i++){
//					cout << "This is i " << i << "  ";
					cout << deque[i] << "\t";
			    }
				for(int k = 0; k <= rear ; k++){
//					cout << "This is k " << k << "  ";
					cout << deque[k] << "\t";
				}
				cout << endl;
			}	
		}
		
};

int main() {
	Deque d(7);
	d.addToFront(5);
	d.addToFront(8);
	d.addToFront(10);
	d.addToFront(20);
	d.addToRear(50);
	d.addToRear(25);
	d.addToRear(35);
	d.display();
	d.deleteFromFront();
	d.display();
	d.deleteFromRear();
	d.display();
	return 0;
}
