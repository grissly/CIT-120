// Program isa simple calculator
// action2perform.exe
// Programmer: J. Guerra
// Last Modified: Oct 13, 2015

#include <iostream>
using namespace std;

void main() {
	double num1, num2;
	char a;

	cout
		<< "               Action  Performer       " << endl
		<< "                   Solution            " << endl
		<< "                 By J. Guerra          " << endl
		<< endl << endl

		<< "This program performs the five basic actions                    " << endl
		<< "that the arithmetic operators perform:                          " << endl
		<< "        Addition/Subtraction/Multiplication/Division/Remainder  " << endl
		<< endl << endl;

	while (true) {
		cout << "Action: ";
		cin >> a;   cin.ignore(30, '\n');
		cout << "Give me a number: ";
		cin >> num1;   cin.ignore(30, '\n');
		cout << "Give me another number: ";
		cin >> num2;   cin.ignore(30, '\n');

		// addition
		if (a == 'A' || a == 'a')
			cout << num1 << " + " << num2 << " = " << num1 + num2;

		// subtraction
		else if (a == 'S' || a == 's')
			cout << num1 << " - " << num2 << " = " << num1 - num2;

		// multiplication
		else if (a == 'M' || a == 'm')
			cout << num1 << " * " << num2 << " = " << num1 * num2;

		// division. warning if trying to divide by zero
		else if (a == 'D' || a == 'd') {
			if (num2 == 0)
				cout << "Action cannot be performed. Division by zero is not defined";
			else
				cout << num1 << " / " << num2 << " = " << num1 / num2;
		}

		// remainder. warning if trying to modulo by zero
		else if (a == 'R' || a == 'r') {
			if (num2 == 0)
				cout << "The modulo of zero is not permitted";
			else
				cout << num1 << " % " << num2 << " = " << int(num1) % int(num2);
		}

		// catch unknown action parameters
		else
			cout << "I do not know how to perform this action.";

		// do everytime
		cout << endl << endl << "\t*******************" << endl << endl;
	}
}