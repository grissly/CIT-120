// Prompts the user for two numbers and returns the sum, protects against decimal input
// Read and Sum Two Numbers - Improved
// Programmer: Josh Guerra
// Last Modified: Sept. 23, 2015

#include <iostream>
using namespace std;

void main() {
	int num1, num2;

	// Tell the user about the program
	cout
		<< "\n\t  Two number adder    "
		<< "\n\t      improved        "
		<< "\n\t    By J. Guerra      " << endl << endl;

	// promt user for two numbers
	cout << "Pleae give me an integer: ";
	cin >> num1;	cin.ignore(80,'\n'); // clear the buffer after first int
	cout << "Pleae give me another integer: ";
	cin >> num2;	cin.ignore(80, '\n'); // clear the buffer after second int
	cout << endl;

	// return the sum
	cout << "The sum of \"" << num1 << " + " << num2 << " =\" " << num1 + num2 << endl << endl;

	// cleanup on aisle 31
	system("pause");
}