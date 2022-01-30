#include <iostream>

//using string arrays will look like string animals[]={"cow","dog","pilot"}; and this is not effecient 
//we will just use namespaces 

using namespace std;

namespace AnimalNames{
	string cows[] = {"ISINE","IGAJU","IBIHOGO"};
	string dogs[] = {"MAX","BOX","FOX","BOBI"};
}

using namespace AnimalNames;

int main(){
	string cow[3] = cows;
	int i = 0; 
	for(i=0;i<sizeof(cow)/sizeof(cow[0]);i++){
		cout << "Cow at " << i+1 << " is " << cow[i] << endl;
	}
}

