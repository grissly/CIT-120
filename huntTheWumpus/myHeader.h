#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int const
	SIZE_ROOMS = 21,		// size in 1 more than used for map, done for alignment
	SIZE_EXITS = 3,
	map[SIZE_ROOMS][SIZE_EXITS] = {
		{ 0, 0, 0 },		// room not actually used
		{ 2, 4, 19 },
		{ 1, 3, 6 },
		{ 2, 8, 20 },
		{ 1, 5, 9 },
		{ 4, 6, 11 },
		{ 2, 5, 7 },
		{ 6, 8, 12 },
		{ 3, 7, 13 },
		{ 4, 10, 16 },
		{ 9, 11, 14 },
		{ 5, 10, 12 },
		{ 7, 11, 15 },
		{ 8, 15, 18 },
		{ 10, 15, 17 },
		{ 12, 13, 14 },
		{ 9, 17, 19 },
		{ 14, 16, 18 },
		{ 13, 17, 20 },
		{ 1, 16, 20 },
		{ 3, 18, 19 }
	};

//  Pre Condition:  NONE
// Post Condition:  Prints the Menu to the console
void printMenu();

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

//  Pre Condition:  All ints must be in range [1, 20]
// Post Condition:  Prints out game state
//					Prints out directions and prompts for player choices
//					Sets count to the number of moves of game
//					Returns who won: -1 = Wumpus, 0 = Pit, 1 = Player
int startHunt(int player, int wumpus, int bat1, int bat2, int pit1, int pit2, int &count);