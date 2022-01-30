#include <iostream>

using namespace std;

int checkArray(int array[], int size){
	
	if(size<3 || size%2 == 0){
		cout << "No middle element";
		return 0;
		exit(0);
	}
	
	
	int i=(size/2) + 1; //The middle index of the array
	
	int middle = array[i-1];
	
	for(int i = 0; i <size; i++ ){
		if(array[i]<middle){
			int min = array[i];
			cout << "The middle element is " << middle << " is not strictly less than all other elements" << endl;
			return 1;
//			exit(0);
		}
		else if(array[i]>middle){
			int max = array[i];
			cout << "The middle element is " << middle << " is strictly less than all other elements" << endl;
			return 0;  
			exit(0);
		}
	}
	
	 
}

int main(){
	int array[] = {3,4,6,9};
	
	int n = sizeof(array)/sizeof(array[0]);
	
	cout << "The size of the array is " << n << endl;
	
	checkArray(array,n);
	
}
