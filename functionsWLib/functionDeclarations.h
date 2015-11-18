#include <iostream>
using namespace std;

//  Pre Condition: NONE
// Post Condition: Prints the Title to the console
void printTitle();

//  Pre Condition: NONE
// Post Condition:	Returns a valid number
//					Prints error if letter or symbol is entered
//					Clears keyboard buffer
double getNum();

//  Pre Condition:	NONE
// Post Condition:	Returns a valid Integer
//					Prints error if letter or symbol is entered
//					Prints error if non-integer number
//					Clears keyboard buffer
int getInt();

//  Pre Condition:	NONE
// Post Condition:	Returns a valid Non-Zero Integer
//					Prints error if letter or symbol is entered
//					Prints error if non-integer number
//					Prints error if zero is entered
//					Clears keyboard buffer
int getNonZeroInt();

//  Pre Condition:	None
// Post Condition:	Returns a valid positive number
//					will crash program with non-numeric input
//					Prints error if number less than or equal to zero
//					Clears keyboard buffer
double getPos();

//  Pre Condition:	None
// Post Condition:	Returns a valid positive number
//					Prints error if letter or symbol is entered
//					Prints error if number less than or equal to zero
//					Clears keyboard buffer
double getPosNum();

//  Pre Condition:	None
// Post Condition:	Returns a valid multiple of 5
//					Prints error if letter or symbol is entered
//					Prints error if number is not a multiple of 5
//					Clears keyboard buffer
int getMultOfFive();

//  Pre Condition:	None
// Post Condition:	Returns a valid letter
//					Prints error message with incorrect input
//					Clears keyboard buffer
char getLetter();

//  Pre Condition:	start must be less than or equal to end
// Post Condition:	Returns a valid number in range [start, end]
//					Prints error if letter or symbol is entered
//					Prints error for input out of range
//					Clears keyboard buffer
double getInRange(double start, double end);

//  Pre Condition:	NONE
// Post Condition:	Returns a valid square
//					Prints error if letter or symbol is entered
//					Prints error if input is less than 1
//					Prints error if input is not perfect square
//					Clears keyboard buffer
int getPerfectSquare();

//  Pre Condition:	num must be a non zero number
// Post Condition:	Returns a valid multiple of num
//					Prints error if letter or symbol is entered
//					Prints error if number is not a multiple of num
//					Clears keyboard buffer
int getMultOfNum(int num);