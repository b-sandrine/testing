#include <iostream>

using namespace std;

int isFilter(int *array, int len){
	// firstly checking whether it has 9 and 11
	int flag =0 , j = 0, k = 0;
	for(int i = 0; i < len; i++){
		if(array[i] == 9 || array[i] == 11){
			flag ++;
		}
		if(array[i] == 7){
			j++;
		}
		if(array[i] == 13){
			k++;
		}
	}
	cout << "The flag is  " << flag << " the j is " << j <<" and the k is " << k << endl; 
	if(flag > 1 && j > 0 && k == 0)
		return 1;
	else if( flag > 1 && j == 0 && k > 0 )
		return 1;
	else if (flag > 1 && j == 0 && k == 0)
		return 1;
	else if(flag >= 0 && j == 0 && k > 0 )
		return 1;
	else if(flag >= 0 && j > 0 && k == 0)
		return 1;
	else
		return 0;
}

int main(){
	int array[] = {4, 7, 13};
	int result = isFilter(array,3);
	if(result == 1){
		cout << "The array is a filter array"; 
	}
	else{
		cout << "The array is not a filter array";
	}
}
