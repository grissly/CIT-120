// This lab is on partial arrays
// The program creates an array of student scores and gives analytics on it
// Filename: partialArrays
// Programmer: Josh Guerra
// Last Modified: Dec 7, 2015

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//  Pre Condition:  n is the logical size of a[]
//					os must be a valid open output stream
// Post Condition:  Prints a[] to os
void printTitle(const string a[], int n, ostream &os = cout);

//  Pre Condition:  n is the logical size of a[]
//					os must be a valid open output stream
// Post Condition:  Prints a[] to os, epl elements per line
void printArr(const double a[], int n, int epl = 5, ostream &os = cout);

//  Pre Condition:  n is the size of the array
// Post Condition:  Loads the array with user inputed scores
//					Prints descriptive error messages
//					Removes everything from cin buffer
//					Restores cin object if needed
//					Returns the logical size of the array
int loadScores(double a[], int n);

//  Pre Condition:	NONE
// Post Condition:	Returns a valid number less than n
//					Prints descriptive error messages
//					Removes everything from the cin buffer
//					Restores the cin object if needed
double getNumLessThan(double n);

//  Pre Condition:	NONE
// Post Condition:	Returns a valid number
//					Prints descriptive error messages
//					Removes everything from the cin buffer
//					Restores the cin object if needed
double getNum();

void main() {
	int const 
		NUM_LINES_TITLE = 4, 
		SIZE_SCORES = 3;

	int scoresLogicalSize;
	double scores[SIZE_SCORES];

	string title[NUM_LINES_TITLE] = {
		"This program loads an array of doubles with students' scores",
		"        using a negative value as the loop's sentinel       ",
		"         setting physical size to 3 for easy testing        ",
		"                       by J. Guerra                         "
	};

	system("color 2f");		// console fun :D | 2 = green background, f = white text

	// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ //

	printTitle(title, NUM_LINES_TITLE);
	cout << endl << endl << endl;

	while (true) {
		cout
			<< "Enter the students' score. Enter a negative value to stop."
			<< "\n\t[Physical size of the array is 3]." 
			<< endl << endl;

		scoresLogicalSize = loadScores(scores, SIZE_SCORES);

		cout
			<< "\n\tDone loading scores"
			<< "\n\tLogical size is: " << scoresLogicalSize
			<< "\n\nHit ENTER to see the array: ";
		cin.get();

		cout << "\n\nNow printing the scores: \n";
		printArr(scores, scoresLogicalSize);
		cout << "\n\t\t=============================================\n\n\n";
	}
}

void printTitle(const string a[], int n, ostream &os) {
	for (int i = 0; i < n; i++)
		os << "\n\t" << a[i];
}

void printArr(const double a[], int n, int epl, ostream &os) {
	for (int i = 0; i < n; i++)
		os << a[i] << (i % epl == epl - 1 || i == n - 1 ? "\n" : "\t");
}

int loadScores(double a[], int n) {
	double score = 1;		// temp value for loop condition
	int count;

	for (count = 0; count < n && score > 0; count++) {
		cout << "Enter score for student " << count + 1 << ": ";
		score = getNumLessThan(100);
		if (score >= 0) 
			a[count] = score;
		else
			count--;
	}

	if (count == n)
		cout << "Array FULL! Cannot accept any more scores\n";

	return count;
}


double getNumLessThan(double n) {
	double x = getNum();

	while (x > 100) {
		cout << "\tInvalid score. Score cannot be more than 100. Try again: ";
		x = getNum();
	}

	return x;
}

double getNum() {
	double x;

	while (!(cin >> x)) {
		cin.clear();	cin.ignore(30, '\n');
		cout << "\tPlease no letters. Try again: ";
	}
	cin.ignore(80, '\n');

	return x;
}