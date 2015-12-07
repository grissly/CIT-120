#include "myFunctions.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void printTitle(ostream &os) {    //   DONE
	cout
		<< "\n\t This is a lab on completely filled arrays "
		<< "\n\t               By J. Guerra                ";
}

void load5(int a[], int n) {    //   DONE
	for (int i = 0; i < n; i++)
		a[i] = 5;
}


void printArr(const int a[], int n, int epl, ostream &os) {    //   DONE
	for (int i = 0; i < n; i++)
		os << a[i] << (i % epl == epl - 1 || i == n - 1 ? "\n" : "\t");
}

char getYorN() {
	char c;

	cin >> c;	cin.ignore(80, '\n');

	while (c != 'Y' && c != 'y' && c != 'N' && c != 'n') {
		cout << "Please type Y or N. Try again: ";
		cin >> c;		cin.ignore(80, '\n');
	}

	return (c == 'y' ? 'Y' : c == 'n' ? 'N' : c);	// returns only capitals
}

string getFileName() {
	string filename;
	
	getline(cin >> ws, filename);

	return filename;
}