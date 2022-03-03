#include <iostream>

using namespace std;

int isPrime(int n) {
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

if(isPrime(n)) return 0;

for(int i = 2; i<= n/2; i++){
	if(isPrime(i) && isPrime(n/i) && n%i == 0){
//		cout << i << "\t";
		return 1;
	}
}
return 0;

}

int main(){
	
	cout << isPrimeProduct(50);
} 
