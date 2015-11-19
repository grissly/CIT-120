#include <iostream>
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