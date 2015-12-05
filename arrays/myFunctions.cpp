#include "myFunctions.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void printTitle() {    //   DONE
	cout
		<< "\n\t This is a lab on completely filled arrays "
		<< "\n\t               By J. Guerra                "
		<< endl << endl;
}

void load5(int a[], int n) {    //   DONE
	for (int i = 0; i < n; i++)
		a[i] = 5;
}


void printArr(const int a[], int n, int epl, ostream &os) {    //   DONE
	for (int i = 0; i < n; i++)
		os << a[i] << (i % epl == epl - 1 || i == n - 1 ? "\n" : "\t");
}