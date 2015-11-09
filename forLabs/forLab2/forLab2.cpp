// This program prints perfect squares
// Title: forLab2
// Programmer: J. Guerra
// Last Modified: Nov 6, 2015

/*
Print the perfect squares up to a user defined limit, n per line.
You need the conditional operator, but you do NOT need the math library.
You need only ONE statement in the body of the for loop
*/

#include <iostream>
using namespace std;

void main() {
	int limit,		// end of range to display
		npl;		// numbers per line

	// print title
	cout
		<< "\n\t Print the perfect squares up to a user defined limit "
		<< "\n\t          Uses for and conditional operator.          "
		<< "\n\t                     by J. Guerra                     " << endl << endl;

	// loop program for testing
	while (true) {
		// input prompt
		cout << "What is the limit: ";
		cin >> limit;		cin.ignore(30, '\n');
		cout << "How many perfect squares would you like per line: ";
		cin >> npl;		cin.ignore(30, '\n');

		// processing
		for (int i = 1; i * i <= limit; i++) {
			cout << i * i << (i % npl != 0 ? '\t' : '\n');
		}

		// separator
		cout << "\n\n~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n\n";
	}
}

/*
This lab was a bit tricky. I wasn't sure if I should use nested loops or if statements.
By applying the principle of common code outside the if statement, I was able to see the correct aproach.
I use a conditional operator to determine if I needed to make space for a new column or preoceed to a new line
(I then passed the appropriate escape sequence to the cout object to the desired spacing).

constructed number myself
*/