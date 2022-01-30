#include <iostream>

using namespace std;

int return_index(int* arr, int size){
	int idx = 1;
	int j = idx;
	
		int rightSum = 0; int leftSum = 0;
		for(int i=1;i<size;i++){
			int limit = idx + i;
			while(limit > size)	rightSum += arr[limit];
			int limit2 = idx-i;
		    while(limit2 < 0) leftSum += arr[limit2];
	    }
	    
		if(rightSum != leftSum || size < 3){
			return -1;
	    }
		idx++;
		if(rightSum == leftSum){
			return j;
		}
		
	}


int main(){
	int array[] = {1, 8, 3, 7, 10, 2};
	
	int size = sizeof(array)/sizeof(array[0]);
	
	int result = return_index(array,size);
	
	cout << result;
}
