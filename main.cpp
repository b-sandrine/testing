#include <iostream>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	cout << "Hello world\n";
	
	double a, b;
	
	cout << "Insert the first number: ";
	cin  >> a;
	cout << "Insert the second number: ";
	cin  >> b;
	
	cout << "You entered " << a;
	cout << " and " << b;
	cout << "\nTheir sum is " << a+b;
	cout << "\nTheir product is "<< a*b;
	
	//finding quotient and remainder
	
	int divident, divisor, quotient, remainder;
	
	cout << "\nEnter the divident: ";
	cin >> divident;
	cout << "Enter the divisor: ";
	cin >> divisor;
	
	quotient = divident / divisor;
	
	remainder = divident % divisor;
	
	cout << "\nDivident: " << divident;
	cout << "\nDivisor: " << divisor;
	cout << "\nQuotient: " << quotient;
	cout << "\nRemainder: " << remainder;
	
	//finding size of int, float, char, double
	
	cout << "\nThe size of int is: " << sizeof(int) << " bytes";
	cout << "\nThe size of float is: " << sizeof(float) << " bytes";
	cout << "\nThe size of char is: " << sizeof(char) << " bytes";
	cout << "\nThe size of double is: " << sizeof(double) << " bytes";
	
	//finding ascii values
	
	char c;
	cout << "\nEnter a character: ";	
	cin >> c;
	cout << "The ASCII value of " << c << " is " << int(c);
	
	return 0;
}
