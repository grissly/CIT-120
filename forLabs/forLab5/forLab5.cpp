// This program evaluates character array length
// Title: forLab5
// Programmer: J. Guerra
// Last Modified: Nov 6, 2015

/*
(do not skip initial white space)
Use a for loop to find the logical size of a character array.
Assume physical size 80 and use getline to read data into the array.
This lab is an example of a bodyless for loop (do NOT use break)
*/

#include <iostream>
using namespace std;

void main() {
	int length;
	const int SIZE = 80;
	char inputArray[SIZE];

	// print title
	cout
		<< "\n\t      This project uses a for loop to       "
		<< "\n\t find the logical size of a character array "
		<< "\n\t                by J. Guerra                " << endl << endl;

	// loop for testing
	while (true) {
		// input prompt
		cout << "What is your name? ";
		cin.getline(inputArray, SIZE, '\n');

		// process
		for (length = 0; inputArray[length] != '\0'; length++);

		// print result
		cout << "The string length is " << length;

		// separator
		cout << "\n\n~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n\n";
	}
}

/*
In this lab I learned how to use arrays, specifically character arrays. These are declared 
with the following syntax: <elementDataType> <arrayName>[SIZE]; the size MUST be an integer 
literal or a constant integer variable. The style convention is to use a const int.

Since my loop variant served as my counter, I had no need to run code in my loop body. I learned 
that for loops can be useful even with an empty body.

how to do empty body, for loop

I do not believe I have used constant variables in any of my previous labs. Constant variables 
do not change during runtime (ie no value can be asigned to the variable after its declaration), 
however they can be changed by the programmer before compile. This can be extremely useful for 
making code more maintainable (just name a value that is used for math, formatting, sizes, etc; 
if that value needs to be changed later, just change the initialization).

talk about null (\0)
current use is best for java too

*/