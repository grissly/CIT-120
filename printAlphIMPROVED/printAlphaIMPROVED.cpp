// demonstrates optional arguements
// program prints the alphabetic characters
// Project Name: printAlphaIMPROVED
// Programmer: J. Guerra
// Last Modified: Dec 2, 2015

#include <iostream>
using namespace std;

//  Pre Condition:  NONE
// Post Condition:  Prints the Title to the console
void printTitle();

//  Pre Condition:  s < e
//					s, e should be letters of the same case 
// Post Condition:  Prints alphabet from [s, e] with cpl characters per line
void printAlpha(char s = 'A', char e = 'Z', int cpl = 5);

//  Pre Condition:	NONE
// Post Condition:	Returns 'Y', 'y', 'N', or 'n'
//					Prints descriptive error message
//					Removes everything from the cin buffer
char getYorN();

//  Pre Condition:	None
// Post Condition:	Returns a valid letter
//					Prints error message with incorrect input
//					Clears keyboard buffer
char getLetter();

//  Pre Condition:	s is an alphabetic letter
// Post Condition:	Returns a valid letter after s and of the same case
//					Prints descriptive error messages
//					Clears keyboard buffer
char getE(char s);

//  Pre Condition:	c is an alphabetic letter
// Post Condition:	Returns true if c is uppercase, false otherwise
bool isUp(char c);

//  Pre Condition:	s is an alphabetic letter
// Post Condition:	Returns a valid letter that matches the case of s
//					Prints descriptive error messages
//					Clears keyboard buffer
char getMatching(char s);

void main() {
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

	////////////           printAlpha('C', 'W')         ////////////
	cout
		<< "Calling \"printAlpha('C', 'W')\"\n"
		<< "\tPrinting from C to W, 5 characters per line:\n\n";
	printAlpha('C', 'W');

	////////////         printAlpha('D', 'Y', 3)        ////////////
	cout
		<< "Calling \"printAlpha('D', 'Y', 3)\"\n"
		<< "\tPrinting from D to Y, 3 characters per line:\n\n";
	printAlpha('D', 'Y', 3);

	////////////              User Testing              ////////////
	cout << "Do you want to choose the arguments? ";
	c = getYorN();

	while (c == 'Y' || c == 'y') {
		cout << endl << endl << "Peoples' choice! ;)" << endl;

		cout << "\tEnter the starting letter: ";
		s = getLetter();
		cout << "\tEnter the ending letter: ";
		e = getE(s);
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
		c = getYorN();
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

char getYorN() {
	char c;

	cin >> c;	cin.ignore(80, '\n');

	while (c != 'Y' && c != 'y' && c != 'N' && c != 'n') {
		cout << "Please type Y or N. Try again: ";
		cin >> c;		cin.ignore(80, '\n');
	}

	return c;
}

char getLetter() {
	char c;

	cin >> c;		cin.ignore(80, '\n');

	while (c < 'A' || c >'Z' && c < 'a' || c > 'z') {
		cout << '\t' << c << " is NOT a letter. Try again: ";
		cin >> c;		cin.ignore(80, '\n');
	}

	return c;
}

char getE(char s) {
	char e = getMatching(s);
	
	while (e < s) {
		cout
			<< "\tEnd letter must be after starting letter."
			<< endl << "\tTry again: ";
		e = getMatching(s);
	}
	return e;
}

char getMatching(char s) {
	char e = getLetter();
	bool sCase = isUp(s);

	if (isUp(e) != sCase) {
		cout 
			<< "\tPlease enter a"
			<< (sCase == 0 ? " LOWER" : "n UPPER")
			<< " case letter. Try again: ";
		e = getLetter();
	}
	return e;
}

bool isUp(char c) {
	return c >= 'A' && c <= 'Z';
}