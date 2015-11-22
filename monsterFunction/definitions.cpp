#include <iostream>
#include <iomanip>
#include "Header.h"
using namespace std;

void printTitle() {
	cout
		<< "\n\t  Sample Monster Function Lab (while, for, switch)  "
		<< "\n\t         includes review of switch as a menu        "
		<< "\n\t     function reusability and \"slave\" functions   "
		<< "\n\t                   by J. Guerra                     "
		<< endl << endl << endl;
}

void printMenu() {
	cout
		<< "\t 1] Average a set of non-negative numbers (sentinel)\n"
		<< "\t 2] Enter a number in a given range\n"
		<< "\t 3] Enter a letter\n"
		<< "\t 4] Enter an integer\n"
		<< "\t 5] Enter a prime number\n"
		<< "\t         (needs \"slave\" function isPrime, calls getIntBiggerThan)\n"
		<< "\t 6] Classify a number as deficient, perfect, or abundant (think strcmp)\n"
		<< "\t 7] Print the ASCII table\n"
		<< "\t 8] End the program\n\n";
}

char getLetter() {
	char c;
	cin >> c;		cin.ignore(80, '\n');

	while (c < 'A' || c >'Z' && c < 'a' || c > 'z') {
		cout << "\t'" << c << "' is NOT a letter! \n\tPlease enter a letter: ";
		cin >> c;		cin.ignore(80, '\n');
	}

	return c;
}

double getNum() {
	double x;

	while (!(cin >> x)) {
		cin.clear();	cin.ignore(30, '\n');
		cout << "\tPlease no inapropriate characters! \n\tTry again: ";
	}
	cin.ignore(80, '\n');

	return x;
}

int getInt() {
	double x = getNum();

	while (int(x) != x) {
		cout << "\tYour number is not an integer! \n\tTry Again: ";
		x = getNum();
	}

	return int(x);
}

int getPosInt() {
	int x = getInt();

	while (x < 1) {
		cout << "Please enter an integer bigger than 0: ";
		x = getInt();
	}

	return x;
}

double getNumInRange(double start, double end) {
	double x = getNum();

	while (x < start || x > end) {
		cout
			<< "\tYour number must be "
			<< (x < start ? "greater" : "less")
			<< " than or equal to "
			<< (x < start ? start : end)
			<< ". \n\tTry again: ";
		x = getNum();
	}

	return x;
}

int getIntInRange(int start, int end) {
	int x = getInt();

	while (x < start || x > end) {
		cout 
			<< "\tYour number must be "
			<< (x < start ? "greater" : "less")
			<< " than or equal to "
			<< (x < start ? start : end)
			<< ". \n\tTry again: ";
		x = getInt();
	}

	return x;
}

int classifyInt(int x) {
	int total = 0;

	for (int i = 1; i < x; i++)
		total += (x % i == 0 ? i : 0);

	return (total > x ? 1 : total < x ? -1 : 0);
}

void printASCII(int x) {
	int const WIDTH_ONE = 4, WIDTH_TWO = 7;

	for (int i = 0; i < 256; i++) {
		cout << setw(WIDTH_ONE) << i << setw(WIDTH_TWO);
		switch (i) {
			case 0:		cout << "NULL";		break;
			case 7:		cout << "\\a";		break;
			case 8:		cout << "\\b";		break;
			case 9:		cout << "\\t";		break;
			case 10:	cout << "\\n";		break;
			case 11:	cout << "\\v";		break;
			case 13:	cout << "\\r";		break;
			default:	cout << char(i);
		}
		cout << (i % x == 3 ? "\n" : "   ||  ");
	}
	cout << "\n\n";
}