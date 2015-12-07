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

void load5(int a[], int n) {      //   DONE
	for (int i = 0; i < n; i++)
		a[i] = 5;
}

void loadEven(int a[], int n) {
	for (int i = 0; i < n; i++)
		a[i] = (i + 1) * 2;
}

void loadOdd(int a[], int n) {
	for (int i = 0; i < n; i++)
		a[i] = i * 2 + 1;
}

void loadSq(int a[], int n) {
	for (int i = 0; i < n; i++)
		a[i] = (i + 1) * (i + 1);
}

//  Pre Condition:  n is the size of the array
// Post Condition:  Loads the array with the first n consecutive prime numbers
void loadPrime(int a[], int n) {
	int currentNum = 2;
	for (int i = 0; i < n; i++) {
		while (!isPrime(currentNum))
			currentNum++;
		a[i] = currentNum;
		currentNum++;
	}
}

bool isPrime(int x){   //    DONE
	for (int i = 2; i * i <= x; i++)
		if (x % i == 0)
			return false;
	return true;
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

string connectFileStream() {
	string filename;
	ofstream ofs;
	
	getline(cin >> ws, filename);
	ofs.open(filename);

	while (ofs.fail()) {
		cout << "Unable to open file. Try again: ";
		getline(cin >> ws, filename);
		ofs.open(filename);
	}

	ofs.close();

	return filename;
}