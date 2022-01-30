//receives an array of unsorted numbers and return and array of sorted numbers

#include <iostream>
#include <algorithm>

using namespace std;

int i,k,j;

int displayArray( int a[]){
   for (k = 0; k < i ; k++) {
      cout << a[k] << "\t";
   }
	
}

int main(){
	
	cout<<" Enter the number of elements: ";
	cin >> i;
	
	int array[i];
	
	cout << "Enter the elements ";
	for(k=0;k<i;k++){
		cout << "Element at " << k+1 <<endl;
		cin >> array[k];
	}
	cout << "The unsorted array: ";
	displayArray(array);
	cout << endl<<endl<< " Sorting ........" << endl << endl;
	sort(array, array+i);
	
	cout << "The sorted array: ";
	
	displayArray(array);
	
}
