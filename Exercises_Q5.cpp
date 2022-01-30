#include <iostream>

using namespace std;

int checkCommoners(int a[],int n1,int b[], int n2){
	int array[]= {};
	int k = 0;
	for(int i = 0;i<n1;i++ ){
		for(int j=0;j<n2;j++){
			if(a[i]==b[j]){
				cout << a[i] << "\t";
			}	
		}
	}
	
}

int main(){
	
	int a[] = {};
	int b[] = {3, 4};
	
	int size1 = sizeof(a)/sizeof(a[0]);
	int size2 = sizeof(b)/sizeof(b[0]);
	
	checkCommoners(a,size1,b,size2);
}
