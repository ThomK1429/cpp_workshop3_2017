#include <iostream>

using namespace std;

void dispNumA(int  aNum);


int main() {

	int num1 = 0;


	cout << "Enter a number ";
	cin >> num1;
	cout << endl;

	cout << "num1 before = " << num1 << endl;

	// pass by value - a copy of the number is made
	// and passed to the function
	cout << endl;
	dispNumA(num1);

	cout << "num1 after = " << num1 << endl;


	cout << endl;
	system("pause");
	return 0;

}


// pass by value
void dispNumA(int aNum) {
	cout << "aNum before = " << aNum << endl;
	aNum = aNum + 1;
	cout << "aNum after = " << aNum << endl << endl;

}




/*  TEST RESULTS

Enter a number 750

num1 before = 750

aNum before = 750
aNum after = 751

num1 after = 750

Press any key to continue . . .

*/