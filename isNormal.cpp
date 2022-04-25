#include <iostream>

using namespace std;

int isNormal(int n){
	// we are going to find factors of the number offered
	
	if(n == 1){
		return 1;
	}
	int flag = 1;
	for(int i = 2; i <= n/2;i++){
		if(n%i == 0){
			if(i%2 != 0){
				return 0;
			}
		}
	}
	return flag;
}

int main(){
	int result = isNormal(3);
	if(result == 1){
		cout << "The number is normal";
	}
	else{
		cout << "The number is not normal";
	}

}
