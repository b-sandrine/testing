#include <iostream>

using namespace std;

int main(){
	//daphaane array
	int array[] = {2,4,6,7};
	int flag = 0;
	int size = sizeof(array)/sizeof(array[0]);
	
	for(int i=0; i<size;i++){
		
		if(array[i]%2 == 0){
//			continue;
			flag ++;
		}
		else{
			return 0;	
		}
		while(flag != 0){
			cout << "The array is daphne";
			return 1;
		}
		
	   
//		while(i<size){
//		
//		if(array[i]%2 == 1){
//		
//			continue;
//		}
//		else{
//			cout << "the array is not dephne";
//			return 0;
//		}
//		cout << "The array is daphne";
//		return 1;
	
      }
	}

