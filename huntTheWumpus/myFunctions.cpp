#include "myHeader.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void printStringArr(const string a[], int n, ostream &os) {
	for (int i = 0; i < n; i++)
		os << "\n" << a[i];
}

void printMenu() {
	cout
		<< "\n\t1] View Instructions"
		<< "\n\t2] View Statistics"
		<< "\n\t3] Play Game"
		<< "\n\t4] Exit Program";
}

int getIntInRange(int start, int end) {
	int x = getInt();

	while (x < start || x > end) {
		cout
			<< "\a\tYour number must be "
			<< (x < start ? "greater" : "less")
			<< " than or equal to "
			<< (x < start ? start : end)
			<< ". \n\tTry again: ";
		x = getInt();
	}

	return x;
}

int getInt() {
	double x = getNum();

	while (int(x) != x) {
		cout << "\a\tYour number is not an integer! \n\tTry Again: ";
		x = getNum();
	}

	return int(x);
}

double getNum() {
	double x;

	while (!(cin >> x)) {
		cin.clear();	cin.ignore(30, '\n');
		cout << "\a\tPlease no inapropriate characters! \n\tTry again: ";
	}
	cin.ignore(80, '\n');

	return x;
}

void loadStringArrayFromFile(string a[], int n, ifstream &ifs, bool &isLoaded) {
	for (int i = 0; i < n; i++)
		getline(ifs, a[i]);

	isLoaded = true;
}