// the basic way to implement a queue is using an array: in class, in file, in struct.
//The best way of implementing them is using a linked list.

#include <iostream>
using namespace std;

struct Queue{
	// front is the first element in our queue and rear is the kast element in out queue. It uses FIFO(First In First Out
	// you must read more about queue operations. 
	int front, rear, capacity;
	int* queue;
	// constructor
	Queue(int size){
		front = 0; // in this program the front will always be 0
		rear = 0; // we always store at rear position
		capacity = size; // size is just a parameter valuable. In java we use we use this keyword
		//initializing an array/pointer object
		queue = new int;
	}
	
	// it is better to define a distructor after the program closes. It cleans the memory really quickly.
	//notation of a destructor is like the following.
	~Queue(){
		delete queue; // note any time u think of array / a pointer u need to think of memory
	}
	
	void enqueue(int data){
		if(rear == capacity) {
			cout << "The queue is full";
			return;
		}
		queue[rear] = data;
		rear ++;
	}
	
	// this method can return the value deleted or return void
	int dequeue(){
		int deletedElement = queue[front];
		if(rear == front){
			cout << "Queue is empty" << endl;
			return 0;
		}
		// dequeque deletes the first element 
		//we delete by shifting, we do left shifting and we remove from front
		for(int i = 0; i< rear-1; i ++){
			queue[i] = queue[i+1];
		}
		rear --;
		return deletedElement;
	}
	
	// just like peek in stack
	int readFront(){
		// READING FIRST ELEMENT OF THE QUEUE
		if(rear == front){
			cout << "Empty queue" << endl;
			return 0;
		}
		// always returning all elements in this function
		return queue[front];
// this when called it will return one element
//		int valFront = queue[front];
//		front ++;
//		return valFront;
	}
	
	void display(){
		if(rear == front){
			cout << "Queue is empty";
			return;
		}
		// we display starting from front to end
		 
		for(int i = front; i<rear;i++){
		 	cout << queue[i] << "\t";	
		}
		cout << endl;
	}
};

int main(){
	Queue q = Queue(10);
	q.enqueue(2);
	q.enqueue(5);
	q.enqueue(7);
	q.display();
	cout << "The deleted element is: " << q.dequeue() << endl;
	cout << endl << "The front element is: " << q.readFront() << endl;
	q.display();
}
