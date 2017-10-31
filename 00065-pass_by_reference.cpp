#include <iostream>

using namespace std;

void dispNumA(int& aNum);


int main() {

	int num1 = 0;


	cout << "Enter a number ";
	cin >> num1;
	cout << endl;

	cout << "num1 before = " << num1 << endl;

	// pass by reference - the address of the number is 
	//   passed to the function
	cout << endl;
	dispNumA(num1);
	cout << "num1 after = " << num1 << endl;


	cout << endl;
	system("pause");
	return 0;

}


// pass by reference - void
void dispNumA(int& aNum) {
	cout << "aNum before = " << aNum << endl;
	aNum = aNum + 1;
	cout << "aNum after = " << aNum << endl << endl;

}






/*  TEST RESULTS

Enter a number 500

num1 before = 500

aNum before = 500
aNum after = 501

num1 after = 501

Press any key to continue . . .

*/