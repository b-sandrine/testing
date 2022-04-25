#include <iostream>

using namespace std;

int isOddValent(int *array, int size){
	int count = 0;
	for(int i = 0; i< size; i++){
		if(array[i] % 2 != 0)
			count ++;
	}
	int n = 0, k =0, nBefore = 0;
	while(k < size){
		int temp = array[k];
		n = 0;
		for(int i = 0; i < size; i++){
			if(array[i] == temp){
				n++;
			}
		}
		if(n > nBefore){
			nBefore = n;
		}
		
		if(count > 0 && nBefore > 1) return 1;
		k++;
	}
	return 0;
}

int main(){
	int array[] =  {3, 4, 9, 1,9};
	int result = isOddValent(array,5);
	if(result == 1){
		cout << "The array is odd valent";
	}
	else{
		cout << "The array is not odd valent";
	}
}
