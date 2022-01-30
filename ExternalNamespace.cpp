#include <iostream>
#include "AnimalNames.h";

using namespace std;
//using namespace AnimalNamespace;

int main(){
	string cow[3] = AnimalNamespace::cows;
	int i = 0; 
	for(i=0;i<sizeof(cow)/sizeof(cow[0]);i++){
		cout << "Cow at " << i+1 << " is " << cow[i] << endl;
	}
}

