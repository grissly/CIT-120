// This program demonstrates use of functions	
// Title: functions
// Programmer: J. Guerra
// Last Modified: Nov 6, 2015

#include <iostream>
using namespace std;

double getNum();		// not required for lab. helper function
int getInt();			// not required for lab. helper function
double getPos();
double getPosNum();
int getMultOfFive();
char getLetter();
double getInRange(double start, double end);
int getPerfectSquare();
int getMultOfNum(int num);

void main() {
	double holdDbl;
	int holdInt;
	char holdCh;
	double start, end;		// for part 5
	int num;				// for part 7

	// print title
	cout
		<< "\n\t This program demonstrates how to use functions "
		<< "\n\t                  by J. Guerra                  " << endl << endl;

	while (true) {
		/////////////////////////////////////////// Part 1 ///////////////////////////////////////////

		// print section description
		cout
			<< "Part 1 (get positive number - assume number is entered)\n"
			<< "   **  write and use the getPos() function   **";

		// get input
		holdDbl = getPos();

		// print output
		cout << "\tGood! " << holdDbl << " is positive!";

		// separator
		cout << "\n\n~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n\n";

		/////////////////////////////////////////// Part 2 ///////////////////////////////////////////

		// print section description
		cout
			<< "Part 2 (get positive number - no assumption)\n"
			<< "   **  write and use the getPosNum() function   **";

		// get input
		holdDbl = getPosNum();

		// print output
		cout << "\tGood! " << holdDbl << " is positive!";

		// separator
		cout << "\n\n~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n\n";

		/////////////////////////////////////////// Part 3 ///////////////////////////////////////////

		// print section description
		cout 
			<< "Part 3 (get a multiple of 5)\n"
			<< "   **  write and use getMultOfFive() function    **";

		// get input
		holdInt = getMultOfFive();

		// print output
		cout << "\tGood! " << holdInt << " is a multiple of 5!";

		// separator
		cout << "\n\n~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n\n";

		/////////////////////////////////////////// Part 4 ///////////////////////////////////////////

		// print section description
		cout
			<< "Part 4 (get a letter)\n"
			<< "   **  write and use the getLetter() function  **";

		// get input
		holdCh = getLetter();

		// print output
		cout << "\tGood! " << holdCh << " is a letter!";

		// separator
		cout << "\n\n~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n\n"; 

		/////////////////////////////////////////// Part 5 ///////////////////////////////////////////

		// print section description
		cout
			<< "Part 5 (get a number between [start, end])\n"
			<< "   **  write and use getInRange(start, end) function   **";

		// get input for function arguments
		cout << "\nWhat is the starting point? ";
		start = getNum();
		cout << "What is the ending point? ";
		end = getNum();
		


		// print output
		cout << "\tGood! " << getInRange(start, end) << " is in [" << start << ", " << end << "]";

		// separator
		cout << "\n\n~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n\n"; 

		/////////////////////////////////////////// Part 6 ///////////////////////////////////////////

		// print section description
		cout
		<< "Part 6 (get a perfect square)\n"
		<< "   **  write and use getPerfectSquare() function   **";

		// print output
		cout << "\tGood! " << getPerfectSquare() << " is a perfect square!";

		// separator
		cout << "\n\n~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n\n";

		/////////////////////////////////////////// Part 7 ///////////////////////////////////////////

		// print section description
		cout
		<< "Part 7 (get a multiple of n)\n"
		<< "   **  write and use getMultOfNum(int) function    **";

		// get input for function arguments
		cout << "\nWhat number do you want to get a multiple of? ";
		num = getInt();

		// print output
		cout << "        Good! " << getMultOfNum(num) << " is a multiple of " << num << "!";

		// separator
		cout << "\n\n~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n\n";
	}
}

double getNum() {
	double x;

	// get input
	while (!(cin >> x)) {
		cin.clear();	cin.ignore(30, '\n');
		cout << "Please no letters. Try again: ";
	}	cin.ignore(80, '\n');

	// return input
	return x;
}

int getInt() {
	double x;

	// get input
	x = getNum();

	// test input
	while (int(x) != x) {
		cout << "Please enter an integer: ";
		x = getNum();
	}

	// return input
	return x;
}

double getPos() {
	double x;

	// get input
	cout << "\nEnter a number: ";
	cin >> x;	cin.ignore(80, '\n');

	// test input
	while (x < 0) {
		cout << "Please enter a positive number: ";
		cin >> x;	cin.ignore(80, '\n');
	}

	// return input
	return x;
}

double getPosNum() {
	double x;

	// get input
	cout << "\nEnter a number: ";
	x = getNum();

	// test input
	while (x < 0) {
		cout << "Please enter a positive number: ";
		x = getNum();
	}

	// return input
	return x;
}

int getMultOfFive() {
	/* IDE may complain about returning double while function return type 
	is int. Factors are only whole number values, thus validation will insure 
	that implicit demotion will not change the value of returned number. */
	double x;

	// get input
	cout << "\nEnter a multiple of 5: ";
	x = getNum();

	// test input
	while (x != int(x) || int(x) % 5 != 0) {
		cout << "Please enter a multiple of 5: ";
		x = getNum();
	}

	// return input
	return x;
}

char getLetter() {
	char c;

	// get input
	cout << "\nEnter a letter: ";
	cin >> c;		cin.ignore(80, '\n');

	// test input
	while (c < 'A' || c >'Z' && c < 'a' || c > 'z') {
		cout << "Please enter a letter: ";
		cin >> c;		cin.ignore(80, '\n');
	}

	// return input
	return c;
}

double getInRange(double start, double end) {
	double x;

	// get input
	cout << "\nEnter a number in the range[" << start << ", " << end << "]: ";
	x = getNum();

	// test input
	while (x < start || x > end) {
		cout << x << " is NOT in the range [" << start << ", " << end << "]. Try again: ";
		x = getNum();
	}

	// return input
	return x;
}

int getPerfectSquare() {
	/* IDE may complain about returning double while function return type is int. 
	Perfect squares are only whole number values, thus validation will insure
	that implicit demotion will not change the value of returned number. */
	double x;

	// get input
	cout << "\nEnter a perfect square: ";		x = getNum();
	
	// test input
	while (x < 1 || sqrt(x) != int(sqrt(x))) {
		cout
			<< (x < 1 ? "Perfect squares cannot be less than 1 \nTherefore, " : "" )
			<< x << " is NOT a perfect square. Try again: ";
		x = getNum();
	}

	// return input
	return x;
}

int getMultOfNum(int num) {
	/* IDE may complain about returning double while function return type
	is int. Factors are only whole number values, thus validation will insure
	that implicit demotion will not change the value of returned number. */
	double x;

	// get input
	cout << "\nEnter a multiple of " << num << ": ";
	x = getNum();

	// test input
	while (x != int(x) || int(x) % num != 0) {
		cout << "Please enter a multiple of " << num << ": ";
		x = getNum();
	}

	// return input
	return x;
}



/* WHAT I LEARNED */