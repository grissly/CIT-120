// This program demonstrates the structure of a larger project with
//     switch case menu, focus on function reusability, and "slave" functions 
// Title: monsterFunctions
// Programmer: J. Guerra
// Last Modified: Nov 19, 2015

#include <iostream>
#include "Header.h"
using namespace std;

void main() {
	double
		x,						// for receiving double as input
		start, end;				// for option 2
	char 
		c;						// for receiving character as input
	int 
		y,						// for receiving int as input
		z,						// for receiving code from classifyInt()
		cpl;					// characters per line. for option 7

	system("color 2f");			// console fun :D | 2 = green background, f = white text

	while (true) {
		printTitle();
		printMenu();

		// menu
		cout << "Please enter your choice: ";
		y = getIntInRange(1, 8);

		cout << endl;
		switch (y) {
			case 2:				////////	Option 2 (Get Number In Range)	////////
				cout << "Start?: ";
				start = getNum();
				cout << "End?: ";
				end = getNum();
				cout << "Please enter a number between " << start << " and " << end << ":";
				x = getNumInRange(start, end);

				cout << "Your number is " << x << endl;

				break;

			case 3:				////////	Option 3 (Get Letter)			////////
				cout << "Please enter a letter of the alphabet: ";
				c = getLetter();

				cout << "Your letter is " << c << endl;

				break;

			case 4:				////////	Option 4 (Get Integer)			////////
				cout << "Please enter an integer: ";
				y = getInt();

				cout << "Your number is " << y << endl;

				break;

			case 5:				////////	Option 5 (Get Prime)			////////
				cout << "Please enter a prime number: ";
				y = getPrime();

				cout << y << " is prime" << endl;

				break;

			case 6:				////////	Option 6 (Classify Number)		////////
				cout << "Please enter a number: ";
				y = getPosInt();

				z = classifyInt(y);

				cout << y << " is " << (z == -1 ? "deficient" : z == 1 ? "abundant" : "perfect") << endl;

				break;
			
			case 7:				////////	Option 7 (Print ASCII Table) 	////////
				cout << "How many characters would you like to print per line? [1, 4]: ";
				cpl = getIntInRange(1, 4);

				printASCII(cpl);

				break;
			
			case 8:				////////	Option 8 (Close Program)		////////
			default:
				cout << "Thank you for using my program." << endl << endl;
				system("pause");
				exit(0);
		}

		// Wash. Rinse. Repeat.
		cout << endl;
		system("pause");
		system("cls");
	}
}