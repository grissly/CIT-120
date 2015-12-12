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

	int const 
		SIZE_STATS = 3,			// most stats are grouped into arr[3] with other similar stats
		SIZE_TITLE = 4, 
		SIZE_MENU = 4,
		SIZE_ROOMS = 21,		// size in 1 more than used for map, done for alignment
		SIZE_EXITS = 3,
		SIZE_INSTR = 37;		// num of lines in instructions.txt

	int gamesPld,
		moveCounter,
		winner,
		map[SIZE_ROOMS][SIZE_EXITS],
		whoWon[SIZE_STATS],
		posPlayer = 1,
		posWumpus = 6,
		posBat1 = 3,
		posBat2 = 10,
		posPit1 = 13,
		posPit2 = 16;

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

		switch (getIntInRange(1, 5)) {
			case 1:			// instructions
				if (!instrLoaded) {
					cout << "\n Loading statistics...";
					
					ifsInstr.open(instrFilename);
					loadStringArrayFromFile(instrArray, SIZE_INSTR, ifsInstr, instrLoaded);
					ifsInstr.close();

					cout << "Done loading statistics";
				}

				system("cls");
				printStringArr(instrArray, SIZE_INSTR);
				break;
			case 2:			// Stats
				if (!statsLoaded) {
					ifsStats.open(statsFilename);
					loadStats(gamesPld, whoWon, winPct, numMvs, SIZE_STATS, ifsStats, statsLoaded);
					ifsStats.close();
				}

				printStats(gamesPld, whoWon, winPct, numMvs, SIZE_STATS);
				break;
			case 3:
				cout
					<< "\n\tPlease finish each game."
					<< "\n\tStatistics will be automatically updated after each game."
					<< "\n\tYou may view statistics in main menu or in \"stats.txt\""
					<< endl;

				// load stats if not done already
				if (!statsLoaded) {
					cout << "\n\tLoading statistics...";
					
					ifsStats.open(statsFilename);
					loadStats(gamesPld, whoWon, winPct, numMvs, SIZE_STATS, ifsStats, statsLoaded);
					ifsStats.close();

					cout << "\n\tDone loading statistics\n\n";
				}
				else
					cout << "\n\n";
				
				// load map if not done already
				if (!mapLoaded) {
					cout << "\n\tLoading map...";
					load2DArr(map, SIZE_ROOMS, SIZE_EXITS);
					cout << "\n\tDone loading map\n\n";
				}

				system("pause");
				system("cls");

				// play game
				winner = startHunt(map, posPlayer, posWumpus, posBat1, posBat2, posPit1, posPit2, moveCounter);

				// update stats



				break;
			case 4:			// EXIT
				cout << "\nThank you for using my program.\n\n";
				system("pause");
				exit(0);
			/*
			case 5:
				cout 
					<< "\n\tSecret Option: Testing ;)"
					<< "\n\tLoading Map....";

				load2DArr(map, SIZE_ROOMS, SIZE_EXITS);

				cout 
					<< "\n\tMap loaded :D"
					<< "\n\tcalling print2DArr()";

				print2DArr(map, SIZE_ROOMS, SIZE_EXITS);
			*/
		}

		cout << endl << endl;
		system("pause");
		system("cls");
	}
}