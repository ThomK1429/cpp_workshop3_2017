#include <iostream>

// Appendix F: Header Files - cmath (math.h) p1598 7th text
#include <cmath>		// header file containing math functions
//   or 
//#include <math.h>

using namespace std;

int main() {

	double temp;

	// Predefined Functions 
	cout << "The abs(5)  = " << abs(5) << endl;
	cout << "The abs(-5) = " << abs(-5) << endl;
	cout << endl;

	cout << "The abs(5.6)  = " << abs(5.6) << endl;
	cout << "The abs(-5.6) = " << abs(-5.6) << endl;
	cout << endl;

	cout << "The exp(1.0)  = " << exp(1.0) << endl;
	cout << "The exp(3.0)  = " << exp(3.0) << endl;
	cout << endl;

	cout << "The sqrt(2) = " << sqrt(2) << endl;
	cout << "The sqrt(3) = " << sqrt(3) << endl;
	cout << "The sqrt(4) = " << sqrt(4) << endl;
	cout << endl;

	cout << "The ceil(5.7) = " << ceil(5.7) << endl;
	cout << "The floor(7.7) = " << floor(7.7) << endl;
	cout << endl;

	cout << "The pow(2,3) = " << pow(2, 3) << endl;
	cout << endl;

	cout << "pi = " << 4 * atan(1) << endl;
	temp = 4 * atan(1);
	cout << "pi = " << temp << endl;
	cout << endl;

	cout << endl;
	system("pause");
	return 0;

}