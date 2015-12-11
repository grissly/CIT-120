#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int const SIZE_EXITS = 3;

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

//  Pre Condition:  n must be PHYSICAL size of whoWon[], winPct[], AND numMvs[]
//					ifs must be a valid open input file stream
// Post Condition:  Reads everything in ifs
//					Initializes gamesPld, whoWon[], winPct[], and numMvs[] with corresponding values from ifs
//					Sets isLoaded to true
void loadStats(int &gamesPld, int whoWon[], double winPct[], double numMvs[], int n, ifstream &ifs, bool &isLoaded);

/*
//  Pre Condition:  ifs must be a valid open input stream
// Post Condition:  Removes everything in ifs up to first int
//					Returns first int from ifs
//					Sets isLoaded to true
int readInt(ifstream &ifs, bool &isLoaded);

//  Pre Condition:  0 < n <= to the PHYSICAL size of a[]
//					ifs must be a valid open input stream
// Post Condition:  Removes everything in ifs up to first int
//					Initializes first n elements of a[] to first n ints in ifs
//					Sets isLoaded to true
void loadIntArr(int a[], int n, ifstream &ifs, bool &isLoaded);

//  Pre Condition:  0 < n <= to the PHYSICAL size of a[]
//					ifs must be a valid open input stream
// Post Condition:  Removes everything in ifs up to first double
//					Initializes first n elements of a[] to first n doubles in ifs
//					Sets isLoaded to true
void loadDoubleArr(double a[], int n, ifstream &ifs, bool &isLoaded);
*/

//  Pre Condition:  n must be LOGICAL size of whoWon[], whoWonPercent[], AND numMoves[]
//					os must be a valid open output stream
// Post Condition:  Prints out a report on game statistics
//					Initializes gamesPlayed and whoWon[] with corresponding values from ifs
//					Initializes whoWonPercent[] and numMoves[] with corresponding values from ifs
//					Sets isLoaded to true
void printStats(int gamesPld, const int whoWon[], const double winPct[], const double numMvs[], int n, ostream &os = cout);

void load2DArr(int map[][SIZE_EXITS], int n, int m);

void print2DArr(int map[][SIZE_EXITS], int n, int m, ostream &os = cout);

//  Pre Condition:  All ints must be in range [1, 20]
// Post Condition:  Prints out game state
//					Prints out directions and prompts for player choices
//					Sets count to the number of moves of game
//					Returns who won: -1 = Wumpus, 0 = Pit, 1 = Player
int startHunt(int const map[][3], int player, int wumpus, int bat1, int bat2, int pit1, int pit2, int &count);