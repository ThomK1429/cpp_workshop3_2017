#include <iostream>
#include <iomanip>

using namespace std;

// Function Prototypes
int myAbs(int number);		//myAbs Function Prototype
void format_output(int setColWidth, int someInt);

int main() {

	// Declare Variable
	int num1 = 0;
	int num2 = 5;
	int num3 = -7;


	// Print the Initial Values
	cout << "Initial values: " << endl;
	format_output(5, num1);
	format_output(5, num2);
	format_output(5, num3);
	//cout << setw(5) << num1 << setw(5) << num2 << setw(5) << num3 << endl;
	cout << endl;
	cout << endl;

	// Find the absolute value and print the output
	cout << "Values after use of myAbs() function: " << endl;
	format_output(5, myAbs(num1));
	format_output(5, myAbs(num2));
	format_output(5, myAbs(num3));
	//cout << setw(5) << myAbs(num1) << setw(5) << myAbs(num2) << setw(5) << myAbs(num3) << endl;
	cout << endl;
	cout << endl;

	cout << endl;
	system("pause");
	return 0;

}

// return the absolute value of the input number
int myAbs(int number) {
	if (number < 0)
		number = -1 * number;

	return number;
}


// Format the output
void format_output(int setColWidth, int someInt){
	cout << setw(setColWidth);
	cout << someInt;

}


/* Test Results

Input values:
0    5   -7

Values after use of myAbs() function:
0    5    7

Press any key to continue . . .

*/