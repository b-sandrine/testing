#include <iostream>

using namespace std;

int main(){
	//daphaane array
	int array[] = {2,4,6};
	int size = sizeof(array)/sizeof(array[0]);
	
	for(int i=0; i<size;i++){
		while(i < size){
		
		if(array[i]%2 == 0){
			continue;
		}
		else{
			cout << "The array is not dephne";
		}
	   }
		while(i<size){
		
		if(array[i]%2 == 1){
		
			continue;
		}
		else{
			cout << "the array is not dephne";
			return 0;
		}
	
}
	}
}
