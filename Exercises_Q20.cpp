#include <iostream>

using namespace std;

bool isPrime(int n) {
    if (n <= 1)
    {
        return false;
    }
    for(int x=2; x<=n/2; x++){
        if (n%x == 0)
        {
            return false;
        }
    }
    return true;
}

int isPrimeProduct(int n){
	int current = 2;
	
	for(int i = 2; i <= n/2; i++){
		if(isPrime(i)){
			if(current * i == n){
				return 1;
			}
		}
		return 0;
	}
}

int main(){
	
	cout << isPrimeProduct(50);
}
