// Merge sort, we use divide and concuer rule until we reach to the atomic half of the array and then we sort every small sub group 

#include <iostream>

using namespace std;

void merge(int arr[], int begin, int mid, int end){
	
	int sizeofleftarray = mid - begin + 1;
	int sizeofrightarray = end - mid;
	int leftArr[sizeofleftarray];
	int rightArr[sizeofrightarray];
	
	// copy leftArray elements
	for(int i = 0; i < sizeofleftarray; i++)
		leftArr[i] = arr[begin + i];
		
	for(int j = 0; j < sizeofrightarray; j ++)
		rightArr[j] = arr[mid + 1 + j];
	
	// copy rightArray elements
	int leftIndexcount = 0;
	int rightIndexcount = 0;
	int mergedIndexcount = begin;
	
	cout << "Starting to sort ....." << endl;
	
	while(leftIndexcount  < sizeofleftarray && rightIndexcount < sizeofrightarray){
		if(leftArr[leftIndexcount] <= rightArr[rightIndexcount]){
			arr[mergedIndexcount] = leftArr[leftIndexcount];
			leftIndexcount ++;
		}
		else{
			arr[mergedIndexcount] = rightArr[rightIndexcount];
			rightIndexcount ++;
		}
		
		mergedIndexcount ++;
	}
	
	while(leftIndexcount < sizeofleftarray){
		arr[mergedIndexcount] = leftArr[leftIndexcount];
		leftIndexcount ++;
		mergedIndexcount ++;
	}
	
	while(rightIndexcount < sizeofrightarray){
		arr[mergedIndexcount] = rightArr[rightIndexcount];
		rightIndexcount ++;
		mergedIndexcount ++;
	}
}

// the below function is a recursive function and it need a halt condition(the reason to exit or check whether it is valid) 
void mergeSort(int arr[], int  begin, int end){
	if(begin >= end) return;
	
	int mid = (begin + end) / 2;
	cout << "Left split " << endl;
	mergeSort(arr,begin,mid);
//	cout << endl << "1. Begin " << begin << " mid " << mid << endl;
	cout << "Right split" << endl;
	mergeSort(arr, mid+1, end);
//	cout << "2. mid " << mid+1 << " end " << end << endl;
	cout << "Merging" << endl;
	merge(arr,begin,mid,end);
}

void print(int arr[], int n){
	for(int i = 0; i<n; i++){
		cout << arr[i] << "\t";
	}
}
int main(){
	int array[] = {1,4,5,6,7,3,6,8};
	cout << "Unsorted array is: " << endl;
	print(array,8);
	
	mergeSort(array, 0,7);
	cout <<  endl << "Sorted array is: " << endl;
	print(array,8);
}
