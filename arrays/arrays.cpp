// This lab demostrates loading and printing full arrays
// File Name: arrays
// Programmer: Josh Guerra
// Last Modified: Dec 3, 2015

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//  Pre Condition:  NONE
// Post Condition:  Prints the Title to the console
void printTitle();

//  Pre Condition:  NONE
// Post Condition:  Loads the array with 5 for each element
void load5s(int a[], int n);

//  Pre Condition:  NONE
// Post Condition:  Prints a[] to os, epl elements per line
void printArr(const int a[], int n, int epl = 5, ostream &os = cout);

void main() {
	string
		calling = "I am about to call ",
		finished = "Finished loading ";
	int const SIZE_5s = 139;
	int fives[SIZE_5s];

	system("color 2f");		// console fun :D | 2 = green background, f = white text

	printTitle();

	cout << calling << "loadArrayOf5s ..." << endl;
	load5s(fives, SIZE_5s);
	cout << finished << "loadArrayOf5s ..." << endl;

	cout << calling << "printArray (with the default value for the perLine)..." << endl;
	printArr(fives, SIZE_5s);

	system("pause");
}

void printTitle() {    //   DONE
	cout
		<< "\n\t This is a lab on completely filled arrays "
		<< "\n\t               By J. Guerra                "
		<< endl << endl;
}

void load5s(int a[], int n) {    //   DONE
	for (int i = 0; i < n; i++)
		a[i] = 5;
}


void printArr(const int a[], int n, int epl, ostream &os) {    //   DONE
	for (int i = 0; i < n; i++)
		os << a[i] << (i % epl == epl - 1 || i == n -1 ? "\n" : "\t");
}

