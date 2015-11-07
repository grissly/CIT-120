// This program demonstrates validation using while loops
// validate_imporved
// Programmer: J. Guerra
// Last Modified: Oct 21, 2015

#include <iostream>
using namespace std;

void main() {
	double number;
	char c;

	// title block
	cout
		<< "            This is program demonstrates how to use while() loop   " << endl
		<< "                         to validate input                         " << endl
		<< "                             J. Guerra                             " << endl
		<< endl << endl;

	while (true) {
		// validate integer      DONE                   
		cout << "Part 1 (validate an integer)\nEnter a number: ";
		while (!(cin >> number)) {
			cin.clear();        cin.ignore(30, '\n');
			cout << "\tPlease no letters. Try again: ";
		}
		cin.ignore(50, '\n');
		while (number != int(number)) {
			cout << "\t" << number << " is NOT an integer. Try again: ";
			while (!(cin >> number)) {
				cin.clear();        cin.ignore(30, '\n');
				cout << "\tPlease no letters. Try again: ";
			}
			cin.ignore(50, '\n');
		}
		cout << "Good! " << number << " is an integer!" << endl << endl;

		// ====================================================================

		// validate multiple of 5   DONE                
		cout << "Part 2 (validate a multiple of 5)\nEnter a multiple of 5: ";
		while (!(cin >> number)) {
			cin.clear();        cin.ignore(30, '\n');
			cout << "\tPlease no letters. Try again: ";
		}
		cin.ignore(50, '\n');
		while (number != int(number) || int(number) % 5 != 0) {
			cout << "\t" << number << " is NOT a multiple of 5. Try again: ";
			while (!(cin >> number)) {
				cin.clear();        cin.ignore(30, '\n');
				cout << "\tPlease no letters. Try again: ";
			}
			cin.ignore(50, '\n');
		}
		cout << "Good! " << number << " is a multiple of 5!" << endl << endl;

		// ====================================================================

		// validate letter                     DONE     
		cout << "Part 3 (validate a letter)\nEnter a letter: ";
		cin >> c;       cin.ignore(30, '\n');
		while (c < 'A' || c >'Z' && c < 'a' || c > 'z') {
			cout << "\t" << c << " is NOT a letter. Try again: ";
			cin >> c;     cin.ignore(30, '\n');
		}
		cout << "Good! " << c << " is a letter!" << endl << endl;

		// ====================================================================

		// validate number between [0, 100]    DONE     
		cout << "Part 4 (validate a number between [0,100])\nEnter a number: ";
		while (!(cin >> number)) {
			cin.clear();        cin.ignore(30, '\n');
			cout << "\tPlease no letters. Try again: ";
		}
		cin.ignore(50, '\n');
		while (number < 0 || number > 100) {
			cout
				<< "\t" << number << " is " << (number < 0 ? "less" : "more")
				<< " than " << (number < 0 ? 0 : 100) << ". Try again: ";
			while (!(cin >> number)) {
				cin.clear();        cin.ignore(30, '\n');
				cout << "\tPlease no letters. Try again: ";
			}
			cin.ignore(50, '\n');
		}
		cout << "Good! " << number << " is in between 0 and 100!" << endl << endl;

		// ====================================================================

		// validate perfect square         DONE         
		cout << "Part 5 (validate a perfect square)\nEnter a perfect square: ";
		while (!(cin >> number)) {
			cin.clear();        cin.ignore(30, '\n');
			cout << "\tPlease no letters. Try again: ";
		}
		cin.ignore(50, '\n');
		while (number < 0 || sqrt(number) != int(sqrt(number))) {
			cout
				<< "\t" << (number < 0 ? "Perfect squares must be positive, so " : "")
				<< number << " is NOT a perfect square.\n\t   Try again: ";
			while (!(cin >> number)) {
				cin.clear();        cin.ignore(30, '\n');
				cout << "\tPlease no letters. Try again: ";
			}
			cin.ignore(50, '\n');
		}
		cout << "Good! " << number << " is a perfect square!" << endl << endl;

		// Wash. Rinse. Repeat.  ;:::)))
		cout << "        ***********************" << endl << endl << endl;
	}
}