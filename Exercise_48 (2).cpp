#include <iostream>

using namespace std;

int checkMeandraArray(int *array, int size){
	if(size <= 0){
		return 0;
	}
	int flag = 0;
	
	for(int i = 0; i< size; i++){
		int n = -1 * array[i];
		for(int k = 0; k < size; k++){
			if(array[k] < 0){
				if(array[k] == n){
					flag ++;
				}
			}
	}
	}
	if(flag == size/2){
		return 0;
	}
	return 1;
}

int main(){
	int array[6] = {1,2,3,-1,13};
	int result = checkMeandraArray(array,6);
	if(result == 1){
		cout << "The array is a meandra" <<endl;
	}
	else{
		cout << "The array is a not meandra" << endl;
	}
}
