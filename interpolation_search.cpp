#include <iostream>

using namespace std;
//interpolation is an improved binary algorithms

int interpolationSearch(int* array, int n, int key){
	int lo=0,hi=n-1,pos;
	int count = 0;
//	for(int i = start; i<= end; i++){
//it is better to use while loop 
while(lo <= hi){
	count ++;
	if(array[hi] == array[lo] || lo == hi || lo > hi) return -1;
		pos = lo +  (((double)(hi - lo) / (array[hi] - array[lo])) * (key - array[lo]));
		cout << count;
		if(key == array[pos]) return pos;
     	
		else if(array[pos] > key)
			hi = pos-1;
		
		else if(array[pos] < key)
			lo = pos+1;	
		return -1;
		
	}
	
}


int main(){
	int array[] = {1};
	int search = 1;
	int size = sizeof(array)/sizeof(array[0]);
	
	int result = interpolationSearch(array, size, search);
	
	cout << "The element " <<array[result] << " is at index " << result;
	
	return 0;
}
