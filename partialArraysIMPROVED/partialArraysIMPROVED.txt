// This lab is on partial arrays
// The program creates an array of student scores and gives analytics on it
// Filename: partialArrays
// Programmer: Josh Guerra
// Last Modified: Dec 9, 2015

#include "myFunctions.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void main() {   //  main done
	int scoresLogicalSize;
	int const
		NUM_LINES_TITLE = 5,
		SIZE_SCORES = 30;

	double scores[SIZE_SCORES];

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

		// have a printStat function
		if (scoresLogicalSize > 0) {
			printArr(scores, scoresLogicalSize);
			printStats(scores, scoresLogicalSize);
		}
		else 
			cout << "\n\tThe array is empty!";

		cout << "\n\n\t\t=============================================\n\n\n";
	}
}