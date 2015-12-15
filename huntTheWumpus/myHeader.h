#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int const SIZE_ROOMS = 21, SIZE_EXITS = 3, VIEW_INSTRUCTIONS = 1, VIEW_STATISTICS = 2, PLAY_GAME = 3, EXIT_PROGRAM = 4;

// ~ ~ ~ ~ ~ ~ ~ ~			loading				~ ~ ~ ~ ~ ~ ~ ~ //

void connectAndLoadStringArrayFromFile(string a[], int n, ifstream &ifs, string &filename, bool &isLoaded);

//  Pre Condition:  0 < n <= to the PHYSICAL size of a[]    
//					ifs must be a valid open input stream
// Post Condition:  Loads the first n elements of ifs to a[]
//					Sets isLoaded to true
void loadStringArrayFromFile(string a[], int n, ifstream &ifs, bool &isLoaded);

void connectAndLoadStatsFromFile(int &gamesPld, int whoWon[], double winPct[], double numMvs[], int n, ifstream &ifs, string &filename, bool &isLoaded);

//  Pre Condition:  n must be PHYSICAL size of whoWon[], winPct[], AND numMvs[]
//					ifs must be a valid open input file stream
// Post Condition:  Reads everything in ifs
//					Initializes gamesPld, whoWon[], winPct[], and numMvs[] with corresponding values from ifs
//					Sets isLoaded to true
void loadStats(int &gamesPld, int whoWon[], double winPct[], double numMvs[], int n, ifstream &ifs, bool &isLoaded);

void load2DArr(int map[][SIZE_EXITS], int n, int m);

// ~ ~ ~ ~ ~ ~ ~ ~			printing			~ ~ ~ ~ ~ ~ ~ ~ //

//  Pre Condition:  0 < n <= to the LOGICAL size of a[]    
//					os must be a valid open output stream
// Post Condition:  Prints the first n elements of a[] to os
void printStringArr(const string a[], int n, ostream &os = cout);

//  Pre Condition:  n must be LOGICAL size of whoWon[], whoWonPercent[], AND numMoves[]
//					os must be a valid open output stream
// Post Condition:  Prints out a report on game statistics
//					Initializes gamesPlayed and whoWon[] with corresponding values from ifs
//					Initializes whoWonPercent[] and numMoves[] with corresponding values from ifs
//					Sets isLoaded to true
void printStats(int gamesPld, const int whoWon[], const double winPct[], const double numMvs[], int n, ostream &os = cout);

void print2DArr(int const map[][SIZE_EXITS], int n, int m, ostream &os = cout); // for testing

void printRoomAndExits(int const map[][SIZE_EXITS], int p);

// ~ ~ ~ ~ ~ ~ ~ ~			validating			~ ~ ~ ~ ~ ~ ~ ~ //

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

char getMorS();

int getValidExit(int const map[][SIZE_EXITS], int p);

// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ //

//  Pre Condition:  All ints must be in range [1, 20]
// Post Condition:  Prints out game state
//					Prints out directions and prompts for player choices
//					Sets count to the number of moves of game
//					Returns who won: -1 = Wumpus, 0 = Pit, 1 = Player
int startHunt(int const map[][SIZE_EXITS], int player, int wumpus, int bat1, int bat2, int pit1, int pit2, int &count);

bool isHazardNear(int const map[][SIZE_EXITS], int p, int h);

void updateStats(int &gamesPld, int whoWon[], double winPct[], double numMvs[], int n, int outcome, int lengthOfGame);