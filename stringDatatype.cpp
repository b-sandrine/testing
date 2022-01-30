#include <iostream>
#include <string>

//using namespace std::string;

using namespace std;

int main(){
	
	string textToCopy="";
	string copiedText="so thats it";
	
	
	copiedText.replace(1,9,textToCopy);
	
	cout<< "The string you entered is :" << copiedText << endl; 
	return 0;
}
