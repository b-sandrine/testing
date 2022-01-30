#include<iostream>
using namespace std;
void selectionSort(int a[], int n) {
   int i, j, min, temp;
   for (i = 0; i < n - 1; i++) {
      min = i;
      for (j = i + 1; j < n; j++)
      if (a[j] < a[min])
      min = j;
      temp = a[i];
      a[i] = a[min];
      a[min] = temp;
   }
}
int main() {
   
   int i;
  
   int n;
   cout<<" Enter the number of elements: ";
	cin >> n;
	 int a[n];
   cout << "Enter the elements ";
	for(i=0;i<n;i++){
		cout << "Element at " << i+1 <<endl;
		cin >> a[i];
	}
	
   cout<<"Given array is:"<<endl;
   for (i = 0; i < n; i++)
   cout<< a[i] <<" ";
   cout<<endl;
   selectionSort(a, n);
   printf("\nSorted array is: \n");
   for (i = 0; i < n; i++)
   cout<< a[i] <<" ";
   return 0;
}
