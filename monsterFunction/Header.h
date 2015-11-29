#include <string>
using namespace std;

//  Pre Condition:  NONE
// Post Condition:  Prints the Title to the console
void printTitle();

//  Pre Condition:  NONE
// Post Condition:  Prints the Menu to the console
void printMenu();

//  Pre Condition:	NONE
// Post Condition:	Returns a valid letter character
//					Prints descriptive error message
//					Removes everything from the cin buffer
char getLetter();

//  Pre Condition:	NONE
// Post Condition:	Returns a valid number
//					Prints descriptive error message
//					Removes everything from the cin buffer
//					Restores the cin object if needed
double getNum(); 

//  Pre Condition:	NONE
// Post Condition:	Returns a valid Integer
//					Prints descriptive error message
//					Removes everything from the cin buffer
//					Restores the cin object if needed
int getInt();

//  Pre Condition:	NONE
// Post Condition:	Returns a valid positive integer
//					Prints descriptive error message
//					Removes everything from the cin buffer
//					Restores the cin object if needed
int getPosInt();

//  Pre Condition:	x must be a positive integer
// Post Condition:	classifies number and returns an integer code:
//					-1 means number is deficient (number is less than sum of its factors)
//					0 means number is perfect (number is equal to sum of its factors)
//					1 means number is abundant (number is more than sum of its factors)
int classifyInt(int x);

//  Pre Condition:	x must be an integer on range [1, 4]
// Post Condition:	Prints ASCII Table
void printASCII(int x);

//  Pre-Condition:	NONE
// Post-Condition:	reads integer input from user
//					keeps reading inputs until sentinel (negative number) received
//					-1.0 means there was no data to average
//					returns average of inputed numbers
//					Removes everything from the cin buffer
//					Restores the cin object if needed
double getAvg();

//  Pre Condition:	start must be less than or equal to end
// Post Condition:	Returns a valid integer in range [start, end]
//					Prints error for inappropraite charater
//					Prints descriptive error for input < or > range
//					Prints error for input out of range
//					Clears keyboard buffer
int getIntInRange(int start, int end);

//  Pre Condition:	start must be less than or equal to end
// Post Condition:	Returns a valid number in range [start, end]
//					Prints error for inappropraite charater
//					Prints descriptive error for input < or > range
//					Prints error for input out of range
//					Clears keyboard buffer
double getNumInRange(double start, double end);

int getPrime();

bool isPrime(int x);

int getIntMoreThan(int n);

string findOrdinalSuffix(int count);