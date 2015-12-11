#include "myFunctions.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//  definitions DONE

void printTitle(const string a[], int n, ostream &os) {      //   DONE
	for (int i = 0; i < n; i++)
		os << "\n\t" << a[i];
}

void printArr(const double a[], int n, int epl, ostream &os) {   //   DONE
	for (int i = 0; i < n; i++)
		os << a[i] << (i % epl == epl - 1 || i == n - 1 ? "\n" : "\t");
}

void printStats(const double a[], int n, ostream &os) {      //   DONE
	cout
		<< "\n\t*** The highest score is: " << a[getIndexOfMax(a,n)]
		<< "\n\t*** The lowest  score is: " << a[getIndexOfMin(a, n)]
		<< "\n\t*** The average score is: " << getAvg(a, n);
}

int loadScores(double a[], int n) {   //   DONE
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


double getNumLessThan(double n) {    //   DONE
	double x = getNum();

	while (x > n) {
		cout << "\tInvalid score. Score cannot be more than " << n << ". Try again: ";
		x = getNum();
	}

	return x;
}

double getNum() {   //   DONE
	double x;

	while (!(cin >> x)) {
		cin.clear();	cin.ignore(30, '\n');
		cout << "\tPlease no letters. Try again: ";
	}
	cin.ignore(80, '\n');

	return x;
}

int getIndexOfMax(const double a[], int n) { //   DONE
	int indexOfMax = 0;

	for (int i = 0; i < n; i++)
		if (a[i] > a[indexOfMax])
			indexOfMax = i;

	return indexOfMax;
}

int getIndexOfMin(const double a[], int n) { //   DONE
	int indexOfMin = 0;

	for (int i = 0; i < n; i++)
		if (a[i] < a[indexOfMin])
			indexOfMin = i;

	return indexOfMin;
}

double getAvg(const double a[], int n) { //   DONE
	double total = 0;

	for (int i = 0; i < n; i++)
		total += a[i];

	return total / n;
}