// This program demonstrates use of functions	
// Title: functions
// Programmer: J. Guerra
// Last Modified: Nov 16, 2015

#include <iostream>
using namespace std;

//  prototypes DONE
void printTitle();		
double getNum();		
int getInt();			
int getNonZeroInt();	
double getPos();
double getPosNum();
int getMultOfFive();
char getLetter();
double getInRange(double start, double end);
int getPerfectSquare();
int getMultOfNum(int num);

void main() {
	double holdDbl, start, end;			// start and end for part 5
	int holdInt, num;					// num for part 7
	char holdCh;				

	// print title
	printTitle();

	while (true) {
		////////////////////      Part 1      ////////////////////       DONE

		// print section description
		cout
			<< "Part 1 (get positive number - assume number is entered)\n"
			<< "   **  write and use the getPos() function   **";

		// get input
		cout << "\nEnter a number: ";
		holdDbl = getPos();

		// print output
		cout 
			<< "\tGood! " << holdDbl << " is positive!"
			<< "\n\n~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n\n";

		////////////////////      Part 2      ////////////////////       DONE

		// print section description
		cout
			<< "Part 2 (get positive number - no assumption)\n"
			<< "   **  write and use the getPosNum() function   **";

		// get input
		cout << "\nEnter a number: ";
		holdDbl = getPosNum();

		// print output
		cout 
			<< "\tGood! " << holdDbl << " is positive!"
			<< "\n\n~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n\n";

		////////////////////      Part 3      ////////////////////       DONE

		// print section description
		cout 
			<< "Part 3 (get a multiple of 5)\n"
			<< "   **  write and use getMultOfFive() function    **";

		// get input
		cout << "\nEnter a multiple of 5: ";
		holdInt = getMultOfFive();

		// print output
		cout 
			<< "\tGood! " << holdInt << " is a multiple of 5!"
			<< "\n\n~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n\n";

		////////////////////      Part 4      ////////////////////       DONE

		// print section description
		cout
			<< "Part 4 (get a letter)\n"
			<< "   **  write and use the getLetter() function  **";

		// get input
		cout << "\nEnter a letter: ";
		holdCh = getLetter();

		// print output
		cout 
			<< "\tGood! " << holdCh << " is a letter!"
			<< "\n\n~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n\n";

		////////////////////      Part 5      ////////////////////       DONE

		// print section description
		cout
			<< "Part 5 (get a number between [start, end])\n"
			<< "   **  write and use getInRange(start, end) function   **";

		// get input
		cout << "\nWhat is the starting point? ";
		start = getNum();
		cout << "What is the ending point? ";
		end = getNum();
		cout << "\nEnter a number in the range[" << start << ", " << end << "]: ";
		holdDbl = getInRange(start, end);

		// print output
		cout 
			<< "\tGood! " << holdDbl << " is in [" << start << ", " << end << "]"
			<< "\n\n~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n\n";

		////////////////////      Part 6      ////////////////////       DONE

		// print section description
		cout
			<< "Part 6 (get a perfect square)\n"
			<< "   **  write and use getPerfectSquare() function   **";

		// get input
		cout << "\nEnter a perfect square: ";
		holdInt = getPerfectSquare();

		// print output
		cout 
			<< "\tGood! " << holdInt << " is a perfect square!"
			<< "\n\n~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n\n";

		////////////////////      Part 7      ////////////////////       DONE

		// print section description
		cout
			<< "Part 7 (get a multiple of n)\n"
			<< "   **  write and use getMultOfNum(int) function    **";

		// get input
		cout << "\nWhat number do you want to get a multiple of? ";
		num = getNonZeroInt();
		cout << "\nEnter a multiple of " << num << ": ";
		holdInt = getMultOfNum(num);

		// print output
		cout 
			<< "        Good! " << holdInt << " is a multiple of " << num << "!"
			<< "\n\n~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n\n";
	}
}

void printTitle() {        //   DONE
	cout
		<< "\n\t This program demonstrates how to use functions "
		<< "\n\t                  by J. Guerra                  " << endl << endl;
}

double getNum() {       //   DONE
	double x;

	while (!(cin >> x)) {
		cin.clear();	cin.ignore(30, '\n');
		cout << "Please no letters. Try again: ";
	}	
	cin.ignore(80, '\n');

	return x;
}

int getInt() {       //   DONE
	double x = getNum();

	while (int(x) != x) {
		cout << "Please enter an integer: ";
		x = getNum();
	}
	
	return int(x);
}

int getNonZeroInt() {	       //   DONE
	int x = getInt();

	while (x == 0) {
		cout << "Please enter a non-zero integer: ";
		x = getInt();
	}

	return x;
}

double getPos() {       //   DONE
	double x;

	cin >> x;	cin.ignore(80, '\n');

	while (x < 0) {
		cout << "Please enter a positive number: ";
		cin >> x;	cin.ignore(80, '\n');
	}

	return x;
}

double getPosNum() {       //   DONE
	double x = getNum();

	while (x < 0) {
		cout << "Please enter a positive number: ";
		x = getNum();
	}

	return x;
}

int getMultOfFive() {       //   DONE
	double x = getNum();

	while (x != int(x) || int(x) % 5 != 0) {
		cout << "Please enter a multiple of 5: ";
		x = getNum();
	}
	
	return int(x);
}

char getLetter() {       //   DONE
	char c;

	cin >> c;		cin.ignore(80, '\n');

	while (c < 'A' || c >'Z' && c < 'a' || c > 'z') {
		cout << c << " is NOT a letter. Try again: ";
		cin >> c;		cin.ignore(80, '\n');
	}

	return c;
}

double getInRange(double start, double end) {       //   DONE
	double x = getNum();

	while (x < start || x > end) {
		cout << x << " is NOT in the range [" << start << ", " << end << "]. Try again: ";
		x = getNum();
	}

	return x;
}

int getPerfectSquare() {       //   DONE
	double x = getNum();
	
	while (x < 0 || sqrt(x) != int(sqrt(x))) {
		cout
			<< (x < 0 ? "Perfect squares cannot be less than 0 \nTherefore, " : "" )
			<< x << " is NOT a perfect square. Try again: ";
		x = getNum();
	}

	return int(x);
}

int getMultOfNum(int num) {       //   DONE
	double x = getNum();

	while (x != int(x) || int(x) % num != 0) {
		cout << "Please enter a multiple of " << num << ": ";
		x = getNum();
	}

	return int(x);
}

/* WHAT I LEARNED */