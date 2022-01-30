#include <iostream>

using namespace std;

int linearSearching(int* arr,int size,int search){
	if(size == 0){
		return -1;
	}
	for(int i = 0;i<size;i++){
		if(arr[i] == search){
			return i;
		}
	}
	return -1;
}

int main(){
	int array[] = {1,5,6,7,13,12,60};
	int size = sizeof(array)/sizeof(array[0]);
	int result = linearSearching(array,size,60);
	cout << result;
}
