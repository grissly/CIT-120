//  Pre Condition:  NONE
// Post Condition:  Prints the Title to the console
void printTitle();

//  Pre Condition:  NONE
// Post Condition:  Prints the Menu to the console
void printMenu();

//  Pre Condition:  NONE
// Post Condition:  Returns a valid letter character
//					Prints error for inapropriate characters
//					Clears the keyboard buffer
char getLetter();

//  Pre Condition:  NONE
// Post Condition:	Returns a valid number
//					Prints error if letter or symbol is entered
//					Clears keyboard buffer
double getNum();

//  Pre Condition:	NONE
// Post Condition:	Returns a valid Integer
//					Prints error if letter or symbol is entered
//					Prints error if non-integer number
//					Clears keyboard buffer
int getInt();

//  Pre Condition:	NONE
// Post Condition:	Returns a valid positive integer
//					Prints error if letter or symbol is entered
//					Prints error for non-integer number
//					Prints error for non-positive integer
//					Clears keyboard buffer
int getPosInt();

//  Pre Condition:	x must be a positive integer
// Post Condition:	classifies number and returns an integer code:
//					-1 means number is deficient (number is less than sum of its factors)
//					0 means number is perfect (number is equal to sum of its factors)
//					1 means number is abundant (number is more than sum of its factors)
int classifyInt(int x);

//  Pre Condition:	x must be an integer on range [1, 4]
// Post Condition:	Prints ASCII Table
void printASCII(int x);

//  Pre Condition:	start must be less than or equal to end
// Post Condition:	Returns a valid integer in range [start, end]
//					Prints error for inappropraite charater
//					Prints descriptive error for input < or > range
//					Prints error for input out of range
//					Clears keyboard buffer
int getIntInRange(int start, int end);

//  Pre Condition:	start must be less than or equal to end
// Post Condition:	Returns a valid number in range [start, end]
//					Prints error for inappropraite charater
//					Prints descriptive error for input < or > range
//					Prints error for input out of range
//					Clears keyboard buffer
double getNumInRange(double start, double end);

int getPrime();

bool isPrime(int x);

int getIntMoreThan(int n);