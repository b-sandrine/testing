#include <iostream>

using namespace std;

int isDephne(int *array, int size){
	int odd = 0; int even = 0;
	for(int i = 0; i < size; i++){
		if(array[i] % 2 == 0)
			even ++;
		else if(array[i] % 2 == 1)
			odd ++;
	}
	
	if(odd == 0 && even == size)
		return 1;
	else if(odd == size && even == 0)
		return 1;
	else
		return 0;
}

int main(){
	int array[] = {1,1,3,3,5,4};
	int result = isDephne(array,6);
	cout << result;
}
