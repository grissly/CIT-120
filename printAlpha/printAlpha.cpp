// demonstrates optional arguements
// program prints the alphabetic characters
// Project Name: printAlpha
// Programmer: J. Guerra
// Last Modified: Nov 30, 2015

#include <iostream>
using namespace std;

void printTitle();
void printAlpha(char s = 'A', char e = 'Z', int cpl = 5);
bool getYorN();
char getLetter();

void main() {
	char s, e;					// for user testing
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
	
	while (getYorN()) {
		cout << endl << endl << "Peoples' choice! ;)" << endl;

		cout << "\tEnter the starting letter: ";
		s = getLetter();
		cout << "\tEnter the ending letter: ";
		e = getLetter();
		cout
			<< "\tHow many letters do you want me to print per line   " << endl
			<< "\t   (if you hit ENTER I will use the default value): ";
		if (cin.peek() == '\n') {
			cin.ignore(1, '\n');
			printAlpha(s, e);
		}
		else {
			cin >> cpl;		cin.ignore(40, '\n');
			printAlpha(s, e, cpl);
		}
		
		cout << "Do you want to choose the arguments again? ";
	}

	cout << endl << "Thank you for printing with us!" << endl << endl;
	system("pause");
}

void printTitle() {
	cout
		<< "\n\t              Lab on Optional Arguments              "
		<< "\n\t                     By J. Guerra                    "
		<< endl << endl << endl;
}

void printAlpha(char s, char e, int cpl) {
	int count = 0;
	
	for (char l = s; l <= e; l++)
		cout << l << (count++ % cpl == cpl - 1 ? "\n" : "\t");
	cout << endl << endl;
}

bool getYorN() {
	char c;
	cin >> c;	cin.ignore(80, '\n');

	while (c != 'Y' && c != 'y' && c != 'N' && c != 'n') {
		cout << "Please type Y or N. Try again: ";
		cin >> c;		cin.ignore(80, '\n');
	}

	return (c == 'Y' || c == 'y');
}

char getLetter() {
	char c;

	cin >> c;		cin.ignore(80, '\n');

	while (c < 'A' || c >'Z' && c < 'a' || c > 'z') {
		cout << c << " is NOT a letter. Try again: ";
		cin >> c;		cin.ignore(80, '\n');
	}

	return c;
}