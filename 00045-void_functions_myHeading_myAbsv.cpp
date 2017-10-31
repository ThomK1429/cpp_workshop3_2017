#include <iostream>
#include <iomanip>

using namespace std;

// VOID FUNCTION - Function Prototypes
void myHeading();			//Display Headings		
void myAbs(int number);		//Find and display absolute value

int main() {

	int num1 = 0;
	int num2 = 5;
	int num3 = -7;

	myHeading();

	myAbs(num1);
	myAbs(num2);
	myAbs(num3);

	cout << endl;

	system("pause");
	return 0;

}

void myHeading() {

	cout << setfill(' ') << endl;

	cout << "   myAbs Function Processing" << endl;
	cout << endl;
	cout << "Before Values      After Values" << endl;
	cout << "*************      ************" << endl;

}


void myAbs(int number) {
	cout << setfill(' ') << setw(13);
	cout << number << "      ";

	if (number < 0)
		number = -1 * number;

	cout << setfill(' ') << setw(12);
	cout << number << endl;

}

	
/* TEST RESULTS



   myAbs Function Processing

Before Values      After Values
*****************      ***************
	      0                          0
	      5                          5
	     -7                          7

Press any key to continue . . .


*/