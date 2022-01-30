#include <iostream>

using namespace std;

int main(int argc, char *argv[]){
	
	cout << argc << endl;
	for (int i = 1;i<argc;++i){
		cout << "Value: " << i << " = " <<argv[i]<<endl;
	
	} 
	int array[5] = {5,1,15,20,25};
	int a,b,c,i=3;
	
	a=++array[1];
	b=array[1]++;
	c = array[i++];
	
	cout<<a<<","<<b<<","<<c<<endl;
	
	return 0;
}
