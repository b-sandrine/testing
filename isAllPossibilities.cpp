#include <iostream>

using namespace std;

int isAllPossibilities(int *array,int n){
	int k = 0,flag = 0;
	while(k != n){
		for(int i = 0; i < n; i++){
			if(array[i] == k) flag ++;
		}
		k ++;
	}
	if(flag == n) return 1;
	return 0;
}

int main(){
	int array[] =   {0, 2, 3} ;
	int result = isAllPossibilities(array,3);
	if(result == 1) {
		cout << "True";
	}
	else{
		cout << "false";
	}
}
