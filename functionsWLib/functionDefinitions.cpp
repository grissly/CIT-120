#include <iostream>
using namespace std;

void printTitle() {
	cout
		<< "\n\t This program demonstrates how to use functions "
		<< "\n\t                  by J. Guerra                  " << endl << endl;
}

double getNum() {
	double x;

	while (!(cin >> x)) {
		cin.clear();	cin.ignore(30, '\n');
		cout << "Please no letters. Try again: ";
	}
	cin.ignore(80, '\n');

	return x;
}

int getInt() {
	double x = getNum();

	while (int(x) != x) {
		cout << "Please enter an integer: ";
		x = getNum();
	}

	return int(x);
}

int getNonZeroInt() {	       
	int x = getInt();

	while (x == 0) {
		cout << "Please enter a non-zero integer: ";
		x = getInt();
	}

	return x;
}

double getPos() {       
	double x;

	cin >> x;	cin.ignore(80, '\n');

	while (x <= 0) {
		cout << "Please enter a positive number: ";
		cin >> x;	cin.ignore(80, '\n');
	}

	return x;
}

double getPosNum() {       
	double x = getNum();

	while (x <= 0) {
		cout << "Please enter a positive number: ";
		x = getNum();
	}

	return x;
}

int getMultOfFive() {       
	double x = getNum();

	while (x != int(x) || int(x) % 5 != 0) {
		cout << "Please enter a multiple of 5: ";
		x = getNum();
	}

	return int(x);
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

double getInRange(double start, double end) {       
	double x = getNum();

	while (x < start || x > end) {
		cout << x << " is NOT in the range [" << start << ", " << end << "]. Try again: ";
		x = getNum();
	}

	return x;
}

int getPerfectSquare() {       
	double x = getNum();

	while (x < 0 || sqrt(x) != int(sqrt(x))) {
		cout
			<< (x < 0 ? "Perfect squares cannot be less than 0 \nTherefore, " : "")
			<< x << " is NOT a perfect square. Try again: ";
		x = getNum();
	}

	return int(x);
}

int getMultOfNum(int num) {       
	double x = getNum();

	while (x != int(x) || int(x) % num != 0) {
		cout << "Please enter a multiple of " << num << ": ";
		x = getNum();
	}

	return int(x);
}
