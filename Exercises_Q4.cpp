#include <iostream>

using namespace std;

int reverse = 0;

int reverseNum(int num){
	
	while(num != 0){
	
	reverse = reverse * 10;
	
    reverse = reverse + num%10;
	
	num = num/10;
}
cout << "The reverse number is "<< reverse;
	
}
int main(){
	int num;
	cout<< "Enter the number: ";
	cin>>num;
	
	reverseNum(num);
}
