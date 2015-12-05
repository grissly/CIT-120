// This lab demostrates loading and printing full arrays
// File Name: arrays
// Programmer: Josh Guerra
// Last Modified: Dec 3, 2015

#include "myFunctions.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void main() {
	string
		calling = "I am about to call ",
		finished = "Finished loading ";

	int const 
		SIZE_5 = 139,
		SIZE_EVEN = 90,
		SIZE_ODD = 100,
		SIZE_SQ = 42,
		SIZE_PRIME = 120;

	int fives[SIZE_5],
		evens[SIZE_EVEN],
		odds[SIZE_ODD],
		sqs[SIZE_SQ],
		primes[SIZE_PRIME];

	system("color 2f");		// console fun :D | 2 = green background, f = white text

	printTitle();

	////////////////		array of fives		////////////////
	cout << calling << "loadArrayOf5s ..." << endl;
	load5(fives, SIZE_5);
	cout << finished << "loadArrayOf5s ..." << endl;

	cout << calling << "printArray (with the default value for the perLine)..." << endl;
	printArr(fives, SIZE_5);

	system("pause");

	////////////////		 array of evens 		////////////////
	cout << calling << "loadEvenArray ..." << endl;
	loadEven(evens, SIZE_EVEN);
	cout << finished << "loadEvenArray ..." << endl;

	cout << calling << "printArray (with 4 perLine)..." << endl;
	printArr(evens, SIZE_EVEN, 4);

	system("pause");

	////////////////		  array of odds  		////////////////
	cout << calling << "loadOddArray ..." << endl;
	loadOdd(odds, SIZE_ODD);
	cout << finished << "loadOddArray ..." << endl;

	cout << calling << "printArray (with 3 perLine)..." << endl;
	printArr(odds, SIZE_ODD, 3);

	system("pause");

	////////////////		array of squares		////////////////
	cout << calling << "loadPSA ..." << endl;
	loadSq(sqs, SIZE_SQ);
	cout << finished << "loadPSA ..." << endl;

	cout << calling << "printArray (with 1 perLine)..." << endl;
	printArr(sqs, SIZE_SQ, 1);

	system("pause");

	////////////////		array of primes 		////////////////
	cout << calling << "loadPrimeArray ..." << endl;
	loadPrime(primes, SIZE_PRIME);
	cout << finished << "loadPrimeArray ..." << endl;

	cout << calling << "printArray (with 2 perLine)..." << endl;
	printArr(primes, SIZE_PRIME, 2);

	system("pause");

	////////////////		  file output   		////////////////



}
