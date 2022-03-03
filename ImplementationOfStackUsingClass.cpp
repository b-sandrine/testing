#include <iostream>
#define SIZE 5
using namespace std;

class Stack{
	private:
		int top;
		int stack[SIZE];
		public:
			Stack(){
			top = -1;
			}
public:
 	int isEmpty(){
		if(top == -1) return 1;
		return 0;
	}
	
	int isFull(){
		if(top == SIZE-1) return 1;
		return 0;
	}
	
	void push(int data){
		if(isFull()){
			return;
		}
		++top;
		stack[top] = data;
	}
	
	void pop(){
		if(isEmpty()){
			return;
		}
		top --;
	}
	
	int display(){
		if(isEmpty()) return 0;
		cout << "Stack values: ";
		for(int i = top; i>0; i--){
			cout << stack[i] << "\t";
		}
		cout << endl;
	}
};

int main(){
	Stack stk;
	stk.push(4);
	stk.push(5);
	stk.push(7);
	stk.push(8);
	stk.push(10);
	stk.display();
	stk.pop();
	stk.display();
}
