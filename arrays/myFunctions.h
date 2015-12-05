#include <iostream>
#include <fstream>
using namespace std;

//  Pre Condition:  NONE
// Post Condition:  Prints the Title to the console
void printTitle();

//  Pre Condition:  n is the size of the array
// Post Condition:  Loads the array with 5 for each element
void load5(int a[], int n);

//  Pre Condition:  n is the size of the array
// Post Condition:  Loads the array with the first n consecutive even numbers
void loadEven(int a[], int n);

//  Pre Condition:  n is the size of the array
// Post Condition:  Loads the array with the first n consecutive odd numbers
void loadOdd(int a[], int n);

//  Pre Condition:  n is the size of the array
// Post Condition:  Loads the array with the first n consecutive perfect squares
void loadSq(int a[], int n);

//  Pre Condition:  n is the size of the array
// Post Condition:  Loads the array with the first n consecutive prime numbers
void loadPrime(int a[], int n);

//  Pre Condition:  NONE
// Post Condition:  Prints a[] to os, epl elements per line
void printArr(const int a[], int n, int epl = 5, ostream &os = cout);