#include <iostream>

using namespace std;

int factorEqual(int n, int m){
	int countN = 0, countM = 0;
	if(n <0 || m <0){
		return 0;
	}
	for(int i = 1; i<= n/2;i++){
		if(n%i == 0){
			countN ++;
		}
	}
	for(int i = 1; i < m/2; i++){
		if(m%i == 0){
			countM ++;
		}
	}
	if(countN == countM){
		return 1;
	}
}

int main(){
	int result = factorEqual(10,9);
	if(result == 1){
		cout << "Factor equal";
	}
	else{
		cout << "Not factor equal";
	}
}
