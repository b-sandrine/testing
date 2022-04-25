#include <iostream>

using namespace std;

int isPrime(int n){
	if(n <= 1) return 0;
	int flag = 0;
	for(int i = 2; i< n/2;i++){
		if(n%i == 0){
			flag ++;
		}
	}
	if(flag == 0) return 1;
	return 0;
}

int main(){
	int result = isPrime(15);
	if(result == 1) {
		cout << "The number is a prime number";
	}
	else{
		cout << "The number is not a prime number";
		
	}
}
