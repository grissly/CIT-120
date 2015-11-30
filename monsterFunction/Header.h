#include <string>
using namespace std;

//  Pre Condition:  NONE
// Post Condition:  Prints the Title to the console
void printTitle();                       //     DONE

//  Pre Condition:  NONE
// Post Condition:  Prints the Menu to the console
void printMenu();                       //     DONE

//  Pre Condition:	NONE
// Post Condition:	Returns a valid letter character
//					Prints descriptive error message
//					Removes everything from the cin buffer
char getLetter();                       //     DONE

//  Pre Condition:	NONE
// Post Condition:	Returns a valid number
//					Prints descriptive error messages
//					Removes everything from the cin buffer
//					Restores the cin object if needed
double getNum();                        //     DONE

//  Pre Condition:	NONE
// Post Condition:	Returns a valid Integer
//					Prints descriptive error messages
//					Removes everything from the cin buffer
//					Restores the cin object if needed
int getInt();                       //     DONE

//  Pre Condition:	NONE
// Post Condition:	Returns a valid positive integer
//					Prints descriptive error messages
//					Removes everything from the cin buffer
//					Restores the cin object if needed
int getPosInt();                       //     DONE

//  Pre Condition:	x must be a positive integer
// Post Condition:	classifies number and returns an integer code:
//					-1 means number is deficient (number is less than sum of its factors)
//					0 means number is perfect (number is equal to sum of its factors)
//					1 means number is abundant (number is more than sum of its factors)
int classifyInt(int x);                       //     DONE

//  Pre Condition:	x in range [1, 4]
// Post Condition:	Prints ASCII Table n characters per line
void printASCII(int x);                       //     DONE

//  Pre-Condition:	NONE
// Post-Condition:	reads integer input from user
//					keeps reading inputs until sentinel (negative number) received
//					-1.0 means there was no data to average
//					returns average of inputed numbers
//					Removes everything from the cin buffer
//					Restores the cin object if needed
double getAvg();                       //     DONE

//  Pre Condition:	start <= end
// Post Condition:	Returns a valid integer in range [start, end]
//					Prints descriptive error messgaes
//					Removes everything from the cin buffer
//					Restores the cin object if needed
int getIntInRange(int start, int end);                       //     DONE

//  Pre Condition:	start <= end
// Post Condition:	Returns a valid number in range [start, end]
//					Prints descriptive error messgaes
//					Removes everything from the cin buffer
//					Restores the cin object if needed
double getNumInRange(double start, double end);

//  Pre Condition:	NONE
// Post Condition:	Returns a valid prime number
//					Prints descriptive error messgaes
//					Removes everything from the cin buffer
//					Restores the cin object if needed
int getPrime();

//  Pre Condition:	x > 1
// Post Condition:	Returns true if x is valid prime number
bool isPrime(int x);

//  Pre Condition:	NONE
// Post Condition:	Returns a valid number > n
//					Prints descriptive error messgaes
//					Removes everything from the cin buffer
//					Restores the cin object if needed
int getIntMoreThan(int n);


//  Pre Condition:	x > 0
// Post Condition:	Returns a string of the ordinal suffix of x
string findOrdinalSuffix(int count);