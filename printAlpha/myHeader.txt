//  Pre Condition:  NONE
// Post Condition:  Prints the Title to the console
void printTitle();		// DONE

//  Pre Condition:  s < e
//					s, e should be letters of the same case 
// Post Condition:  Prints alphabet from [s, e] with cpl characters per line
void printAlpha(char s = 'A', char e = 'Z', int cpl = 5);	// DONE

//  Pre Condition:	NONE
// Post Condition:	Returns 'Y', 'y', 'N', or 'n'
//					Prints descriptive error message
//					Removes everything from the cin buffer
char getYorN();     	// DONE