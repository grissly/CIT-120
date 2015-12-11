// Hunt the Wumpus - originally written in BASIC by Gregory Yob in 1973
// File Name: huntTheWumpus
// Programmer: Josh Guerra
// Last Modified: Dec 2, 2015

#include "myHeader.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void main() {
	bool
		mapLoaded = false,
		instrLoaded = false,
		statsLoaded = false;
		//gamesPldRead = false,
		//whoWonLoaded = false,
		//winPctLoaded = false,
		//numMvsLoaded = false;

	int const 
		SIZE_ROOMS = 21,		// size in 1 more than used for map, done for alignment
		SIZE_EXITS = 3,
		SIZE_STATS = 3,			// most stats are grouped in 3s with similar stats
		SIZE_TITLE = 4,
		SIZE_INSTR = 38;		// num of lines in instructions.txt

	int gamesPld,
		whoWon[SIZE_STATS],
		posPlayer = 1,
		posWumpus = 6,
		posBat1 = 3,
		posBat2 = 10,
		posPit1 = 13,
		posPit2 = 16/*,
		caves[ROOMS][EXITS] = {
			{ 0, 0, 0 },
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
		}*/;

	double
		winPct[SIZE_STATS],
		numMvs[SIZE_STATS];		// will display some stats as ints

	string
		mapFilename = "map.txt",
		instrFilename = "instructions.txt",
		statsFilename = "stats.txt",
		instrArray[SIZE_INSTR],
		titleArr[SIZE_TITLE] = {
			"\t\t    CIT-120 Capstone Project    ",
			"\t\t          by J. Guerra          ",
			"\t\t        Hunt the Wumpus!        ",
			"\t\tOriginally by Gregory Yob (1973)" 
		};

	ifstream
		ifsMap,
		ifsInstr,
		ifsStats;

	ofstream
		ofsStats;

	system("color 2f");		// set console color: 2 (green background), f (white text)

	// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ //

	while (true) {
		printStringArr(titleArr, SIZE_TITLE);

		cout << endl << endl;
		printMenu();
		cout << "\n\nPlease make a selection: ";

		switch (getIntInRange(1, 4)) {
			case 1:			// instructions
				if (!instrLoaded) {
					ifsInstr.open(instrFilename);
					loadStringArrayFromFile(instrArray, SIZE_INSTR, ifsInstr, instrLoaded);
					ifsInstr.close();
				}

				system("cls");
				printStringArr(instrArray, SIZE_INSTR);
				cout << endl << endl;
				break;
			case 2:			// Stats
				if (!statsLoaded) {
					ifsStats.open(statsFilename);
					loadStats(gamesPld, whoWon, winPct, numMvs, SIZE_STATS, ifsStats, statsLoaded);
					ifsStats.close();
				}

				printStats(gamesPld, whoWon, winPct, numMvs, SIZE_STATS);
				cout << endl << endl;
				break;
			case 3:			// Play
			case 4:			// EXIT
				cout << "\nThank you for using my program.\n\n";
				system("pause");
				exit(0);
		}

		system("pause");
		system("cls");
	}
}