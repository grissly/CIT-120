// demonstrates optional arguements
// program prints the alphabetic characters
// Project Name: printAlphaIMPROVED
// Programmer: J. Guerra
// Last Modified: Dec 2, 2015

#include <iostream>
using namespace std;

//  Pre Condition:  NONE
// Post Condition:  Prints the Title to the console
void printTitle();        //   DONE

//  Pre Condition:  s < e
//					s, e must be letters of the same case 
//					cpl must be a positive integer
// Post Condition:  Prints alphabet from [s, e] with cpl characters per line
void printAlpha(char s = 'A', char e = 'Z', int cpl = 5);       //   DONE

//  Pre Condition:	NONE
// Post Condition:	Returns 'Y', 'y', 'N', or 'n'
//					Prints descriptive error messages
//					Removes everything from the cin buffer
char getYorN();       //   DONE

//  Pre Condition:	None
// Post Condition:	Returns a valid letter
//					Prints descriptive error messages
//					Removes everything from the cin buffer
char getLetter();       //   DONE

//  Pre Condition:	s is a letter
// Post Condition:	Returns a valid letter after s and of the same case
//					Prints descriptive error messages
//					Removes everything from the cin buffer
char getLetSameCaseAfter(char s);       //   DONE

//  Pre Condition:	c is a letter
// Post Condition:	Returns true if c is uppercase, false otherwise
bool isUp(char c);       //   DONE

//  Pre Condition:	s is a letter
// Post Condition:	Returns a valid letter that matches the case of s
//					Prints descriptive error messages
//					Removes everything from the cin buffer
char getSameCase(char s);       //   DONE

//  Pre Condition:	NONE
// Post Condition:	Returns an upper case letter
//					Prints descriptive error messages
//					Removes everything from the cin buffer
char getUpper();

//  Pre Condition:	NONE
// Post Condition:	Returns a lower case letter
//					Prints descriptive error messages
//					Removes everything from the cin buffer
char getLower();

//  Pre Condition:  NONE
// Post Condition:	Returns a valid number
//					Prints descriptive error messages
//					Removes everything from the cin buffer
//					Restores the cin object if needed
double getNum();      //   DONE

//  Pre Condition:	NONE
// Post Condition:	Returns a valid Integer
//					Prints descriptive error messages
//					Removes everything from the cin buffer
//					Restores the cin object if needed
int getInt();      //   DONE

//  Pre Condition:	None
// Post Condition:	Returns a valid positive number
//					Prints descriptive error messages
//					Removes everything from the cin buffer
//					Restores the cin object if needed
int getPosInt();      //   DONE

void main() {    // main is DONE
	char s, e, c;				// for user testing
	int cpl;					// characters per line

	system("color 2f");			// console fun :D | 2 = green background, f = white text

	printTitle();

	////////////              printAlpha()              ////////////
	cout
		<< "Calling \"printAlpha()\"\n"
		<< "\tPrinting from A to Z, 5 characters per line:\n\n";
	printAlpha();			cout << "\n\n";

	////////////             printAlpha('T')            ////////////
	cout
		<< "Calling \"printAlpha('T')\"\n"
		<< "\tPrinting from T to Z, 5 characters per line:\n\n";
	printAlpha('T');			cout << "\n\n";

	////////////           printAlpha('C', 'W')         ////////////
	cout
		<< "Calling \"printAlpha('C', 'W')\"\n"
		<< "\tPrinting from C to W, 5 characters per line:\n\n";
	printAlpha('C', 'W');			cout << "\n\n";

	////////////         printAlpha('D', 'Y', 3)        ////////////
	cout
		<< "Calling \"printAlpha('D', 'Y', 3)\"\n"
		<< "\tPrinting from D to Y, 3 characters per line:\n\n";
	printAlpha('D', 'Y', 3);			cout << "\n\n";

	////////////              User Testing              ////////////
	cout << "Do you want to choose the arguments? ";
	c = getYorN();

	while (c == 'Y' || c == 'y') {
		cout << endl << endl << "Peoples' choice! ;)" << endl;

		cout << "\tEnter the starting letter: ";
		s = getLetter();
		cout << "\tEnter the ending letter: ";
		e = getLetSameCaseAfter(s);  
		cout
			<< "\tHow many letters do you want me to print per line   " << endl
			<< "\t   (if you hit ENTER I will use the default value): ";
		if (cin.peek() == '\n') {
			cout << "Calling \"printAlpha('" << s << "', '" << e << "')\"\n"; 
			printAlpha(s, e);			cout << "\n\n";
		}
		else {
			cpl = getPosInt();		

			cout << "Calling \"printAlpha('" << s << "', '" << e << "', " << cpl << ")\"\n";		// cout
			printAlpha(s, e, cpl);			cout << "\n\n";
		}

		cout << "Do you want to choose the arguments again? ";
		c = getYorN();
	}

	cout << endl << "Thank you for printing with us!" << endl << endl;
	system("pause");
}

void printTitle() {      //   DONE
	cout
		<< "\n\t              Lab on Optional Arguments              "
		<< "\n\t                     By J. Guerra                    "
		<< endl << endl << endl;
}

void printAlpha(char s, char e, int cpl) {      //   DONE
	int count = 0;

	for (char l = s; l <= e; l++)
		cout << l << (count++ % cpl == cpl - 1 ? "\n" : "\t");
}

char getYorN() {      //   DONE
	char c;

	cin >> c;	cin.ignore(80, '\n');

	while (c != 'Y' && c != 'y' && c != 'N' && c != 'n') {
		cout << "Please type Y or N. Try again: ";
		cin >> c;		cin.ignore(80, '\n');
	}

	return c;
}

char getLetter() {             //   DONE
	char c;      

	cin >> c;		cin.ignore(80, '\n');

	while (c < 'A' || c >'Z' && c < 'a' || c > 'z') {
		cout << '\t' << c << " is NOT a letter. Try again: ";
		cin >> c;		cin.ignore(80, '\n');
	}

	return c;
}

char getE(char s) {
	char e = getMatching(s);
	
	while (e < s) {
		cout
			<< "\tEnd letter must be after starting letter."
			<< endl << "\tTry again: ";
		e = getMatching(s);
	}
	return e;
}

char getMatching(char s) {
	char e = getLetter();
	bool sCase = isUp(s);

	if (isUp(e) != sCase) {
		cout 
			<< "\tPlease enter a"
			<< (sCase == 0 ? " LOWER" : "n UPPER")
			<< " case letter. Try again: ";
		e = getLetter();
	}
	return e;
}

bool isUp(char c) {
	return c >= 'A' && c <= 'Z';
}