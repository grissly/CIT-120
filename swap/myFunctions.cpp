#include <iostream>
#include "myHead.h"
using namespace std;

void printTitle() {
	cout
		<< "\n\t\t Swap function lab "
		<< "\n\t\t   By J. Guerra    "
		<< endl << endl;
}

void mySwap(double &x, double &y) {
	double temp = x;
	x = y;
	y = temp;
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