#include "myHeader.h"
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

void printStringArr(const string a[], int n, ostream &os) {
	for (int i = 0; i < n; i++)
		os << "\n" << a[i];
}

int getIntInRange(int start, int end) {
	int x = getInt();

	while (x < start || x > end) {
		cout
			<< "\a\tYour number must be "
			<< (x < start ? "greater" : "less")
			<< " than or equal to "
			<< (x < start ? start : end)
			<< ". \n\tTry again: ";
		x = getInt();
	}

	return x;
}

int getInt() {
	double x = getNum();

	while (int(x) != x) {
		cout << "\a\tYour number is not an integer! \n\tTry Again: ";
		x = getNum();
	}

	return int(x);
}

double getNum() {
	double x;

	while (!(cin >> x)) {
		cin.clear();	cin.ignore(30, '\n');
		cout << "\a\tPlease no inapropriate characters! \n\tTry again: ";
	}
	cin.ignore(80, '\n');

	return x;
}

void loadStringArrayFromFile(string a[], int n, ifstream &ifs, bool &isLoaded) {
	for (int i = 0; i < n; i++)
		getline(ifs, a[i]);

	isLoaded = true;
}

void loadStats(int &gamesPlayed, int whoWon[], double whoWonPercent[], double numMoves[], int n, ifstream &ifs, bool &isLoaded) {

	while (ifs.peek() < '0' || ifs.peek() > '9')
		ifs.ignore();
	ifs >> gamesPlayed;

	while (ifs.peek() < '0' || ifs.peek() > '9')
		ifs.ignore();
	for (int i = 0; i < n; i++)
		ifs >> whoWon[i];

	while (ifs.peek() < '0' || ifs.peek() > '9')
		ifs.ignore();
	for (int i = 0; i < n; i++) {
		ifs >> whoWonPercent[i];
		ifs.ignore();	// for discarding '%'
	}

	while (ifs.peek() < '0' || ifs.peek() > '9')
		ifs.ignore();
	for (int i = 0; i < n; i++)
		ifs >> numMoves[i];

	isLoaded = true;
}

void printStats(int gamesPld, const int whoWon[], const double winPct[], const double numMvs[], int n, ostream &os) {

	os
		<< fixed << setprecision(1) 
		<< "\nHunt the Wumpus Game Statistics"
		<< "\n\n\tGames Played: " << gamesPld
		<< "\n\n\tWho Won:"
		<< "\n\tPlayer\tWumpus\tPit\n";

	for (int i = 0; i < n; i++)
		os << "\t" << whoWon[i];

	os
		<< "\n\n\tWin Rate:"
		<< "\n\tPlayer\tWumpus\tPit\n";

	for (int i = 0; i < n; i++) 
		os << "\t" << winPct[i] << "%";

	os
		<< "\n\n\tMoves per Game:"
		<< "\n\tLeast\tMost\tAverage\n"
		<< "\t" << int(numMvs[0])
		<< "\t" << int(numMvs[1])
		<< "\t" << numMvs[2];
}

void load2DArr(int map[][SIZE_EXITS], int const n, int const m) {
	int tempMap[21][3] = {
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

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			map[i][j] = tempMap[i][j];
}

void print2DArr(int const map[][SIZE_EXITS], int n, int m, ostream &os) {
	cout << "\n";
	for (int i = 0; i < n; i++) 
		for (int j = 0; j < m; j++) 
			cout << "\t" << map[i][j] << (j % m == m - 1 ? "\n" : ", ");
}

int startHunt(int const map[][SIZE_EXITS], int player, int wumpus, int bat1, int bat2, int pit1, int pit2, int &count) {
	count = 0;

	while (true) {
		if (player == wumpus) {
			cout << "\n\n\tYou awakened the Wumpus. He eats you. \n\tYou lose.";
			return -1;
		}
		else if (player == pit1 || player == pit2) {
			cout << "\n\n\tYou fell into a bottomless pit. \n\tYou lose... eventually...";
			return 0;
		}

		if (isHazardNear(map, player, wumpus)) 
			cout << "\n\n\tYou smell the unmistakable stench of a Wumpus";

		if (isHazardNear(map, player, bat1) || isHazardNear(map, player, bat2))
			cout << "\n\n\tYou hear the flapping of large wings";

		if (isHazardNear(map, player, pit1) || isHazardNear(map, player, pit2))
			cout << "\n\n\tYou feel an ominous breeze";

		cout << endl << endl;
		printRoomAndExits(map, player);
		cout << endl << endl;

		system("pause");
	}
}

bool isHazardNear(int const map[][SIZE_EXITS], int p, int h) {
	for (int i = 0; i < SIZE_EXITS; i++) {
		if (h == map[p][i])
			return true;
	}

	return false;
}

void printRoomAndExits(int const map[][SIZE_EXITS], int p) {
	cout
		<< "\tYou are in room " << p << endl
		<< "\tYou may go to rooms:" << endl;

	for (int i = 0; i < SIZE_EXITS; i++) {
		cout << "\t" << map[p][i];
	}
}