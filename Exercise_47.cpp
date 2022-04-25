#include <iostream>

using namespace std;

int countDigit(int digit, int number){
	int count=0;
	while(number >= 0){
		if(number%10 == digit){
			count ++;
			number = number / 10;
		}
	}
	return count;
}


int findMaxOccur(int n){
	
	int maxOccur = 0; int digitMax=0;
	while(n != 0){
		int i = n%10;
		int count = countDigit(i,n);
		if(count > maxOccur){
			maxOccur = count;
			digitMax = i;
		}
		if(count == maxOccur){
			digitMax = -1;
		}
		n = n/10;
	}
	return digitMax;
}

int main(){
	int result = findMaxOccur(122233);
	cout << result;
}
