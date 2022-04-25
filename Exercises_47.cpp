#include <iostream>

using namespace std;

int findMaxOccuringNumber(int n){
	int array[] = {};
	int i = 0;
	while(n>0){
		int temp = n%10;
		array[i] = temp;
		//cout << "The value " << temp << " is at index " << i << endl;
		n = n/10;
		i = i+1;
		cout << i << "\t";
	}
	
//	for(int k = 0; k< size; k++){
//		cout << array[k] << "\t"; 
//	}
}

int main(){
	
	findMaxOccuringNumber(11222502);
}
