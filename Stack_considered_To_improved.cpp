#include <iostream>

using namespace std;


const int size = 7; // the size of a stuck can not be changed.

int top = -1;

int stack[size];

// checking whether tthe stuck is full or not

int isFull(){
	if(top == size-1) 
		return 1;
	return 0;
}

int isEmpty(){
	if(top == -1)
		return 1;
	return 0;
}

// we are going to check push operation of a stuck. Push also means adding to stack but we must say push. 
// 

void push(int data){
	if(!isFull()){
		top ++;
		stack[top] = data;
	}
	else{
		//couting an error
		cout << "Stack over flow" << endl;
	}
}

//popping of deleting an element. The function does not return anything

void pop(){
	if(!isEmpty()){
//		we pop by decreasing top 

		top --;
	}
	else{
		cout << endl << "stack under flow";
	}
}

// peeking in stack, theis function returns an int, the top stuck

int peek(){
	if(!isEmpty())
		return stack[top];
	return INT_MAX; // returning this bcz it can't be found in a stack but -1 and 0 may be can be found in a stack
}

// we display starting from the last in, meaning from top index
void display(){
	if(!isEmpty()){
		for(int i = top; i >= 0; i--){
			cout << stack[i] << "\t";
		}
		cout << endl;
	}
}

int main(){
	cout << "----------------- All operations applied to stack -------------------";
	
	int choice;
	do{
	
	cout << " \n 1. Push\n 2. Pop\n 3. Peek\n 0. Exit";
	cout << "\nEnter your choice: ";
	cin >> choice;	
	

		switch(choice){
		case 1:
			int data;
			cout << "\nEnter the data to push int a stack: ";
			cin >> data;
			push(data);
			display();
		break;
		case 2:
			pop();
			display();
		break;
		case 3:
			cout << "The peek element is: " << peek();
		break;
		case 0:
			cout << "Exiting ..........";
		break;
		default:
			cout << "Invalid choice";
		break;
	}

}while(choice != 0);

return 0;
}
