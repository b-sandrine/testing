#include<iostream>

using namespace std;
class Encapsulationkilled{
	private : int x;
	public : int *exposeX(){
		return &x;
	}
	int getX(){
		return x;
	}
		
};

int main(){
Encapsulationkilled killed;
	int *k=killed.exposeX();
	*k=10;
	cout<<"Value:"<<killed.getX()<<endl;
	
	//if you declare one variable pointer you can navigate the whole memory just like below
	
	int myArray[3] = {2,3,4};
	
	int *pointerArray;
	
	pointerArray = myArray;
	
	cout << "The avalue at index 0 is " << *pointerArray<<endl;
	
	return 0;
	

}
