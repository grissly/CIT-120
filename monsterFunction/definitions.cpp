#include <iostream>
#include <string>
#include <iomanip>
#include "Header.h"
using namespace std;

//     DONE
void printTitle() {      //     DONE
	cout
		<< "\n\t  Sample Monster Function Lab (while, for, switch)  "
		<< "\n\t         includes review of switch as a menu        "
		<< "\n\t     function reusability and \"slave\" functions   "
		<< "\n\t                   by J. Guerra                     "
		<< endl << endl << endl;
}

//     DONE
void printMenu() {     //     DONE
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

//     DONE
char getLetter() {     //     DONE
	char c;
	cin >> c;		cin.ignore(80, '\n');

	while (c < 'A' || c >'Z' && c < 'a' || c > 'z') {
		cout << "\t'" << c << "' is NOT a letter! \n\tPlease enter a letter: ";
		cin >> c;		cin.ignore(80, '\n');
	}

	return c;
}

//     DONE
double getNum() {     //     DONE
	double x;

	while (!(cin >> x)) {
		cin.clear();	cin.ignore(30, '\n');
		cout << "\tPlease no inapropriate characters! \n\tTry again: ";
	}
	cin.ignore(80, '\n');

	return x;
}

//     DONE
int getInt() {     //     DONE
	double x = getNum();

	while (int(x) != x) {
		cout << "\tYour number is not an integer! \n\tTry Again: ";
		x = getNum();
	}

	return int(x);
}

//     DONE
int getPosInt() {     //     DONE
	int x = getInt();

	while (x < 1) {
		cout << "Please enter an integer bigger than 0: ";
		x = getInt();
	}

	return x;
}

double getAvg() {
	double total = 0;
	int count = 0, x = 0;

	while (x >= 0) {
		count++;
		total += x;

		cout << "Please enter the " << count << findOrdinalSuffix(count) << " number: ";
		x = getInt();
	}

	if (count == 1)
		return -1.0;
	else
		return total / (count - 1);
}

//     DONE
double getNumInRange(double start, double end) {     //     DONE
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

//     DONE
int getIntInRange(int start, int end) {     //     DONE
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

//     DONE
int classifyInt(int x) {     //     DONE
	int total = 0;

	for (int i = 1; i < x; i++)
		total += (x % i == 0 ? i : 0);

	return (total > x ? 1 : total < x ? -1 : 0);
}

void printASCII(int cpl) {    //   ???
	int const WIDTH_ONE = 4, WIDTH_TWO = 7;

	for (int i = 0; i < 256; i++) {
		cout << setw(WIDTH_ONE) << i << setw(WIDTH_TWO);
		switch (char(i)) {   // no majic numbers - don't look at the ascii table
		case '\0':	cout << "NULL";		break;
		case '\a':	cout << "\\a";		break;
		case '\b':	cout << "\\b";		break;
		case '\t':	cout << "\\t";		break;
		case '\n':	cout << "\\n";		break;
		case '\v':	cout << "\\v";		break;
		case '\r':	cout << "\\r";		break;
		default:	cout << char(i);
		}
		cout << (i % cpl == cpl - 1 ? "\n" : "   ||  ");
	}
	cout << "\n\n";
}

int getPrime() {
	int x = getIntMoreThan(2);

	while (!isPrime(x)) {
		cout << x << " is not prime. Try again: ";
		x = getIntMoreThan(2);
	}

	return x;
}

bool isPrime(int x){
	for (int i = 2; i * i <= x; i++)
		if (x % i == 0)
			return false;

	return true;
}

int getIntMoreThan(int n) {
	int x = getInt();

	while (x <= n) {
		cout << "\tPlease enter an integer bigger than 1: ";
		x = getInt();
	}

	return x;
}

string findOrdinalSuffix(int count) {
	return
		count % 10 == 1 && count % 100 != 11 ? "st" :
		count % 10 == 2 && count % 100 != 12 ? "nd" :
		count % 10 == 3 && count % 100 != 13 ? "rd" : "th";
}