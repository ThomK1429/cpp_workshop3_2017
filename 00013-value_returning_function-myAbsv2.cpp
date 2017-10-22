#include <iostream>
#include <iomanip>

using namespace std;

// Function defined before use, no prototype
int myAbs(int number) {
	if (number < 0)
		number = -1 * number;

	return number;
}


int main() {

	int num1 = 0;
	int num2 = 5;
	int num3 = -7;

	cout << setfill(' ') << endl;

	cout << "Input values: " << endl;
	cout << setw(5) << num1 << setw(5) << num2 << setw(5) << num3 << endl;
	cout << endl;

	cout << "Values after use of myAbs() function: " << endl;
	cout << setw(5) << myAbs(num1) << setw(5) << myAbs(num2) << setw(5) << myAbs(num3) << endl;
	cout << endl;

	system("pause");
	return 0;

}

/* TEST RESULTS

Input values :
0    5 - 7

Values after use of myAbs() function :
0    5    7

Press any key to continue . . .

*/