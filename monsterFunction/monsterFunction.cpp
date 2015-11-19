// This program demonstrates the structure of a larger project with
//     switch case menu and focus on function reusability 
// Title: monsterFunctions
// Programmer: J. Guerra
// Last Modified: Nov 19, 2015

#include <iostream>
#include "Header.h"
using namespace std;


void main() {
	int cpl;				// characters per line. for case 7

	system("color 2f");		// console fun :D | 2 = green background, f = white text

	printTitle();

	while (true) {
		printMenu();

		// menu
		cout << "Please enter your choice: ";
		switch (getIntInRange(1, 8)) {
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			cout << "\nHow many characters would you like to print per line? [1, 4]: ";
			cpl = getIntInRange(1, 4);
			for (int i = 0; i < 256; i++) {
				cout << i << " = " << char(i) << (i % cpl == 0 ? "\n" : "\t");
			}

			break;
		case 8:
			cout << "\nThank you for using my program.\n\n";
			system("pause");
			exit(0);
		}

		// Wash. Rinse. Repeat.
		system("pause");
		system("cls");
	}
}