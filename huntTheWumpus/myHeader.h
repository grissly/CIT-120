#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//  Pre Condition:  0 < n <= to the LOGICAL size of a[]    
//					os must be a valid open output stream
// Post Condition:  Prints the first n elements of a[] to os
void printStringArr(const string a[], int n, ostream &os = cout);

//  Pre Condition:	start <= end
// Post Condition:	Returns a valid integer in range [start, end]
//					Prints descriptive error messgaes
//					Removes everything from the cin buffer
//					Restores the cin object if needed
int getIntInRange(int start, int end);

//  Pre Condition:	NONE
// Post Condition:	Returns a valid Integer
//					Prints descriptive error messages
//					Removes everything from the cin buffer
//					Restores the cin object if needed
int getInt();

//  Pre Condition:	NONE
// Post Condition:	Returns a valid number
//					Prints descriptive error messages
//					Removes everything from the cin buffer
//					Restores the cin object if needed
double getNum();

//  Pre Condition:  0 < n <= to the PHYSICAL size of a[]    
//					ifs must be a valid open input stream
// Post Condition:  Loads the first n elements of ifs to a[]
//					Sets isLoaded to true
void loadStringArrayFromFile(string a[], int n, ifstream &ifs, bool &isLoaded);