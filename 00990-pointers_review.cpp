#include <iostream>

using namespace std;



int main() {

	int num1 = 7;

	int *numPtr = nullptr;	// an integer pointer
	// int* numPtr;			// same as above, different format
		
	

	cout << "num1=" << num1 << endl;
	cout << "addr of num1=" << &num1 << endl;
	cout << endl;

	cout << "numPtr=" << numPtr << endl;   // contents s/b garbage
	numPtr = &num1;
	cout << "numPtr=" << numPtr << endl;
	cout << endl;

	cout << "*numPtr is dereferenced and yields the value found at the memory address" << endl;
	cout << "*numPtr=" << *numPtr <<  endl;
	cout << endl;

	 


	system("pause");
	return 0;

}



/*  RESULTS

num1=7
addr of num1=0073FD7C

numPtr=00000000
numPtr=0073FD7C

*numPtr is dereferenced and yields the value found at the memory address
*numPtr=7

Press any key to continue . . .

*/


