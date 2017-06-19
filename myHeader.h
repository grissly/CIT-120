#include <iostream>
using namespace std;

//  Pre Condition: NONE
// Post Condition: Prints the Title to the console
void printTitle();

//  Pre Condition: NONE
// Post Condition:	Returns a valid number
//					Prints descriptive error messages
//					Removes everything from the cin buffer
//					Restores the cin object if needed
double getNum();

//  Pre Condition:	NONE
// Post Condition:	Returns a valid Integer
//					Prints descriptive error messages
//					Removes everything from the cin buffer
//					Restores the cin object if needed
int getInt();

//  Pre Condition:	None
// Post Condition:	Returns a valid positive number
//					Prints descriptive error messages
//					Removes everything from the cin buffer
//					Restores the cin object if needed
double getPosInt();

//  Pre Condition:	NONE
// Post Condition:	Returns a valid Non-Zero Integer
//					Prints descriptive error messages
//					Removes everything from the cin buffer
//					Restores the cin object if needed
int getNonZeroInt();

//  Pre Condition:	None
// Post Condition:	Returns a valid positive number
//					Prints descriptive error messages
//					Removes everything from the cin buffer
//					Restores the cin object if needed
double getPosNum();

//  Pre Condition:	None
// Post Condition:	Returns a valid multiple of 5
//					Prints descriptive error messages
//					Removes everything from the cin buffer
//					Restores the cin object if needed
int getMultOfFive();

//  Pre Condition:	None
// Post Condition:	Returns a valid letter
//					Prints descriptive error messages
//					Removes everything from the cin buffer
char getLetter();

//  Pre Condition:	start must be less than or equal to end
// Post Condition:	Returns a valid number in range [start, end]
//					Prints descriptive error messages
//					Removes everything from the cin buffer
//					Restores the cin object if needed
double getInRange(double start, double end);

//  Pre Condition:	NONE
// Post Condition:	Returns a valid square
//					Prints descriptive error messages
//					Removes everything from the cin buffer
//					Restores the cin object if needed
int getPerfectSquare();

//  Pre Condition:	num must be a non zero number
// Post Condition:	Returns a valid multiple of num
//					Prints descriptive error messages
//					Removes everything from the cin buffer
//					Restores the cin object if needed
int getMultOfNum(int num);