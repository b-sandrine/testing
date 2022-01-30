#include <iostream>

using namespace std;

int checkPOE(int* arr, int arrSize){
	if(arrSize < 3) return -1;
	
	for(int i=1;i<arrSize;i++){
		int currIndex = i;
		int leftSum=0; int rightSum = 0;
		while(currIndex > 0){
			leftSum += arr[currIndex - 1];
			currIndex--;
		}
		currIndex = i;
		while(currIndex < arrSize){
			rightSum += arr[currIndex+1];
			currIndex ++;
		}
		
		if(rightSum == leftSum){
			return i;
		}
	}
}

int main(){
	int arr[] = {1, 5, 3, 1, 1, 1, 1, 1, 1};
	int size = sizeof(arr)/sizeof(arr[0]);
	int result = checkPOE(arr,size);
	cout << result;
}
