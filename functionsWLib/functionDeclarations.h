#include <iostream>
using namespace std;

//  Pre Condition: NONE
// Post Condition: Prints the Title to the console
void printTitle();         //   DONE

//  Pre Condition:  NONE
// Post Condition:	Returns a valid number
//					Prints descriptive error messages
//					Removes everything from the cin buffer
//                  Restores the cin object if needed
double getNum();        //   DONE

//  Pre Condition:	NONE
// Post Condition:	Returns a valid Integer
//					Prints descriptive error messages
//					Removes everything from the cin buffer
//                  Restores the cin object if needed
int getInt();        //   DONE

//  Pre Condition:	NONE
// Post Condition:	Returns a valid Non-Zero Integer
//					Prints descriptive error messages
//					Removes everything from the cin buffer
//                  Restores the cin object if needed
int getNonZeroInt();        //   DONE

//  Pre Condition:	None
// Post Condition:	Returns a valid positive number
//					will crash program with non-numeric input
//					Prints descriptive error messages
//					Removes everything from the cin buffer
double getPos();        //   DONE

//  Pre Condition:	None
// Post Condition:	Returns a valid positive number
//					Prints descriptive error messages
//					Removes everything from the cin buffer
//                  Restores the cin object if needed
double getPosNum();        //   DONE

//  Pre Condition:	None
// Post Condition:	Returns a valid multiple of 5
//					Prints descriptive error messages
//					Removes everything from the cin buffer
//                  Restores the cin object if needed
int getMultOfFive();        //   DONE

//  Pre Condition:	None
// Post Condition:	Returns a valid letter
//					Prints descriptive error messages
//					Removes everything from the cin buffer
char getLetter();        //   DONE

//  Pre Condition:	start <= end
// Post Condition:	Returns a valid number in range [start, end]
//					Prints descriptive error messages
//					Removes everything from the cin buffer
//                  Restores the cin object if needed
double getInRange(double start, double end);        //   DONE

//  Pre Condition:	NONE
// Post Condition:	Returns a valid perfect square
//					Prints descriptive error messages
//					Removes everything from the cin buffer
//                  Restores the cin object if needed
int getPerfectSquare();        //   DONE

//  Pre Condition:	num != 0
// Post Condition:	Returns a valid multiple of num
//					Prints descriptive error messages
//					Removes everything from the cin buffer
//                  Restores the cin object if needed
int getMultOfNum(int num);        //   DONE