#include <iostream>

using namespace std;

int main(){
	int array[]= {1, 2, 4, 3};
	
	int n = sizeof(array)/sizeof(array[0]);
	int limit = n-1;
	int temp[limit];
	for(int i=0;i<n;i++){
		if(array[i] <= limit){
		    temp[i] = array[i];
		}
		else{
			continue;
		}
	}
	for(int i = 0; i< limit; i++){
		cout<< temp[i] << endl;
	}
	for(int i = 0; i < n; i++){
		if(temp[i] = i){
			continue;
		}
		else if(temp[i] != i){
			cout << "The array is not of all possibilities";
			return 0;
		}
	}
	cout << "The array is of all possibilities";
	
}
