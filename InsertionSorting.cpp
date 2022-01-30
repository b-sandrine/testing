#include <iostream>

using namespace std;

int main(){
	int array[] = {5,3,4,0,8,190,7,1};
	
	int size = sizeof(array)/sizeof(array[0]);
	
	int key, p;
	
	for(int i=1;i<size;i++){
		key = array[i];
		for(p=i-1; p >=0 && array[p] > key;p--){
			array[p+1] = array[p];
		}
		array[p+1] = key;
	}
	cout < "The sorted array is: ";
	for(int i = 0;i<size;i++){
		cout << array[i] << " ";
	}
}
