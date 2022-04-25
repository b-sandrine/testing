#include <iostream>

using namespace std;

int reverseNumber(int n){
	int result = 0;
	if(n < 0 ) return 0;
	
	while(n != 0) {
		int temp = n%10;
		result = result*10 + temp;
		n = n/10;
	}
	return result;
}

int main(){
	int n = 2345661;
	int result = reverseNumber(n);
	cout << "The initial number is:\n " << n << endl;
	cout << "The numbers reversed is:\n " << result << endl;
}
