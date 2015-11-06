// This program prints prime numbers
// Title: forLab3
// Programmer: J. Guerra
// Last Modified: Nov 6, 2015

/*
Print if a number is prime (no functions, use a bool flag - Do NOT use break)
Make your code efficient: stop the loop when you find a factor,
do not make needless iterations.
*/

#include <iostream>
using namespace std;

void main() {
	int num;
	bool isPrime;

	// print title
	cout
		<< "\n\t            Classify a number as prime or not.            "
		<< "\n\t Uses for and bool flags as well as conditional operator. "
		<< "\n\t                      by J. Guerra                        " << endl << endl;

	// loop for testing
	while (true) {
		isPrime = true;		// flag needs to be reset each time

		// input prompt
		cout << "Give me an integer: ";
		cin >> num;		cin.ignore(30, '\n');
		// validate
		while (num <= 1) {
			cout << "Prime numbers are defined for integers bigger than 1. Try again: ";
			cin >> num;		cin.ignore(30, '\n');
		}

		// processing
		for (int i = 2; i <= num / 2 && isPrime; i++)
			isPrime = num % i;

		// print result
		cout << num << " is" << (isPrime ? " " : " NOT ") << "a prime number";

		// separator
		cout << "\n\n~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n\n";
	}
}

/*
This lab used a bit of validation, I just used a while loop to keep prompting the user
until I got a positive integer. We learned this technique in a previous lab.

I had some trouble getting the the condition right. I had to make it a double condition.
Since factors come in pairs [factor1 * factor2 = product], there are no factors greater
than half the original number. I wanted to break the condition before testing those unneeded
integers. Also, if a factor is found there is no need to continue testing for more factors.

Normally when a flag is used, good style is to have it default to false. I tried using a
flag defaulting to false and testing it using the "not" logical operator, however this made
the code muddled and ineffectual. In this lab, the nature of the problem and the logical
aproach to a solution requires a flag defaulting to true: the process of testing if a number is
prime involves assuming that it is prime until you can eliminate all potential factors as
actual factors; also, the loop condition needs a true value to continue the loop.
*/