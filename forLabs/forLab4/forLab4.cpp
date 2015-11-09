// This program classifies a number as perfect, abundant or deficient
// Title: forLab4
// Programmer: J. Guerra
// Last Modified: Nov 6, 2015

/*
Classify a number as Perfect, Deficient or Abundant.
Validate user input. This classification has meaning ONLY for positive integers.

A number is perfect if the sum of each factors, NOT including the number
itself is equal to the number. Example 6 = 1+2+3.

A number is deficient if the sum of each factors, NOT including the number
itself is less than the number. Example 9 > 1+3.

A number is abundant if the sum of each factors, NOT including the number
itself is greater than the number. Example 12 < 1+2+3+4+6.
*/

#include <iostream>
using namespace std;

void main() {
	int num, total;

	// print title
	cout
		<< "\n\t\t Positive number classification as "
		<< "\n\t\t   perfect, abundant or deficient  "
		<< "\n\t\t            by J. Guerra           " << endl << endl;

	// loop for testing
	while (true) {
		total = 0;		// clear total for new test

		// input prompt
		cout << "Enter a number to be classified as perfect, abundant or deficient: ";
		cin >> num;		cin.ignore(30, '\n');
		// validate
		while (num < 1) {
			cout << "This classification is for POSITIVE integers only. Please try again: ";
			cin >> num;		cin.ignore(30, '\n');
		}

		// process
		for (int i = 1; i < num; i++)
			total += (num % i == 0 ? i : 0);

		// print output
		cout << num << " is " << (total > num ? "abundant" : total < num ? "deficient" : "perfect") << ".";

		// separator
		cout << "\n\n~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n\n";
	}
}

/*
This lab didn't present any new challenges. I just used everything I have learned form other labs.

accumulator, reset each iteration
*/