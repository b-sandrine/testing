#include <iostream>

//will be solved after studying binary tree

using namespace std;

void addValue(int array[], int n){
	if(n<1){
		cout << "Insert elements in your array";
	}
	for(int i = 0; i < n;i++){
		if(array[i]%2 == 0){
			array[i] = array[i]+1;
		}
		else if(array[i] == 5){
			array[i] = array[i] + 5;
		}
		else if(array[i]%2 !=0){
			array[i] = array[i]+3;
		}
		
	}
	for(int j =0; j<n;j++){
		cout<< array[j] << "\t";
	}
}

int main(){
	int array[] = {1,2,3,4,5,5,15,7,9};
	int size = sizeof(array)/sizeof(array[0]);
	addValue(array,size);
}
