// This program demonstrates the structure of a larger project with
//     switch case menu and focus on function reusability 
// Title: monsterFunctions
// Programmer: J. Guerra
// Last Modified: Nov 19, 2015

#include <iostream>
#include "Header.h"
using namespace std;

void main() {
	double start, end, x;		// for case 2
	char c;						// for case 3
	int y, z,					// for case 6
		cpl;					// characters per line. for case 7
	system("color 2f");			// console fun :D | 2 = green background, f = white text

	while (true) {
		printTitle();
		printMenu();

		// menu
		cout << "Please enter your choice: ";
		switch (getIntInRange(1, 8)) {
			case 2:				////////	Option 2 (Get Number In Range)	////////
				cout << "\nStart?: ";
				start = getNum();
				cout << "End?: ";
				end = getNum();
				cout << "Please enter a number between " << start << " and " << end << ":";
				x = getNumInRange(start, end);

				cout << "Your number is " << x << endl;

				break;

			case 3:				////////	Option 3 (Get Letter)			////////
				cout << "\nPlease enter a letter of the alphabet: ";
				c = getLetter();

				cout << "Your letter is " << c << endl;

				break;

			case 6:				////////	Option 6 (Classify Number)		////////
				cout << "\nPlease enter a number: ";
				y = getPosInt();
				z = classifyInt(y);

				cout << y << " is " << (z == -1 ? "deficient" : z == 1 ? "abundant" : "perfect") << endl;

				break;
			
			case 7:				////////	Option 7 (Print ASCII Table) 	////////
				cout << "\nHow many characters would you like to print per line? [1, 4]: ";
				cpl = getIntInRange(1, 4);
				printASCII(cpl);
				break;
			
			case 8:				////////	Option 8 (Close Program)		////////
			default:
				cout << "\nThank you for using my program.\n\n";
				system("pause");
				exit(0);
		}

		// Wash. Rinse. Repeat.
		cout << "\n";
		system("pause");
		system("cls");
	}
}