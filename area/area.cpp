// demonstrates overloading funtions
// program calculates area of circle, rectangle, and triangle
// Project Name: area
// Programmer: J. Guerra
// Last Modified: Nov 25, 2015

#include <iostream>
using namespace std;

void printTitle();
void printMenu();
double area(double a);
double area(double a, double b);
double area(double a, double b, double c);

void main() {
	double a, b, c;
	char action;

	printTitle();
	printMenu();

}

void printTitle() {
	cout
		<< "\n\t              Lab on Overloading Functions              "
		<< "\n\t Calculate the Area of a Circle, Rectangle, or Triangle "
		<< "\n\t                      By J. Guerra                      " 
		<< endl << endl << endl;
}

void printMenu();

double area(double a) {
	return 3.1415926 * a * a;
}

double area(double a, double b) {
	return a * b;
}

double area(double a, double b, double c) {
	int p = (a + b + c) / 2;

	return sqrt(p * (p - a) * (p - b) * (p - c));
}