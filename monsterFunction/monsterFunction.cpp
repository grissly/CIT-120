// This program demonstrates the structure of a larger project with
//     switch case menu and focus on function reusability 
// Title: monsterFunctions
// Programmer: J. Guerra
// Last Modified: Nov 19, 2015

#include <iostream>
#include <iomanip>
#include "Header.h"
using namespace std;


void main() {
	int cpl, num;				// characters per line. for case 7
	system("color 2f");		// console fun :D | 2 = green background, f = white text

	while (true) {
		printTitle();
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
				cout << "\nPlease enter a number: ";
				num = getPosInt();
				cout 
					<< num << " is " 
					<< (classifyInt(num) == -1 ? "deficient" : classifyInt(num) == 1 ? "abundant" : "perfect") 
					<< endl;
				break;
			case 7:
				cout << "\nHow many characters would you like to print per line? [1, 4]: ";
				cpl = getIntInRange(1, 4);
				printASCII(cpl);
				break;
			case 8:
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