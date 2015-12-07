// Hunt the Wumpus - originally written in BASIC by Gregory Yob in 1973
// File Name: huntTheWumpus
// Programmer: Josh Guerra
// Last Modified: Dec 2, 2015

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void main() {
	int const
		ROOMS = 21,
		EXITS = 3;

	int caves[ROOMS][EXITS] = {
		{ 0, 0, 0 },			// to align cave names with array index
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

	int posPlayer = 1,
		posWumpus = 6,
		posBat1 = 3,
		posBat2 = 10,
		posPit1 = 13,
		posPit2 = 16;

	system("color 2f");		// console fun :D | 2 = green background, f = white text



}