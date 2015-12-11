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
		SIZE_ROOMS = 21,
		SIZE_EXITS = 3,
		SIZE_STATS = 3,
		SIZE_TITLE = 4,
		SIZE_INSTR = 38;

	int gamesPlayed,
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
		whoWonPercent[SIZE_STATS],
		numMoves[SIZE_STATS];

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
		updateStats;

	system("color 2f");		// console fun :D | 2 = green background, f = white text

	// ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ //

	while (true) {
		printStringArr(titleArr, SIZE_TITLE);

		cout 
			<< endl << endl
			<< "\n\t1] Instructions"
			<< "\n\t2] Statistics"
			<< "\n\t3] Play"
			<< "\n\t4] Exit"
			<< endl << endl
			<< "Please make a selection: ";

		switch (getIntInRange(1, 4)) {
			case 1:			// instructions
				if (!instrLoaded) {
					ifsInstr.open(instrFilename);
					loadStringArrayFromFile(instrArray, SIZE_INSTR, ifsInstr, instrLoaded);
				}

				system("cls");
				printStringArr(instrArray, SIZE_INSTR);
				cout << endl << endl;
				break;
			case 2:			// Stats
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