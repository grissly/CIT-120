// This program prints odd numbers
// Title: forLab1
// Programmer: J. Guerra
// Last Modified: Nov 6, 2015

/*
Ask for the starting point of the range (double).
Ask for the end point of the range (double)
Validate that the end point is greater than the starting point (while loop)

Print on the monitor the ODD numbers between the starting and end points (for loop)
NOTE: For this lab you need only ONE for loop! In that loop have only a plain cout
(no ifs or conditional operator), but you can have an if or a conditional operator BEFORE the lab.

Test your code thoroughly (what if the start point is odd or even or negative or
has decimals or any combination of the previous two). Do a complete test set
before you show me your code.

Organize your thoughts and algorithm, do not make things more complex that they need be.
For this lab you do NOT need to validate if the input is a number or not.
*/

#include <iostream>
using namespace std;

void main() {
	double start, end;

	// print title
	cout
		<< "\n\t This program will output ODD numbers in a user inputed a range. "
		<< "\n\t                           by J. Guerra                          " << endl << endl;

	// loop program for testing
	while (true) {
		// input prompt
		cout << "Enter the starting point of the range (double): ";
		cin >> start;		cin.ignore(50, '\n');
		cout << "Enter the ending point of the range (double): ";
		cin >> end;	 		cin.ignore(50, '\n');
		//validation
		while (start >= end) {
			cout
				<< "Your ending number must be greater than your starting number.\n"
				<< "Please try a new ending number (double): ";
			cin >> end;		cin.ignore(50, '\n');
		}

		// processing
		start += start != int(start);		// ceil function
		start += int(start) % 2 == 0;		// if start is odd, use it, if not increment by one
		for (int i = start; i <= end; i += 2) {
			cout << i << " ";
		}

		// separator
		cout << "\n\n~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n\n";
	}
}

/*
In this lab I learned to properly use the for loop. The for loop is a pre-test loop just like 
the while loop. However, it should be used over the while loop in cases where a variable needs 
to be initialized and updated for each iteration; whereas, the while loop is used in situations 
where the process is repeated until a condition is met.

The while loop has a condition and a body (using this with an updating variable means 
initialization and update to the variable INSIDE the body). Conversely, the for loop has three 
statements in the header: the these are intended to initialize, test, update the variable 
respectively (good style is NOT to intitialize or update the loop variant in the body of the loop). 
Although any statements are legal and optional in the for declaration, good style dictates that 
they only be used for their intended purpose.

The tricky part of this lab was not the for loop (just cout number and update +2 each iteration),
it was setting up the loop with a number initialize to the first odd number in the series. I wrote 
my own form of the ceiling function, then I made the number odd by incrementing if necessary. 
At that point the number was ready to be looped.
*/