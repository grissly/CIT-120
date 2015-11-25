#include <iostream>
using namespace std;

void printTitle() {        //   DONE
	cout
		<< "\n\t This program demonstrates how to use functions "
		<< "\n\t                  by J. Guerra                  " << endl << endl;
}

double getNum() {        //   DONE
	double x;

	while (!(cin >> x)) {
		cin.clear();	cin.ignore(30, '\n');
		cout << "Please no letters. Try again: ";
	}
	cin.ignore(80, '\n');

	return x;
}

int getInt() {        //   DONE
	double x = getNum();

	while (int(x) != x) {
		cout << "Please enter an integer: ";
		x = getNum();
	}

	return int(x);
}

int getNonZeroInt() {	               //   DONE
	int x = getInt();

	while (x == 0) {
		cout << "Please enter a non-zero integer: ";
		x = getInt();
	}

	return x;
}

double getPos() {               //   DONE
	double x;

	cin >> x;	cin.ignore(80, '\n');

	while (x <= 0) {
		cout << "Please enter a positive number: ";
		cin >> x;	cin.ignore(80, '\n');
	}

	return x;
}

double getPosNum() {               //   DONE
	double x = getNum();

	while (x <= 0) {
		cout << "Please enter a positive number: ";
		x = getNum();
	}

	return x;
}

int getMultOfFive() {               //   DONE
	double x = getNum();

	while (x != int(x) || int(x) % 5 != 0) {
		cout << "Please enter a multiple of 5: ";
		x = getNum();
	}

	return int(x);
}

char getLetter() {              //   DONE 
	char c;

	cin >> c;		cin.ignore(80, '\n');

	while (c < 'A' || c >'Z' && c < 'a' || c > 'z') {
		cout << c << " is NOT a letter. Try again: ";
		cin >> c;		cin.ignore(80, '\n');
	}

	return c;
}

double getInRange(double start, double end) {       
	double x = getNum();        //   DONE

	while (x < start || x > end) {
		cout << x << " is NOT in the range [" << start << ", " << end << "]. Try again: ";
		x = getNum();
	}

	return x;
}

int getPerfectSquare() {               //   DONE
	double x = getNum();

	while (x < 0 || sqrt(x) != int(sqrt(x))) {
		cout
			<< (x < 0 ? "Perfect squares cannot be less than 0 \nTherefore, " : "")
			<< x << " is NOT a perfect square. Try again: ";
		x = getNum();
	}

	return int(x);
}

int getMultOfNum(int num) {             //   DONE  
	double x = getNum();

	while (x != int(x) || int(x) % num != 0) {
		cout << "Please enter a multiple of " << num << ": ";
		x = getNum();
	}

	return int(x);
}
