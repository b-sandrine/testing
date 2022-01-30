#include <iostream>

using namespace std;

int main(){
	int number = 700;
	int quotient, remainder;
	int count = 0;
	while(number != 0){
	
	remainder = number % 2;
	
	if(remainder == 1){
		count ++;
	}
	number = number / 2;
}
cout << count;
}
