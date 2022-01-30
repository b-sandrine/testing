#include <iostream>

using namespace std;

int main(){
	int array[] = {9,5,0,3,1,7};
	
	int n = sizeof(array)/sizeof(array[0]);
	
	for(int i=0;i<n-1;i++){
		int min_index = i;
		
		for(int j=i+1;j<n;j++){
			
			if(array[j]<array[min_index]){
				min_index = j;
			}
		}
		if(array[i] != array[min_index]){
				int temp = array[i];
				array[i] = array[min_index];
				array[min_index] = temp;
			}
			
	}
	cout << "The sorted array is: ";
	for(int i=0;i<n;i++){
		cout << array[i] << "  ";
	}
}
