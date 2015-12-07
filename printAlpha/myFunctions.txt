#include <iostream>
#include "myHeader.h"
using namespace std;

void printTitle() {      //  DONE
	cout
		<< "\n\t              Lab on Optional Arguments              "
		<< "\n\t                     By J. Guerra                    "
		<< endl << endl << endl;
}

void printAlpha(char s, char e, int cpl) {     //  DONE
	int count = 0;

	for (char l = s; l <= e; l++)
		cout << l << (count++ % cpl == cpl - 1 ? "\n" : "\t");
	cout << endl << endl;
}

char getYorN() {     //  DONE
	char c;

	cin >> c;	cin.ignore(80, '\n');

	while (c != 'Y' && c != 'y' && c != 'N' && c != 'n') {
		cout << "Please type Y or N. Try again: ";
		cin >> c;		cin.ignore(80, '\n');
	}

	return c;
}