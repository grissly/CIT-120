// This program reads two ints from file and returns average
// filename: readFromFile
// Programmer: J. Guerra
// Last Modified: Nov 17, 2015

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void main() {
	string input;
	int a, b;
	ifstream file;

	// title block
	cout
		<< "\t This program asks the user for the name of a file \n"
		<< "\t             that contains two numbers,            \n"
		<< "\t      and prints on the monitor their average      \n"
		<< "\t                    by J. Guerra                   \n" << endl;

	// prompt for file
	cout << "What file contains your data? ";
	getline(cin, input);

	file.open(input);

	if (!file) {				// check if file is good
		system("color 98");		// background 9 = light blue, text 8 = gray
		cout << "\aFailed to open file: \"" << input << "\". Exiting the program.\n\n";
		
		system("pause");
		exit(0);
	}
	
	file >> a >> b;
	file.close();

	cout << "The average of " << a << " and " << b << " is: " << (a + b) / 2.0 << ".\n\n";
	
	system("pause");
}