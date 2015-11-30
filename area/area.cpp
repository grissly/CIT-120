// demonstrates overloading funtions
// program calculates area of circle, rectangle, and triangle
// Project Name: area
// Programmer: J. Guerra
// Last Modified: Nov 25, 2015

#include <iostream>
#include "Header.h"
using namespace std;

void main() {
	double 
		a, b, c,			// arguements to calculate area
		result;				// hold output
	int o;					// option

	system("color 2f");		// console fun :D | 2 = green background, f = white text

	while (true) {
		printTitle();
		printMenu();

		cout << "Please enter your choice: ";
		o = getIntInRange(1, 4);

		cout << endl;
		switch (o) {
			case 1:				////////	Option 1 (Area of Circle)		////////   DONE
				cout << "Give me the radius of a circle: ";
				a = getPosNum();

				result = area(a);

				cout << "\tThe area of the circle is " << result;

				break;

			case 2:				////////	Option 2 (Area of Rectangle)	////////   DONE
				cout << "Give me the length of a rectangle: ";
				a = getPosNum();
				cout << "\t... and the width: ";
				b = getPosNum();

				result = area(a, b);

				cout << "\tThe area of the rectangle is " << result;

				break;
			case 3:				////////	Option 3 (Area of Triangle)		////////   DONE
				cout << "Give me the lengths of the sides of a triangle." << endl;
				getTriangleSides(a, b, c);

				result = area(a, b, c);

				cout << "\tThe area of the triangle is " << result;

				break;
			case 4:				////////	Option 4 (Close Program)		////////   DONE
			default:
				cout << "Thank you for using my program." << endl << endl;
				system("pause");
				exit(0);
		}

		// Wash. Rinse. Repeat.
		cout << endl << endl;
		system("pause");
		system("cls");
	}
}