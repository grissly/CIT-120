#include <iostream>
using namespace std;

void printTitle();
void mySwap(int &x, int &y);
void reorder(int &x, int &y, int &z);

void main() {
	int x, y, z;

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