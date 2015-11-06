// Program to display payroll information in a nicely formatted table
// Output Formatting Payroll
// Programmer: Josh Guerra
// Last Modified: Sept. 29, 2015

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void main() {
	// prepare some strings to keep code for prompts "DRY"
	const string
		hours1 = "Hours worked Employee #", hours2 = " [Only whole hours will credited]: ",
		rate1 = "Hourly pay rate for Employee #", rate2 = " [not necessarily whole dollars]: ";

	// variables to hold user input:
	// h = employee hours; r = pay rate; hrs = total hrs all employees;
	// avg = average pay rate; tot = total wages paid by company
	int h1, h2, h3, h4, h5, hrs;
	double r1, r2, r3, r4, r5, avg, tot;

	// display program title block
	cout
		<< "\tThis program creates a nicely formatted table" << endl
		<< "\t                  Solution by                " << endl
		<< "\t                   J. Guerra                 " << endl << endl << endl;

	// prompt user for payroll info and clean keyboard buffer after each read in
	// for each employee whose info is entered, after the first, start with an end-line for spacing
	cout << hours1 + "1" + hours2; cin >> h1; cin.ignore(20, '\n');
	cout << rate1 + "1" + rate2; cin >> r1; cin.ignore(20, '\n');

	cout << endl << hours1 + "2" + hours2; cin >> h2; cin.ignore(20, '\n');
	cout << rate1 + "2" + rate2; cin >> r2; cin.ignore(20, '\n');

	cout << endl << hours1 + "3" + hours2; cin >> h3; cin.ignore(20, '\n');
	cout << rate1 + "3" + rate2; cin >> r3; cin.ignore(20, '\n');

	cout << endl << hours1 + "4" + hours2; cin >> h4; cin.ignore(20, '\n');
	cout << rate1 + "4" + rate2; cin >> r4; cin.ignore(20, '\n');

	cout << endl << hours1 + "5" + hours2; cin >> h5; cin.ignore(20, '\n');
	cout << rate1 + "5" + rate2; cin >> r5; cin.ignore(20, '\n');
	// end prompts

	// prepare table
	hrs = h1 + h2 + h3 + h4 + h5;
	avg = (r1 + r2 + r3 + r4 + r5) / 5.0;
	tot = h1*r1 + h2*r2 + h3*r3 + h4*r4 + h5*r5;

	cout
		<< endl << endl // addlines above table for spacing
		<< setprecision(2) << fixed << showpoint // formatting for floats

		// ouput table
		<< "         Employee#        Hours        Pay Rate       Total Pay " << endl
		<< "        ========================================================" << endl
		<< "             1" << setw(16) << h1 << setw(9) << "$" << setw(8) << r1 << setw(7) << "$" << setw(9) << h1*r1 << endl
		<< "             2" << setw(16) << h2 << setw(9) << "$" << setw(8) << r2 << setw(7) << "$" << setw(9) << h2*r2 << endl
		<< "             3" << setw(16) << h3 << setw(9) << "$" << setw(8) << r3 << setw(7) << "$" << setw(9) << h3*r3 << endl
		<< "             4" << setw(16) << h4 << setw(9) << "$" << setw(8) << r4 << setw(7) << "$" << setw(9) << h4*r4 << endl
		<< "             5" << setw(16) << h5 << setw(9) << "$" << setw(8) << r5 << setw(7) << "$" << setw(9) << h5*r5 << endl
		<< "       TOTAL/AVERAGE" << setw(10) << hrs << setw(9) << "$" << setw(8) << avg << setw(7) << "$" << setw(9) << tot 
		<< endl << endl << endl;
		// end table

	// keep console open until user is finished
	cout << "Please hit ENTER to terminate the program."; cin.get();
}