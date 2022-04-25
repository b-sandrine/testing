#include <iostream>

using namespace std;

int countOnes(int n){
	if(n <= 0) return 0;
	int result = 0;
	
	while(n>0){
		int rem = n%2;
		if(rem == 1){
			result ++;
		}
		n = n/2;
	}
	return result;
}

int main(){
	int n = 100;
	int res = countOnes(n);
	cout << "The number of ones in " << n << " is " << res << endl;
}
