#include <iostream>

using namespace std;

int isDigitSum(int n, int a){
	int sum = 0;
	while(n>0){
		sum = sum + n%10;
		n = n/10;
	}
	if(sum < a) return 1;
	return 0;
}

int main(){
	int result = isDigitSum(3, 3);
	if(result == 1){
		cout << "The arguments are digit sum";
	}
	else{
		cout << "The arguments are not digit sum";
	}
}
