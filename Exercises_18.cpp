#include <iostream>

using namespace std;

bool isPrime(int n){
//	we stop checking up to n/2 bcz in maths no number can be divisible by n when it is greater than n/2 except the number n
  	
  	if(n<= 1){
  		return false;
	}
	
	for(int x = 0;x< n/2; x++){
		if(n%x == 0){
			return false;
		}
	}
	return true;
}

int isMagicArray(int *arr, int size){
	if(size <= 0){
		return 0;
	}
	int primeSum = 0;
	for(int i=0;i<size;i++){
		if(isPrime(arr[i])){
			primeSum += arr[i];
		}
	}
	if(primeSum == arr[0]){
		return 1;
	}
	return 0;
}

int main(){
	int array[4] = {13,4,4,4};
	int size = sizeof(array)/sizeof(array[0]);
	int result = isMagicArray(array, size);
	
	cout << result;

}
