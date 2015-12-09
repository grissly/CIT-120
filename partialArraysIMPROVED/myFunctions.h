#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//  Pre Condition:  0 <= n <= to the LOGICAL size of a[]
//					os must be a valid open output stream
// Post Condition:  Prints the first n elements of a[] to os, each string on a new line and tabbed in 8 spaces
void printTitle(const string a[], int n, ostream &os = cout);      //   DONE

//  Pre Condition:  0 < n <= to the LOGICAL size of a[]
//					os must be a valid open output stream
// Post Condition:  Prints the first n elements of a[] to os, epl elements per line
void printArr(const double a[], int n, int epl = 5, ostream &os = cout);      //   DONE

//  Pre Condition:  0 < n <= to the LOGICAL size of a[]
//					os must be a valid open output stream
// Post Condition:  Prints the max, min, and avg values of the first n elements of a[] to os
void printStats(const double a[], int n, ostream &os = cout);      //   DONE

//  Pre Condition:  0 < n <= to the PHYSICAL size of a[]
// Post Condition:  Loads the array with user inputed scores that are less than 100
//					Prints descriptive error messages
//					Removes everything from cin buffer
//					Restores cin object if needed
//					Returns the logical size of the array
int loadScores(double a[], int n);      //   DONE

//  Pre Condition:	NONE
// Post Condition:	Returns a valid number less than n
//					Prints descriptive error messages
//					Removes everything from the cin buffer
//					Restores the cin object if needed
double getNumLessThan(double n);      //   DONE

//  Pre Condition:	NONE
// Post Condition:	Returns a valid number
//					Prints descriptive error messages
//					Removes everything from the cin buffer
//					Restores the cin object if needed
double getNum();      //   DONE

//  Pre Condition:	0 < n <= to the LOGICAL size of a[]
// Post Condition:	Returns the index of largest value of the first n elements of a[]  
int getIndexOfMax(const double a[], int n);     //   DONE

//  Pre Condition:	0 < n <= to the LOGICAL size of a[]  
// Post Condition:	Returns the index of smallest value of the first n elements of a[]   
int getIndexOfMin(const double a[], int n);     //   DONE

//  Pre Condition:	0 < n <= to the LOGICAL size of a[]  
// Post Condition:	Returns the average value of the first n elements of a[]   
double getAvg(const double a[], int n);     //   DONE