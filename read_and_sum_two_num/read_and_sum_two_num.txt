// Prompts the user for two numbers and returns the sum
// Read and Sum Two Numbers
// Programmer: Josh Guerra
// Last Modified: Sept. 23, 2015

#include <iostream>
using namespace std;

void main() {
	int num1, num2;

	// Tell the user about the program
	cout
		<< "\n\t  Two number adder    "
		<< "\n\t    By J. Guerra      " << endl << endl;

	// promt user for two numbers
	cout << "Pleae give me an integer: ";
	cin >> num1;
	cout << "Pleae give me another integer: ";
	cin >> num2;
	cout << endl;

	// return the sum
	cout << "The sum of \"" << num1 << " + " << num2 << " =\" " << num1 + num2 << endl << endl;

	// cleanup on aisle 28
	system("pause");
}