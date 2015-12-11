#include "myHeader.h"
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

void printMenu() {
	cout
		<< "\n\t1] View Instructions"
		<< "\n\t2] View Statistics"
		<< "\n\t3] Play Game"
		<< "\n\t4] Exit Program";
}

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

void loadStats(int &gamesPlayed, int whoWon[], double whoWonPercent[],
	double numMoves[], int n, ifstream &ifs, bool &isLoaded) {
	
	string trash;		// for reading in lines that I don't need

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

void printStats(int gamesPld, const int whoWon[], const double winPct[],
	const double numMvs[], int n, ostream &os) {

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

int startHunt(int player, int wumpus, int bat1, int bat2, int pit1, int pit2, int &count) {
	count = 0;

	while (true) {
		if (player == wumpus) {
			cout << "\n\tYou awakened the Wumpus. He eats you. \n\tYou lose.";
			return -1;
		}
		else if (player == pit1 || player == pit2) {
			cout << "\n\tYou fell into a bottomless pit. \n\tYou lose... eventually...";
			return 0;
		}

		if (isWumpusNear(player, wumpus)) 
			cout << "\n\tYou smell the unmistakable stench of a Wumpus";

		if (isPitNear(player, wumpus))
			cout << "\n\tYou smell the unmistakable stench of a Wumpus";

	}
}