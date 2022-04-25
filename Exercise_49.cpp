#include <iostream>

using namespace std;

int commercialArrayCheck(int *array, int size){
	int flag = 0;
	if(size <= 0){
		return 0;
	}
	
	for(int i = 0; i < size; i++){
		if(array[i] % 2 != 0){
			int square = array[i] * array[i];
			if(array[i+1] == square){
				flag++;
			}
		}
	}
	if(flag > 0){
		cout << flag << endl;
		return 1;
	}
	return 0;
}

int main(){
	int array[] = {1,2,4,7,5,25,6,36,49};
	int result = commercialArrayCheck(array, 7);
	if(result == 1){
		cout << "The array is commercial" << endl;
	}
	else{
		cout << "The array is not commercial" << endl;
	}
}
