#include <iostream>

using namespace std;

int binarySearch(int* array, int n, int key){
	int start=0,end = n-1;
	
//	for(int i = start; i<= end; i++){
//it is better to use while loop 
int count = 0;
while(start <= end){
	count ++;
		int mid = (start+end)/2;
		cout << count;
		if(key == array[mid]) return mid;
     	
		else if(array[mid] > key)
			end = mid-1;
		
		else if(array[mid] < key)
			start = mid+1;
		
		else
			return -1;
		
	}
	
}

int main(){
	int array[] = {1,3,5,7,8,10,20};
	int search = 7;
	int size = sizeof(array)/sizeof(array[0]);
	
	int result = binarySearch(array, size, search);
	
	cout << "The element " <<array[result] << " is at index " << result;
	
	return 0;
}
