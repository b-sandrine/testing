#include <iostream>

using namespace std;

int isCentered(int *array, int size){
	if(size <= 0 || size%2 == 0) return 0;
	int middle = array[size/2];
	int flag = 0;
	for(int i = 0; i< size; i++){
		if(array[i] != middle && array[i] > middle){
			flag ++;
		}
	}
	if(flag == size-1) return 1;
	return 0;
}

int main(){
	int array[] = {3,4,5,1,2,3,7};
	int result = isCentered(array,7);
	if(result == 1)
		cout << "The array is centered";
	else
		cout << "The array is not centered"; 
}
