#include <iostream>
#include <fstream>
using namespace std;

//  Pre Condition:  os must be a valid open output stream
// Post Condition:  Prints the Title to os
void printTitle(ostream &os = cout);       //  DONE

//  Pre Condition:  n <= to the PHYSICAL size of a[]
// Post Condition:  Initializes the first n elements of a[] with 5 
void load5(int a[], int n);      //  DONE

//  Pre Condition:  n <= to the PHYSICAL size of a[]
// Post Condition:  Initializes the first n elements of a[] with the first n consecutive even numbers starting with 2
void loadEven(int a[], int n);      //  DONE

//  Pre Condition:  n <= to the PHYSICAL size of a[]
// Post Condition:  Initializes the first n elements of a[] with the first n consecutive odd numbers starting with 1
void loadOdd(int a[], int n);      //  DONE

//  Pre Condition:  n <= to the PHYSICAL size of a[]
// Post Condition:  Initializes the first n elements of a[] with the first n consecutive perfect squares
void loadSq(int a[], int n);      //  DONE

//  Pre Condition:  n <= to the PHYSICAL size of a[]
// Post Condition:  Initializes the first n elements of a[] with the first n consecutive prime numbers
void loadPrime(int a[], int n);      //  DONE

//  Pre Condition:  x > 1
// Post Condition:  returns true if x is prime, otherwise returns false
bool isPrime(int x);      //  DONE

//  Pre Condition:  n <= to the LOGICAL size of a[]
//					os must be a valid open output stream
// Post Condition:  Prints the first n elements of a[] to os, epl elements per line
void printArr(const int a[], int n, int epl = 5, ostream &os = cout);      //  DONE

//  Pre Condition:  NONE
// Post Condition:  Returns 'Y' or 'N'
//					Prints descriptive error messages
//					Removes everything from the cin buffer
char getYorN();      //  DONE

//  Pre Condition:  NONE
// Post Condition:  Returns an output file stream object that is connected to filename
//                  sets the value of filename to the file the ofstream was connected to
//					Prints descriptive error messages
//					Removes everything from the cin buffer
ofstream connectFileStream(string &filename);      //  DONE