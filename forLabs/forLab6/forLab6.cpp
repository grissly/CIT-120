// This program prints character array vertically
// Title: forLab5
// Programmer: J. Guerra
// Last Modified: Nov 03, 2015

/*
(do not skip initial white space)
Use a for loop to print a character array vertically one character at a time.
Assume physical size 80 and use getline to read data into the array.
*/

#include <iostream>
using namespace std;

void main() {
	int index;
	const int SIZE = 80;
	char inputArray[SIZE];

	// print title
	cout
		<< "\n\t      This project uses a for loop to print a       "
		<< "\n\t character array vertically one character at a time "
		<< "\n\t                    by J. Guerra                    " << endl << endl;

	// loop for testing
	while (true) {
		// input prompt
		cout << "What is your name? ";
		cin.getline(inputArray, SIZE, '\n');

		// process
		for (index = 0; inputArray[index] != '\0'; index++)
			cout << inputArray[index] << endl;

		// separator
		cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n\n";
	}
}

/*
This lab was pretty straight forward. I used what I learned about character array from forLab5.
*/