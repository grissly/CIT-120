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

	string
		calling = "I am about to call ",
		finished = "Finished loading ",
		printing = "Here are the ";

	ofstream oFile;

	system("color 2f");		// console fun :D | 2 = green background, f = white text

	printTitle();
	cout << "\n\n";

	////////////////		array of fives		////////////////
	cout << calling << "loadArrayOf5s ..." << endl;
	load5(fives, SIZE_5);
	cout << finished << "loadArrayOf5s ..." << endl;

	cout << calling << "printArray (with the default value for the perLine)..." << endl;
	printArr(fives, SIZE_5);
	cout << "\n\n";

	system("pause");

	////////////////		 array of evens 		////////////////
	cout << "\n\n" << calling << "loadEvenArray ..." << endl;
	loadEven(evens, SIZE_EVEN);
	cout << finished << "loadEvenArray ..." << endl;

	cout << calling << "printArray (with 4 perLine)..." << endl;
	printArr(evens, SIZE_EVEN, 4);
	cout << "\n\n";

	system("pause");

	////////////////		  array of odds  		////////////////
	cout << "\n\n" << calling << "loadOddArray ..." << endl;
	loadOdd(odds, SIZE_ODD);
	cout << finished << "loadOddArray ..." << endl;

	cout << calling << "printArray (with 3 perLine)..." << endl;
	printArr(odds, SIZE_ODD, 3);
	cout << "\n\n";

	system("pause");

	////////////////		array of squares		////////////////
	cout << "\n\n" << calling << "loadPSA ..." << endl;
	loadSq(sqs, SIZE_SQ);
	cout << finished << "loadPSA ..." << endl;

	cout << calling << "printArray (with 1 perLine)..." << endl;
	printArr(sqs, SIZE_SQ, 1);
	cout << "\n\n";

	system("pause");

	////////////////		array of primes 		////////////////
	cout << "\n\n" << calling << "loadPrimeArray ..." << endl;
	loadPrime(primes, SIZE_PRIME);
	cout << finished << "loadPrimeArray ..." << endl;

	cout << calling << "printArray (with 2 perLine)..." << endl;
	printArr(primes, SIZE_PRIME, 2);
	cout << "\n\n";

	system("pause");

	////////////////		  file output   		////////////////
	cout << endl << "Do you want to output arrays to file? ";
	if (getYorN() == 'Y') {
		cout << endl << "To which file do you want to output the array? ";
		oFile = connectFileStream();

		cout << endl << "\tPrinting..." << endl;

		printTitle(oFile);

		oFile
			<< endl << endl << endl << printing
			<< "first 139 elements of the arrayOf5s, two per line:\n";
		printArr(fives, SIZE_5, 2, oFile);

		oFile
			<< endl << endl << "\t**************************************************"
			<< endl << endl << printing
			<< "first 90 even numbers, two per line:\n";
		printArr(evens, SIZE_EVEN, 2, oFile);

		oFile
			<< endl << endl << "\t**************************************************"
			<< endl << endl << printing
			<< "first 100 odd numbers, three per line:\n";
		printArr(odds, SIZE_ODD, 3, oFile);

		oFile
			<< endl << endl << "\t**************************************************"
			<< endl << endl << printing
			<< "first 42 perfect squares, three per line:\n";
		printArr(sqs, SIZE_SQ, 3, oFile);

		oFile
			<< endl << endl << "\t**************************************************"
			<< endl << endl << printing
			<< "first 120 prime numbers, one per line:\n";
		printArr(primes, SIZE_PRIME, 1, oFile);
		oFile << endl;

		oFile.close();

		cout << "\tDone printing. \n\tThanks for using this program!" << endl << endl;
	}

	system("pause");
}