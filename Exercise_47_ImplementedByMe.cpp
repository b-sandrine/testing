#include <iostream>

using namespace std;

int findMaxOccur(int n){
	
	int *array; int i = 0;
	while(n != 0){
		int temp = n%10;
		array[i] = temp;
		n = n/10;
		i++;
	}
	int flag = 0;
	int size = sizeof(array)/sizeof(array[0]);
	cout << "The size is: " << size;
	int a = 0;
	int count, previous = 0;
	
	while(a != size){
		count = 0;
		flag = array[a];
		for(int k = 0; k < size; k++){
			if(flag == array[k]){
				count ++;
			}
		}
		if(previous > count){
			return flag;
		}
	}
	return -1;
}

int main(){
	int array = findMaxOccur(122233);
		cout << array << "\t";
}
