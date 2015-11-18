#include <iostream>
using namespace std;

//  Pre Condition: NONE
// Post Condition: Prints the Title to the console
void printTitle();

//  Pre Condition: NONE
// Post Condition: Returns a valid number
//				   prints error if letter or symbol is entered
//				   clears keyboard buffer
double getNum();

//  Pre Condition:	NONE
// Post Condition:	Returns a valid Integer
//					prints error if letter or symbol is entered
//					prints error if non-integer number
//					clears keyboard buffer
int getInt();

//  Pre Condition:	NONE
// Post Condition:	Returns a valid Non-Zero Integer
//					prints error if letter or symbol is entered
//					prints error if non-integer number
//					prints error if zero is entered
//					clears keyboard buffer
int getNonZeroInt();

//  Pre Condition:	None
// Post Condition:	Returns a valid positive number
//					will crash program with non-numeric input
//					prints error if number less than or equal to zero
//					clears keyboard buffer
double getPos();

//  Pre Condition:	None
// Post Condition:	Returns a valid positive number
//					prints error if letter or symbol is entered
//					prints error if number less than or equal to zero
//					clears keyboard buffer
double getPosNum();

//  Pre Condition:	None
// Post Condition:	Returns a valid multiple of 5
//					prints error if letter or symbol is entered
//					prints error if input less than or equal to zero
//					prints error if number is not a multiple of 5
//					clears keyboard buffer
int getMultOfFive();

//  Pre Condition:	None
// Post Condition:	Returns a valid letter
//					clears keyboard buffer
char getLetter();

double getInRange(double start, double end);

int getPerfectSquare();

int getMultOfNum(int num);