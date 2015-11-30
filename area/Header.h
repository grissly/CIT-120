//  Pre Condition:  NONE
// Post Condition:  Prints the Title to the console
void printTitle();         //   DONE

//  Pre Condition:  NONE
// Post Condition:  Prints the Menu to the console
void printMenu();        //   DONE

//  Pre Condition:	start <= end
// Post Condition:	Returns a valid integer in range [start, end]
//					Prints descriptive error messgaes
//					Removes everything from the cin buffer
//					Restores the cin object if needed
int getIntInRange(int start, int end);        //   DONE

//  Pre Condition:	NONE
// Post Condition:	Returns a valid Integer
//					Prints descriptive error messages
//					Removes everything from the cin buffer
//					Restores the cin object if needed
int getInt();        //   DONE

//  Pre Condition:	NONE
// Post Condition:	Returns a valid number
//					Prints descriptive error messages
//					Removes everything from the cin buffer
//					Restores the cin object if needed
double getNum();        //   DONE

//  Pre Condition:	NONE
// Post Condition:	Returns a valid positive number
//					Prints descriptive error messages
//					Removes everything from the cin buffer
//					Restores the cin object if needed
double getPosNum();        //   DONE

//  Pre Condition:	a >= 0
// Post Condition:	Returns the area of a circle with radius a
double area(double a);        //   DONE

//  Pre Condition:	a >= 0, b >= 0
// Post Condition:	Returns the area of a rectangle with length = a and width = b
double area(double a, double b);        //   DONE

//  Pre Condition:	a >= 0, b >= 0, c >= 0
//					a <= b + c, b <= a + c, c <= a + b
// Post Condition:	Returns the area of a triangle with sides a, b, and c
double area(double a, double b, double c);        //   DONE

//  Pre Condition:	NONE
// Post Condition:	validates that a, b, and c make a triangle
//					Prints descriptive error messages
//					Removes everything from the cin buffer
//					Restores the cin object if needed
void getTriangleSides(double &a, double &b, double &c);        //   DONE