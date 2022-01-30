#include <iostream>
#include <string>

using namespace std;
int main(){
	string fname = "sandrine";
	string lname = "Dushimimana";
	string full_names = lname + " " + fname;
	
	
	cout << full_names << endl;
	cout << "fname length: " <<fname.size() << "lname length: "<<lname.size() << "Full_name length" << full_names.size() << endl;
	cout << strlen(full_names);
	}
