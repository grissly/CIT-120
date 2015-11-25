// this lab demonstarates functions as drivers and a simple swap functions
// file name: swap
// Programmer: J. Guerra
// Last Modified: Nov 23, 2015

#include <iostream>
using namespace std;

void printTitle();
double getNum();
void mySwap(double &x, double &y);

void main() {
	double x, y;

	while (true) {
		printTitle();

		cout << "Enter a number for x: ";
		x = getNum();
		cout << "Enter a number for y: ";
		y = getNum();

		cout
			<< "Before the call : x = " << x << " y = " << y << endl
			<< "I am calling the \"mySwap\" function ..." << endl;

		mySwap(x, y);

		cout << "After the call : x = " << x << " y = " << y << endl;

		cout 
			<< endl << endl 
			<< "Note: The debugging couts are in the main." 
			<< endl << endl << endl;

		system("pause");     system("cls");
	}
}

void printTitle() {
	cout
		<< "\n\t\t Swap function lab "
		<< "\n\t\t   By J. Guerra    "
		<< endl << endl;
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

void mySwap(double &x, double &y) {
	double temp = x;
	x = y;
	y = temp;
}

