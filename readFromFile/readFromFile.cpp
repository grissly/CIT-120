//
//
//
//

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void main() {
	string input;
	double a, b;
	ifstream file;

	// title block
	cout
		<< "\t This program asks the user for the name of a file \n"
		<< "\t             that contains two numbers,            \n"
		<< "\t      and prints on the monitor their average      \n"
		<< "\t                    by J. Guerra                   \n" << endl;

	// prompt for file
	cout << "What file contains your data? ";
	cin >> input;		cin.ignore(50, '\n');
	file.open(input);

	if (!file) {			// check if file is good
		system("color 98"); // background 9 = light blue, text 8 = gray
		cout << "\aFailed to open file: \"" << input << "\". Exiting the program.\n\n";
	} 
	else {					// get and print average
		file >> a >> b;
		cout << "The average of " << a << " and " << b << " is: " << (a + b) / 2 << ".\n\n";
		file.close();
	}
	
	system("pause");
}