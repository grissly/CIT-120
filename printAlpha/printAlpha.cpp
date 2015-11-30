// demonstrates optional arguements
// program prints the alphabetic characters
// Project Name: printAlpha
// Programmer: J. Guerra
// Last Modified: Nov 30, 2015

#include <iostream>
using namespace std;

void printTitle();
void printAlpha(char s = 'A', char e = 'Z', int cpl = 5);

void main() {
	system("color 2f");			// console fun :D | 2 = green background, f = white text

	printTitle();

	////////	printAlpha()			////////
	////////	printAlpha('T')"		////////
	////////	printAlpha('C', 'W')"		////////
	////////	printAlpha('D', 'Y', 3)		////////
}



void printTitle() {
	cout
		<< "\n\t              Lab on Optional Arguments              "
		<< "\n\t                     By J. Guerra                    "
		<< endl << endl << endl;
}

void printAlpha(char s, char e, int cpl) {
	for (int l = s; l <= e; l++) 
		cout << l << (l % cpl == cpl - 1 ? "\n" : "\t");
}