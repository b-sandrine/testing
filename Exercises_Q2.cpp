#include <iostream>

using namespace std;

void checkSum(int array[],int n){
	int sum = 0; int sum1 = 0;
	for(int i = 0; i< n;i++){
		
		if(array[i]%2 == 0){
			sum1 = sum1 + array[i];
			
		}
		else if(array[i]%2 != 0){
		
			sum += array[i];
			
		}
	}
	cout << "The sum of even numbers is: "<< sum1 << endl;
	cout << "The sum of odd numbers is: "<< sum << endl;
	
	int result = sum - sum1;
	cout << "The result is " << result;
}

int main(){
	int array[] = {4,1,2,3};
	
	int size = sizeof(array)/sizeof(array[0]);
	checkSum(array,size);
}
