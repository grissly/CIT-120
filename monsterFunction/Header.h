//  Pre Condition:  NONE
// Post Condition:  Prints the Title to the console
void printTitle();

//  Pre Condition:  NONE
// Post Condition:  Prints the Menu to the console
void printMenu();

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

//  Pre Condition:	start must be less than or equal to end
// Post Condition:	Returns a valid integer in range [start, end]
//					Prints error for inappropraite charater
//					Prints descriptive error for input < or > range
//					Prints error for input out of range
//					Clears keyboard buffer
int getIntInRange(int start, int end);