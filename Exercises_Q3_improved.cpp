#include <iostream>
#include <cstring>

using namespace std;

char* getCharArray(char* arr, int start, int length){
	
	if(arr == NULL) return NULL;
	int len = strlen(arr);
	if(start < 0 || length > len || (start + length) > len || length < 0 || start > len ) return NULL;
	char* result = new char[length];
	
	int x = 0;
	for(int i = start; i < (start + length); i ++){
		result[x] = arr[i];
		x++;
	}
	return result;
}

int main(){
	static char arr[] = {'a','b','c','d','e','f','g','h'};
	int start = 0;
	int len = 4;
	char* result = getCharArray(arr,start,len);
	cout << result << endl;
	for(int i=0;i < len; i++)
	cout << result[i] << "\t";
}
