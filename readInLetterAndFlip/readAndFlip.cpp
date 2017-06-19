// Read in a letter character and 
// provide the corresponding letter based on case
// readAndFlip.exe
// Programmer: J. Guerra
// Last Modified: Oct 5, 0215

/*
-Ask the user for a letter.											// DONE
-If the user enters something that is not a letter print 
	a descriptive error message. Do the validation FIRST 
	(i.e. the error message will be the yes part of the if).		// DONE
-If the user enters a letter tell if the letter is upper 
	or lower case and then output the corresponding "flip" 
	case. Do the validation first!									// DONE
-Clear the screen between runs.										// DONE
-Do not use any library functions (no string library, no 
	toupper or tolower, etc.) YOU should find the algorithm.		// DONE
-Do not use any "magic numbers", ie 65, 32, 122 etc. Let 
	the compiler do the calculations for you. Also allow 
	automatic type casting (instead of explicit).					// DONE
-Test your code thoroughly before you show it to me.				// DONE
-Make sure your formatting of your code and your output is 
	correct (spaces and empty lines as well as indentations).		// DONE
-Do NOT alter the value of the character (what if you need 
	it after you flip it?)											// DONE
*/

#include <iostream>
using namespace std;

void main() {
	char c; int offset = 'a' - 'A';

	// Title Block
	cout
		<< endl 
		<< "\t       This program reads letters and      " << endl
		<< "\t     classifies them as capital or lower   " << endl
		<< "\t          and then flips their case        " << endl
		<< "\t                by J. Guerra               " << endl
		<< endl << endl;

	while (true) {
		// Gimme a letter
		cout << "Please give me a letter: ";
		cin >> c;      cin.ignore(20, '\n');

		if (c < 'A' || c > 'Z' && c < 'a' || c > 'z')		// Validation
			cout << "\t \'" << c << "\' is NOT a letter";
		else if (c >= 'A' && c <= 'Z')						// Capital letter!
			cout
				<< "\t \'" << c << "\' is an upper case letter. "
				<< "The corresponding lower case letter is \'"
				<< char(c + offset) << "\'";
		else												// lower case letter
			cout
				<< "\t \'" << c << "\' is a lower case letter. "
				<< "The corresponding upper case letter is \'"
				<< char(c - offset) << "\'";

		// Wash. Rinse. Repeat
		cout << endl << endl;
		system("pause");
		system("cls");
		cout << endl << endl;
	}
}