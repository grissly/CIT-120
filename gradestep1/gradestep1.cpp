// Read in a grade percentage and return a letter grade
// gradestep.exe
// Programmer: J. Guerra
// Last Modified: Oct 7, 2015

#include <iostream>
#include <string>
using namespace std;

void main() {
	double g;

	cout
		<< "          Assign course grade according to this grading scheme: "	<< endl
		<< "                             by H. Delta                        "	<< endl
		<< "                       grade is \"double\" and                    "	<< endl
		<< "            there are no if statements or other variables       "	<< endl
		<< endl << endl
		<< "         [90, 100]: A"	<< endl
		<< "         [80,  90): B"	<< endl
		<< "         [70,  80): C"	<< endl
		<< "         [60,  70): D"	<< endl
		<< "         [ 0,  60): F"	<< endl
		<< endl << endl;

	while (true) {
		cout << "What is the average grade? ";
		cin >> g;	cin.ignore(80, '\n');

		cout << "The letter grade is \'";

		switch ((g >= 90) + (g >= 80) + (g >= 70) + (g >= 60)) {
			case 4:
				cout << "A";
				break;
			case 3:
				cout << "B";
				break;
			case 2:
				cout << "C";
				break;
			case 1:
				cout << "D";
				break;
			default:
				cout << "F";
		}

		cout << "\' because your grade was " << g << "." << endl << endl;
	}

}