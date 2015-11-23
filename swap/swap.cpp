// this lab demonstarates functions as drivers and a simple swap functions
// file name: swap
// Programmer: J. Guerra
// Last Modified: Nov 23, 2015

#include <iostream>
#include "myHead.h"
using namespace std;

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