#include <iostream>
#include <string>

using namespace std;

void spilt_array(char name[],int start,int len,int size){
	int n = len+start;
	if(start >= size || start < 0) {
		exit(0);
	}
	if(len > size || len < 0 ){
		exit(0);
	}
	if( n > size || size < 0){
		exit(0);
	}
	
	char result_array[len];
	
	for(int i=0;i<len;i++){
		result_array[i] = name[start + i];
 }
 
	
	for(int i = 0; i<len;i++){
		cout << result_array[i] << "\t";
	}
	
}

int main(){
	char name[] = {'a','b','c'};
	int size = sizeof(name)/sizeof(name[0]);
	int start, len;
	cout << "Enter the starting index: ";
	cin>> start;
	cout << "Enter the length: ";
	cin >> len;
	
	spilt_array(name,start,len,size);
}
