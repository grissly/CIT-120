#include <iostream>
using namespace std;

void printTitle();
void mySwap(int &x, int &y);
void reorder(int &x, int &y, int &z);

void main() {
	int x, y, z;
	int const TEST = 6, ARG = 3;
	int testSuite[TEST][ARG] = {
		{ 1, 2, 3 },
		{ 1, 3, 2 },
		{ 2, 1, 3 },
		{ 2, 3, 1 },
		{ 3, 1, 2 },
		{ 3, 2, 1 }
	};

	printTitle();

	////////////////////////////////////////////////////////////////////////

	x = 1, y = 2, z = 3;

	cout
		<< "Before the call: x = " << x << " y = " << y << " z = " << z
		<< endl << x << y << z << endl;

	reorder(x, y, z);

	cout
		<< "After the call: x = " << x << " y = " << y << " z = " << z
		<< endl << x << y << z << endl << endl;

	////////////////////////////////////////////////////////////////////////

	x = 1, y = 3, z = 2;

	cout
		<< "Before the call: x = " << x << " y = " << y << " z = " << z
		<< endl << x << y << z << endl;

	reorder(x, y, z);

	cout
		<< "After the call: x = " << x << " y = " << y << " z = " << z
		<< endl << x << y << z << endl << endl;

	////////////////////////////////////////////////////////////////////////

	x = 2, y = 1, z = 3;

	cout
		<< "Before the call: x = " << x << " y = " << y << " z = " << z
		<< endl << x << y << z << endl;

	reorder(x, y, z);

	cout
		<< "After the call: x = " << x << " y = " << y << " z = " << z
		<< endl << x << y << z << endl << endl;

	////////////////////////////////////////////////////////////////////////

	x = 2, y = 3, z = 1;

	cout
		<< "Before the call: x = " << x << " y = " << y << " z = " << z
		<< endl << x << y << z << endl;

	reorder(x, y, z);

	cout
		<< "After the call: x = " << x << " y = " << y << " z = " << z
		<< endl << x << y << z << endl << endl;

	////////////////////////////////////////////////////////////////////////

	x = 3, y = 1, z = 2;

	cout
		<< "Before the call: x = " << x << " y = " << y << " z = " << z
		<< endl << x << y << z << endl;

	reorder(x, y, z);

	cout
		<< "After the call: x = " << x << " y = " << y << " z = " << z
		<< endl << x << y << z << endl << endl;

	////////////////////////////////////////////////////////////////////////

	x = 3, y = 2, z = 1;

	cout
		<< "Before the call: x = " << x << " y = " << y << " z = " << z
		<< endl << x << y << z << endl;

	reorder(x, y, z);

	cout
		<< "After the call: x = " << x << " y = " << y << " z = " << z
		<< endl << x << y << z << endl << endl;

	////////////////////////////////////////////////////////////////////////

	system("pause");

	cout << "\n\n\tBETTER way to test (using for loop and table format)\n\n";

	cout
		<< "\tx       y       z    " << endl
		<< "\t=====================" << endl;
	for (int i = 0; i < TEST; i++) {
		x = testSuite[i][0];
		y = testSuite[i][1];
		z = testSuite[i][2];

		cout << "Start:\t" << x << '\t' << y << '\t' << z << "\n";
		reorder(x, y, z);
		cout << "End:  \t" << x << '\t' << y << '\t' << z << "\n\n";
	}

	system("pause");
}

void printTitle() {
	cout
		<< "\n\t\t Lab on \"Driver testing the rearrange function\""
		<< "\n\t\t                  by J. Guerra                   "
		<< endl << endl;
}

void mySwap(int &x, int &y) {
	int temp = x;
	x = y;
	y = temp;
}

void reorder(int &x, int &y, int &z) {
	if (x > y)
		mySwap(x, y);
	if (y > z)
		mySwap(y, z);
	if (x > y)
		mySwap(x, y);
}