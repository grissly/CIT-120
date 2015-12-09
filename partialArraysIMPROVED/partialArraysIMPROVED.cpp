// This lab is on partial arrays
// The program creates an array of student scores and gives analytics on it
// Filename: partialArrays
// Programmer: Josh Guerra
// Last Modified: Dec 8, 2015

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//  Pre Condition:  n <= to the LOGICAL size of a[]
//					os must be a valid open output stream
// Post Condition:  Prints the first n elements of a[] to os, each string on a new line and tabbed in 8 spaces
void printTitle(const string a[], int n, ostream &os = cout);

//  Pre Condition:  n <= to the LOGICAL size of a[]
//					os must be a valid open output stream
// Post Condition:  Prints the first n elements of a[] to os, epl elements per line
void printArr(const double a[], int n, int epl = 5, ostream &os = cout);

//  Pre Condition:  n <= to the PHYSICAL size of a[]
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

//  Pre Condition:	n <= to the LOGICAL size of a[]
//					n > 0
// Post Condition:	Returns the index of largest element
int getIndexOfMax(double a[], int n);

//  Pre Condition:	n <= to the LOGICAL size of a[]
//					n > 0
// Post Condition:	Returns the index of smallest element
int getIndexOfMin(double a[], int n);

//  Pre Condition:	n is LOGICAL size of a[]
//					n > 0
// Post Condition:	Returns the average of all elements
double getAvg(double a[], int n);

void main() {
	int const
		NUM_LINES_TITLE = 5,
		SIZE_SCORES = 30;

	int scoresLogicalSize, 
		maxIndex, minIndex;

	double 
		scores[SIZE_SCORES], 
		avg;

	string title[NUM_LINES_TITLE] = {
		"This program loads an array of doubles with students' scores",
		"        using a negative value as the loop's sentinel       ",
		"                 calculate basic statistics                 ",
		"     setting physical size to 30 and default per line 5     ",
		"                       by J. Guerra                         "
	};

	system("color 2f");		// console fun :D | 2 = green background, f = white text

	// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ //

	printTitle(title, NUM_LINES_TITLE);
	cout << endl << endl << endl;

	while (true) {
		cout
			<< "Enter the students' score. Enter a negative value to stop."
			<< "\n\t[Physical size of the array is " << SIZE_SCORES << "]."
			<< endl << endl;

		scoresLogicalSize = loadScores(scores, SIZE_SCORES);

		cout
			<< "\n\tDone loading scores"
			<< "\n\tLogical size is: " << scoresLogicalSize
			<< "\n\nHit ENTER to see the array: ";
		cin.get();

		cout << "\n\nNow printing the scores and stats: \n";
		printArr(scores, scoresLogicalSize);

		if (scoresLogicalSize) {
			maxIndex = getIndexOfMax(scores, scoresLogicalSize);
			minIndex = getIndexOfMin(scores, scoresLogicalSize);
			avg = getAvg(scores, scoresLogicalSize);

			cout
				<< "\n\t*** The highest score is: " << scores[maxIndex]
				<< "\n\t*** The lowest  score is: " << scores[minIndex]
				<< "\n\t*** The average score is: " << avg;
		}
		else
			cout << "\n\tThe array is empty!";

		cout << "\n\n\t\t=============================================\n\n\n";
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

int getIndexOfMax(double a[], int n) {
	int indexOfMax = 0;

	for (int i = 0; i < n; i++) 
		if (a[i] > a[indexOfMax])
			indexOfMax = i;

	return indexOfMax;
}

int getIndexOfMin(double a[], int n) {
	int indexOfMin = 0;

	for (int i = 0; i < n; i++)
		if (a[i] < a[indexOfMin])
			indexOfMin = i;

	return indexOfMin;
}

double getAvg(double a[], int n) {
	double total = 0;

	for (int i = 0; i < n; i++)
		total += a[i];

	return total / n;
}