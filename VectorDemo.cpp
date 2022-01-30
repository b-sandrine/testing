#include <iostream>
#include <vector>

using namespace std;

int main() {
	// retreiving using memory address which is basic

    vector<int> myVector = {2,5,0,1};
    cout<<"Size of vector: "<< myVector.size()<<endl;
    
    cout <<  "Printing using basic way: ";
    for(auto &i: myVector){
    	cout<<i<<" ";
	}
	cout << endl << endl;
	cout << "Printing showing indexes and value: "<< endl;
	for(int j=0; j<myVector.size();j++){
		cout << "element at index "<<j <<" is " << myVector.at(j) << endl;
	}
	cout << endl << endl;
	
	cout << "Printing vector values: ";
    myVector.push_back(100);
    for(int k:myVector){
    	cout<<k<<" ";
	}
	cout << endl << endl;
	cout << "Printing using .begin and .end: ";
	for(auto k=myVector.begin();k!=myVector.end();k++){
		cout<< *k << " ";
	}
	return 0;
}
    
    // replace int with auto

	
	
	// the second way of retreivving data 
	//.size and .at are all the same
	
	
