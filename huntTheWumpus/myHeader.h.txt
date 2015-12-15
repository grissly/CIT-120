#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int const SIZE_ROOMS = 21, SIZE_EXITS = 3, VIEW_INSTRUCTIONS = 1, VIEW_STATISTICS = 2, PLAY_GAME = 3, EXIT_PROGRAM = 4;

// ~ ~ ~ ~ ~ ~ ~ ~			loading				~ ~ ~ ~ ~ ~ ~ ~ //

//  Pre Condition:  0 < n <= to the number of lines of text in file with filename  
//					0 < n <= to the PHYSICAL size of a[]
// Post Condition:  Validates and connects filename to ifs
//					Prints descriptive error messages
//					Loads the first n lines of text from ifs into the first n elements of a[]
//					Closes ifs
//					Sets isLoaded to true
void connectAndLoadStringArrayFromFile(string a[], int n, ifstream &ifs, string &filename, bool &isLoaded);

//  Pre Condition:  0 < n <= to the number of lines of text in file with filename  
//					0 < n <= to the PHYSICAL size of a[]
//					ifs must be a valid open input stream
// Post Condition:  Loads the first n lines of text from ifs into the first n elements of a[]
//					Closes ifs
//					Sets isLoaded to true
void loadStringArrayFromFile(string a[], int n, ifstream &ifs, bool &isLoaded);

//  Pre Condition:  0 < 3n + 1 <= to the number of valid numeric inputs in file with filename  
//					0 < n <= to the PHYSICAL size of whoWon[], winPct[], AND numMvs[]
// Post Condition:  Validates and connects filename to ifs
//					Prints descriptive error messages
//					Loads the first int from ifs into gamesPld, the next three ints into whoWon[]
//					Loads the next three doubles from ifs into winPct[] and the next three doubles into numMoves[]
//					Closes ifs
//					Sets isLoaded to true
void connectAndLoadStatsFromFile(int &gamesPld, int whoWon[], double winPct[], double numMvs[], int n, ifstream &ifs, string &filename, bool &isLoaded);

//  Pre Condition:  0 < n <= to the PHYSICAL size of whoWon[], winPct[], AND numMvs[]
//					ifs must be a valid open input file stream
// Post Condition:  Loads the first int from ifs into gamesPld, the next three ints into whoWon[]
//					Loads the next three doubles from ifs into winPct[] and the next three doubles into numMoves[]
//					Closes ifs
//					Sets isLoaded to true
void loadStats(int &gamesPld, int whoWon[], double winPct[], double numMvs[], int n, ifstream &ifs, bool &isLoaded);

//  Pre Condition:  0 < n <= to the PHYSICAL size of the first dimension of map[][]
//					0 < m <= to the PHYSICAL size of the second dimension of map[][]
// Post Condition:  Initializes map[n][m] with ints numbered [0, n]
void load2DArr(int map[][SIZE_EXITS], int n, int m);

// ~ ~ ~ ~ ~ ~ ~ ~			printing			~ ~ ~ ~ ~ ~ ~ ~ //

//  Pre Condition:  0 < n <= to the LOGICAL size of a[]    
//					os must be a valid open output stream
// Post Condition:  Prints the first n elements of a[] to os
void printStringArr(const string a[], int n, ostream &os = cout);

//  Pre Condition:  n = LOGICAL size of whoWon[], whoWonPercent[], AND numMoves[]
//					os must be a valid open output stream
// Post Condition:  Prints out a report containing values from gamesPlayed, whoWon[], whoWonPercent[], and numMoves[] to os
void printStats(int gamesPld, const int whoWon[], const double winPct[], const double numMvs[], int n, ostream &os = cout);

//  Pre Condition:  0 < n <= to the PHYSICAL size of the first dimension of map[][]
//					0 < m <= to the PHYSICAL size of the second dimension of map[][]
//					os must be a valid open output stream
// Post Condition:  Prints out the contents of map[][], m per line
void print2DArr(int const map[][SIZE_EXITS], int n, int m, ostream &os = cout);

//  Pre Condition:	map[][] must be initialized
//					p is a valid first dimension index of map[][]
//					Prints the current room (p) and its exits (map[p][])
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

//  Pre Condition:	NONE
// Post Condition:	Returns 'M', or 'S'
//					Prints descriptive error messages
//					Removes everything from the cin buffer
char getMorS();

//  Pre Condition:	map[][] must be initialized
//					p is a valid first dimension index of map[][]
// Post Condition:	Returns a valid integer located in map[p][]
//					Prints descriptive error messages
//					Removes everything from the cin buffer
//					Restores the cin object if needed
int getValidExit(int const map[][SIZE_EXITS], int p);

// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ //

//  Pre Condition:  map[][] must be initialized
//					player, wumpus, bat1, bat2, pit1, and pit2 must be valid indexes of the first dimension of map[][]
// Post Condition:  Prints out game state
//					Prints out directions and prompts for player choices
//					count is set to the number of turns that have passed during the game
//					Returns who won: -1 = Wumpus, 0 = Pit, 1 = Player
int startHunt(int const map[][SIZE_EXITS], int player, int wumpus, int bat1, int bat2, int pit1, int pit2, int &count);

//  Pre Condition:  map[][] must be initialized
//					p and h must be valid indexes of the first dimension of map[][]
// Post Condition:  Returns true if h has the same value as an element of map[p][]
//					Returns false otherwise
bool isHazardNear(int const map[][SIZE_EXITS], int p, int h);

//  Pre Condition:  n = LOGICAL size of whoWon[], whoWonPercent[], AND numMoves[]
//					outcome must be in range [-1, 1]
// Post Condition:  Validates and connects filename to ofs
//					Prints descriptive error messages
//					Updates values in gamesPlayed, whoWon[], whoWonPercent[], and numMoves[] using values from outcome and counter
//					Prints out a report containing values from gamesPlayed, whoWon[], whoWonPercent[], and numMoves[] to ofs
//					Closes ifs
void connectOfileAndUpdateStats(int &gamesPld, int whoWon[], double winPct[], double numMvs[], int n, int outcome, int &counter, ofstream &ofs, string &filename);

//  Pre Condition:  n = LOGICAL size of whoWon[], whoWonPercent[], AND numMoves[]
//					outcome must be in range [-1, 1]
//					ofs must be a valid open output file stream
// Post Condition:  Updates values in gamesPlayed, whoWon[], whoWonPercent[], and numMoves[] using values from outcome and counter
//					Prints out a report containing values from gamesPlayed, whoWon[], whoWonPercent[], and numMoves[] to ofs
//					Closes ifs
void updateStats(int &gamesPld, int whoWon[], double winPct[], double numMvs[], int n, int outcome, int lengthOfGame);
