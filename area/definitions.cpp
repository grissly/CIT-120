#include <iostream>
#include "Header.h"
using namespace std;

void printTitle() {       //   DONE
	cout
		<< "\n\t              Lab on Overloading Functions              "
		<< "\n\t Calculate the Area of a Circle, Rectangle, or Triangle "
		<< "\n\t                      By J. Guerra                      "
		<< endl << endl;
}

void printMenu() {       //   DONE
	cout
		<< "\n\t 1] Calculate the area of a Circle"
		<< "\n\t 2] Calculate the area of a Rectangle"
		<< "\n\t 3] Calculate the area of a Triangle"
		<< "\n\t 3] Exit Program"
		<< endl << endl << endl;
}

int getIntInRange(int start, int end) {       //   DONE
	int x = getInt();

	while (x < start || x > end) {
		cout
			<< "\a\tYour number must be "
			<< (x < start ? "greater" : "less")
			<< " than or equal to "
			<< (x < start ? start : end)
			<< ". \n\tTry again: ";
		x = getInt();
	}

	return x;
}

int getInt() {       //   DONE
	double x = getNum();

	while (int(x) != x) {
		cout << "\a\tYour number is not an integer! \n\tTry Again: ";
		x = getNum();
	}

	return int(x);
}

double getNum() {       //   DONE
	double x;

	while (!(cin >> x)) {
		cin.clear();	cin.ignore(30, '\n');
		cout << "\a\tPlease no inapropriate characters! \n\tTry again: ";
	}
	cin.ignore(80, '\n');

	return x;
}

double getPosNum() {       //   DONE
	double x = getNum();

	while (x < 0) {
		cout << "\aPositive numbers only please. Try again: ";
		x = getNum();
	}

	return x;
}

double area(double a) {       //   DONE
	return 3.1415926 * a * a;
}

double area(double a, double b) {       //   DONE
	return a * b;
}

double area(double a, double b, double c) {       //   DONE
	double p = (a + b + c) / 2;

	return sqrt(p * (p - a) * (p - b) * (p - c));
}

void getTriangleSides(double &a, double &b, double &c) {       //   DONE
	cout << "Side 1: ";
	a = getPosNum();
	cout << "Side 2: ";
	b = getPosNum();
	cout << "Side 3: ";
	c = getPosNum();

	while (a > b + c || b > a + c || c > a + b) {
		cout
			<< "\aThe sum of two sides of a triangle must be greater than the third side."
			<< "\nTry again.";

		cout << "Side 1: ";
		a = getPosNum();
		cout << "Side 2: ";
		b = getPosNum();
		cout << "Side 3: ";
		c = getPosNum();
	}
}