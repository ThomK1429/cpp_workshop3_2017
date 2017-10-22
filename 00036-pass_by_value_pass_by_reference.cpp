#include <iostream>

using namespace std;

void dispNumA(int  aNum);
void dispNumB(int& bNum);

int main() {

	int num1 = 999;


	cout << "Enter a number ";
	cin >> num1;

	cout << "num1=" << num1 << endl;
	cout << "addr of num1=" << &num1 << endl;


	// pass by value - a copy of the number is made
	// and passed to the function
	cout << endl;
	dispNumA(num1);

	// pass by reference - the address of the number is passed
	// and passed to the function
	cout << endl;
	dispNumB(num1);


	system("pause");
	return 0;

}


// pass by value
void dispNumA(int aNum) {
	cout << "aNum=" << aNum << endl;
	cout << "addr of aNum=" << &aNum << endl;
}

// pass by reference
void dispNumB(int& bNum) {
	cout << "bNum=" << bNum << endl;
	cout << "addr of bNum=" << &bNum << endl;
}


/*  RESULTS

Enter a number 5
num1=5
addr of num1=00CFF8CC

aNum=5
addr of aNum=00CFF7F8

bNum=5
addr of bNum=00CFF8CC
Press any key to continue . . .

*/