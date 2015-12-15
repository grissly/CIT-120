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
		mapLoaded = false,		// helps me avoid reading files 
		instrLoaded = false,	// and loading arrays more than needed
		statsLoaded = false;

	int const
		SIZE_TITLE = 4,
		SIZE_MENU = 4,

		SIZE_STATS = 3,			// most stats are grouped into arr[3] with other similar stats
		SIZE_INSTR = 37,		// num of lines in instructions.txt

		SIZE_ROOMS = 21,		// size is 1 more than used for map, done for alignment
		SIZE_EXITS = 3;

	int
		map[SIZE_ROOMS][SIZE_EXITS],

		gamesPld,				// stats
		whoWon[SIZE_STATS],

		moveCounter,			// keeps track of 
		winner,					// current game outcome

		// game entities
		posPlayer = 1,
		posWumpus = 6,
		posBat1 = 3,
		posBat2 = 10,
		posPit1 = 13,
		posPit2 = 16;

	double
		winPct[SIZE_STATS],
		numMvs[SIZE_STATS];

	string
		instrFilename = "instructions.txt",
		statsFilename = "stats.txt",

		// loaded by input file
		instrArray[SIZE_INSTR],

		titleArr[SIZE_TITLE] = {
		"\t\t    CIT-120 Capstone Project    ",
		"\t\t          by J. Guerra          ",
		"\t\t        Hunt the Wumpus!        ",
		"\t\tOriginally by Gregory Yob (1973)"
		},

		menuArr[SIZE_MENU] = {
			"\t1] View Instructions",
			"\t2] View Statistics",
			"\t3] Play Game",
			"\t4] Exit Program"
		};

	ifstream
		ifsInstr,
		ifsStats;

	ofstream
		ofsStats;

	system("color 2f");		// set console color: 2 (green background), f (white text)

	// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ //

	while (true) {
		printStringArr(titleArr, SIZE_TITLE);

		cout << endl << endl;
		printStringArr(menuArr, SIZE_MENU);
		cout << "\n\nPlease make a selection: ";

		switch (getIntInRange(1, 4)) {
			case VIEW_INSTRUCTIONS:
				if (!instrLoaded)
					connectAndLoadStringArrayFromFile(instrArray, SIZE_INSTR, ifsInstr, instrFilename, instrLoaded);
				if (instrLoaded) {
					system("cls");
					printStringArr(instrArray, SIZE_INSTR);
				}
				break;
			case VIEW_STATISTICS:
				if (!statsLoaded) 
					connectAndLoadStatsFromFile(gamesPld, whoWon, winPct, numMvs, SIZE_STATS, ifsStats, statsFilename, statsLoaded);
				if (statsLoaded) {
					cout << endl << endl;
					printStats(gamesPld, whoWon, winPct, numMvs, SIZE_STATS);
				}
				break;

			case PLAY_GAME:
				cout
					<< "\n\tPlease finish each game."
					<< "\n\tStatistics will be automatically updated after each game."
					<< "\n\tYou may view statistics in main menu or in \"stats.txt\"";

				// load stats if not done already
				if (!statsLoaded)
					connectAndLoadStatsFromFile(gamesPld, whoWon, winPct, numMvs, SIZE_STATS, ifsStats, statsFilename, statsLoaded);
				cout << "\n\n";

				// load map if not done already
				if (!mapLoaded) {
					cout << "\tLoading map...";
					load2DArr(map, SIZE_ROOMS, SIZE_EXITS);
					cout << "\n\tDone loading map\n\n";
				}

				system("pause");
				system("cls");

				// game
				winner = startHunt(map, posPlayer, posWumpus, posBat1, posBat2, posPit1, posPit2, moveCounter);

				// update stats
				connectOfileAndUpdateStats(gamesPld, whoWon, winPct, numMvs, SIZE_STATS, winner, moveCounter, ofsStats, statsFilename);

				break;
			case EXIT_PROGRAM:
				cout << "\nThank you for using my program.\n\n";
				system("pause");
				exit(0);
		}

		cout << endl << endl;
		system("pause");
		system("cls");
	}
}