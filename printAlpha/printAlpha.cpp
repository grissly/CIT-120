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
	cout
		<< "Calling \"printAlpha()\"\n"
		<< "\tPrinting from A to Z, 5 characters per line:\n\n";
	printAlpha();

	////////	printAlpha('T')			////////
	cout
		<< "Calling \"printAlpha('T')\"\n"
		<< "\tPrinting from T to Z, 5 characters per line:\n\n";
	printAlpha('T');

	////////	printAlpha('C', 'W')		////////
	cout
		<< "Calling \"printAlpha('C', 'W')\"\n"
		<< "\tPrinting from C to W, 5 characters per line:\n\n";
	printAlpha('C', 'W');

	////////	printAlpha('D', 'Y', 3)		////////
	cout
		<< "Calling \"printAlpha('D', 'Y', 3)\"\n"
		<< "\tPrinting from D to Y, 3 characters per line:\n\n";
	printAlpha('D', 'Y', 3);

	system("pause");
}

void printTitle() {
	cout
		<< "\n\t              Lab on Optional Arguments              "
		<< "\n\t                     By J. Guerra                    "
		<< endl << endl << endl;
}

void printAlpha(char s, char e, int cpl) {
	int count = 0;
	
	for (char l = s; l <= e; l++)
		cout << l << (count++ % cpl == cpl - 1 ? "\n" : "\t");
	cout << endl << endl;
}