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
			<< "\a\tYour number must be " << (x < start ? "greater" : "less")
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

void loadStats(int &gamesPld, int whoWon[], double winPct[], double numMvs[], int n, ifstream &ifs, bool &isLoaded) {

	while (ifs.peek() < '0' || ifs.peek() > '9')
		ifs.ignore();
	ifs >> gamesPld;

	while (ifs.peek() < '0' || ifs.peek() > '9')
		ifs.ignore();
	for (int i = 0; i < n; i++)
		ifs >> whoWon[i];

	while (ifs.peek() < '0' || ifs.peek() > '9')
		ifs.ignore();
	for (int i = 0; i < n; i++) {
		ifs >> winPct[i];
		ifs.ignore();	// for discarding '%'
	}

	while (ifs.peek() < '0' || ifs.peek() > '9')
		ifs.ignore();
	for (int i = 0; i < n; i++)
		ifs >> numMvs[i];

	isLoaded = true;
}

void printStats(int gamesPld, const int whoWon[], const double winPct[], const double numMvs[], int n, ostream &os) {

	os
		<< fixed << setprecision(1)
		<< "\nHunt the Wumpus Game Statistics"
		<< "\n\n\tGames Played: " << gamesPld
		<< "\n\n\tWho Won:"
		<< "\n\tWumpus\tPit\tPlayer\n";

	for (int i = 0; i < n; i++)
		os << "\t" << whoWon[i];

	os << endl;

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
	char move;
	int target;
	bool encounteredHazard;		// for printing some extra space

	while (true) {
		encounteredHazard = false;
		cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~" << endl;

		if (player == wumpus) {
			cout << "\n\n\tYou awakened the Wumpus. He eats you. \n\tYou lose.";
			return -1;
		}
		else if (player == bat1 || player == bat2) {
			cout 
				<< "\n\n\tA Giant Bat grabs you and carries you through the caves." 
				<< "\n\tAfter what seems like a long time, it drops you in a new room."
				<< "\n\tYou see the familiar features of the room you started in!";
			encounteredHazard = true;
			player = 1;		// back to start
		}
		else if (player == pit1 || player == pit2) {
			cout << "\n\n\tYou fell into a bottomless pit. \n\tYou lose.";
			return 0;
		}

		if (isHazardNear(map, player, wumpus)) {
			cout << "\n\tYou smell the unmistakable stench of a Wumpus";
			encounteredHazard = true;
		}

		if (isHazardNear(map, player, bat1) || isHazardNear(map, player, bat2)) {
			cout << "\n\tYou hear the flapping of large wings";
			encounteredHazard = true;
		}

		if (isHazardNear(map, player, pit1) || isHazardNear(map, player, pit2)) {
			cout << "\n\tYou feel an ominous breeze";
			encounteredHazard = true;
		}

		cout << endl << (encounteredHazard ? "\n" : "");
		printRoomAndExits(map, player);
		cout << "\n\n\tDo you want to (M)ove or (S)hoot? ";
		move = getMorS();

		cout << "\tWhere do you want to " << (move == 'M' ? "move" : "shoot") << "? ";
		target = getValidExit(map, player);
		count++;

		if (move == 'M') {
			player = target;
			cout << "\n";
		}
		else if (target == wumpus) {
			cout << "\n\n\tYou killed the Wumpus! \n\tCongradulations, you win!";
			return 1;
		}
		else {
			cout
				<< "\n\tYou missed the Wumpus!"
				<< "\n\tYou awakened the Wumpus. He eats you. \n\tYou lose.";
			return -1;
		}
	}
}

bool isHazardNear(int const map[][SIZE_EXITS], int p, int h) {
	for (int i = 0; i < SIZE_EXITS; i++) {
		if (h == map[p][i]) {
			return true;
		}
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

char getMorS() {
	char c;

	cin >> c;	cin.ignore(80, '\n');

	while (c != 'M' && c != 'm' && c != 'S' && c != 's') {
		cout << "\tPlease type 'M' for move or 'S' for shoot: ";
		cin >> c;		cin.ignore(80, '\n');
	}

	return (c == 'm' ? 'M' : c == 's' ? 'S' : c);	// returns only capitals
}

int getValidExit(int const map[][SIZE_EXITS], int p) {
	int t = getInt();

	while (t != map[p][0] && t != map[p][1] && t != map[p][2]) {
		cout
			<< "\n\tYou " << (t == p ? "are already t" : "can't go there from ")
			<< "here. Try again: ";
		t = getInt();
	}

	return t;
}

void updateStats(int &gamesPld, int whoWon[], double winPct[], double numMvs[], int n, int outcome, int lengthOfGame) {
	if (gamesPld++ == 0) 
		// if first game, no need to find shortest/longest game
		// or avg game length
		for (int i = 0; i < n; i++) 
			numMvs[i] = lengthOfGame;
	else {
		if (lengthOfGame < numMvs[0])
			numMvs[0] = lengthOfGame;
		if (lengthOfGame > numMvs[1])
			numMvs[1] = lengthOfGame;

		// calc running avg
		// newAvg = (oldAvg * prevTotalGamesPld + lengthOfMostRecentGame) / newTotalGamesPld
		numMvs[2] = (numMvs[2] * double(gamesPld - 1) + double(lengthOfGame)) / double(gamesPld);
	}
	
	// outcome is the winner code and will increment the int representing the entity that won the last game
	whoWon[outcome + 1]++; 

	for (int i = 0; i < n; i++)
		winPct[i] = whoWon[i] / double(gamesPld) * 100;
}