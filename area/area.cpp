// demonstrates overloading funtions
// program calculates area of circle, rectangle, and triangle
// Project Name: area
// Programmer: J. Guerra
// Last Modified: Nov 25, 2015

#include <iostream>
using namespace std;

double area(double a);
double area(double a, double b);
double area(double a, double b, double c);

void main() {
	double a, b, c;
	char action;


}

double area(double a) {
	return 3.1415926 * a * a;
}

double area(double a, double b) {
	return a * b;
}

double area(double a, double b, double c) {

}