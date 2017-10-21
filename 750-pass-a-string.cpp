#include <iostream>
#include <string>

using namespace std;

void func1(string s);

int main() {

	string aString;

	func1("Hello");



	cout << endl << endl;
	system("pause");
	return 0;
}

void func1(string s) {

	cout << "a string = " << s << endl;

}