// demonstrates optional arguements
// program prints the alphabetic characters
// Project Name: printAlpha
// Programmer: J. Guerra
// Last Modified: Dec 2, 2015

#include <iostream>
#include "myHeader.h"
using namespace std;

void main() {  // main is DONE
	char s, e, c;				// for user testing
	int cpl;					// characters per line

	system("color 2f");			// console fun :D | 2 = green background, f = white text

	printTitle();

	////////////              printAlpha()              ////////////
	cout
		<< "Calling \"printAlpha()\"\n"
		<< "\tPrinting from A to Z, 5 characters per line:\n\n";
	printAlpha();

	////////////             printAlpha('T')            ////////////
	cout
		<< "Calling \"printAlpha('T')\"\n"
		<< "\tPrinting from T to Z, 5 characters per line:\n\n";
	printAlpha('T');

	////////////          printAlpha('C', 'W')          ////////////
	cout
		<< "Calling \"printAlpha('C', 'W')\"\n"
		<< "\tPrinting from C to W, 5 characters per line:\n\n";
	printAlpha('C', 'W');

	////////////         printAlpha('D', 'Y', 3)        ////////////
	cout
		<< "Calling \"printAlpha('D', 'Y', 3)\"\n"
		<< "\tPrinting from D to Y, 3 characters per line:\n\n";
	printAlpha('D', 'Y', 3);

	system("pause");

	////////////              User Testing              ////////////
	cout << "Do you want to choose the arguments? ";
	c = getYorN();

	while (c == 'Y' || c == 'y') {
		cout << endl << endl << "Peoples' choice! ;)" << endl;

		cout << "\tEnter the starting letter: ";
		cin >> s;		cin.ignore(40, '\n');
		cout << "\tEnter the ending letter: ";
		cin >> e;		cin.ignore(40, '\n');
		cout
			<< "\tHow many letters do you want me to print per line   " << endl
			<< "\t   (if you hit ENTER I will use the default value): ";
		if (cin.peek() == '\n') {
			cout << "Calling \"printAlpha('" << s << "', '" << e << "')\"\n";
			printAlpha(s, e);
		}
		else {
			cin >> cpl;		cin.ignore(40, '\n');

			cout << "Calling \"printAlpha('" << s << "', '" << e << "', " << cpl << ")\"\n";
			printAlpha(s, e, cpl);
		}
		
		cout << "Do you want to choose the arguments again? ";
		c = getYorN();
	}

	cout << endl << "Thank you for printing with us!" << endl << endl;
	system("pause");
}