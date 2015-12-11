#include "myHeader.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void printStringArr(const string a[], int n, ostream &os = cout) {
	for (int i = 0; i < n; i++)
		os << "\n\t" << a[i];
}

//void loadCaves(int a[][EXITS]) {
//	// implement
//}

/*	a = {
		{0, 0, 0},
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
	*/
}