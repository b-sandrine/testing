#include <iostream>

using namespace std;

int main(){
	int num[5],i;
	
	for(i=0;i<5;i++){
		cout << "Enter the number everytime I appear: ";
		cin >> num[i];
	}
	
	cout << "The entered elements are: " << endl;
	for(i=0;i<5;i++){
		cout << num[i] << endl;
	}
}
