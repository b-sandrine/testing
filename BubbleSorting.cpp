#include <iostream>

using namespace std;

int main(){
	int array[] = {9,4,7,3,6,23,78,10};
	
	int n = sizeof(array)/sizeof(array[0]);
	cout <<"The size of array is: "<< n <<endl;
	// this fisrt loop is ending on n-
	cout << endl << "The unsorted array is: " ;
	for ( int a =0; a < n; a++){
		cout << array[a] << "  ";
	}
	
	cout << endl;
	
	for( int i = 1; i < n ; i++){
		for(int j = 0; j < n-i ; j++){
			if(array[j] > array[j+1]){
				int temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
			}
//			cout <<endl << "Sorting step " << i << ": ";
//		for( int z = 0; z < n; z++){
//			cout << array[z] << "  ";
//		}
//		cout << endl;
		}
		
	}

	cout << endl << "The sorted array is : ";
	for(int i = 0; i< n;i++){
		cout << array[i] << " ";
	}
}
