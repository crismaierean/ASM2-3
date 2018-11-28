#include <stdio.h>
#include "contactHelpers.h"
#include "contacts.h"

/* -------------------------------------------

Name:

Student number:

Email:

Section:

Date:

----------------------------------------------

Assignment: 2

Milestone:  2

---------------------------------------------- */



#define _CRT_SECURE_NO_WARNINGS


// This source file needs to "know about" the functions you prototyped

//       in the contact helper header file.

// HINT: Put the header file name in double quotes so the compiler knows

//       to look for it in the same directory/folder as this source file

//       #include your contactHelpers header file on the next line:







//------------------------------------------------------

// Function Definitions

//------------------------------------------------------



// +-------------------------------------------------+

// | ====== Assignment 2 | Milestone 2 =======       |

// +-------------------------------------------------+

// | Put empty function definitions below...         |

// |                                                 |

// | - The clearKeyboard function is done for you    |

// +-------------------------------------------------+



// clearKeyboard:  Empty function definition 
void clearKeyboard(void)
{
	while (getchar() != '\n'); // empty execution code block on purpose
}


// pause: Empty function definition goes here:
void pause(void)
{
	printf("(Press Enter to Continue)");
	clearKeyboard();
}


// getInt: Empty function definition goes here:
int getInt(void)
{
	char NL;
	int Value;
	int newVal;

	do {
		scanf("%d%c", &Value, &NL);
		if (NL == '\n') {
			newVal = Value;
		}
		else {
			clearKeyboard();
			printf("*** INVALID INTEGER *** <Please enter an integer>: ");
		}
	} while (NL != '\n');
	return newVal;
}


// getIntInRange: Empty function definition goes here:
int getIntInRange(int a, int b)
{
	int r1;
	int ranVar = 0;
	int newSet;
	do {
		r1 = getInt();
		if (r1 >= a && r1 <= b) {
			newSet = r1;
			ranVar = 1;
		}
		else {
			printf("*** OUT OF RANGE *** <Enter a number between %d and %d>: ", a, b);
		}
	} while (ranVar == 0);
	return newSet;
}


// yes: Empty function definition goes here:
int yes(void)
{
	char charTest;
	char N;
	int returnVal = 50;
	do {
		scanf("%c%c", &charTest, &N);

		if (N == '\n') {
			if (charTest == 'y' || charTest == 'Y') {
				returnVal = 1;
			}

			else if (charTest == 'n' || charTest == 'N') {
				returnVal = 0;
			}
		}
		else {
			clearKeyboard();
			printf("*** INVALID ENTRY *** <Only (Y)es or (N)o are acceptable>: ");
		}
	} while (N != '\n');
	return returnVal;
}


// menu: Empty function definition goes here:
int menu(void)
{
	int get;
	printf("Contact Management System\n");
	printf("-------------------------\n");
	printf("1. Display contacts\n");
	printf("2. Add a contact\n");
	printf("3. Update a contact\n");
	printf("4. Delete a contact\n");
	printf("5. Search contacts by cell phone number\n");
	printf("6. Sort contacts by cell phone number\n");
	printf("0. Exit\n");
	printf("\n");
	printf("Select an option:> ");
	get = getIntInRange(0, 6);
	return get;
}

// contactManagerSystem: Empty function definition goes here:
void contactManagerSystem(void)
{
	int flag = 0;
	do {
		switch (menu()) {
		case 0:
			printf("\nExit the program? (Y)es/(N)o: ");
			if (yes() == 1) {
				printf("\nContact Management System: terminated\n");
				flag = 1;
			}
			else {
				printf("\n");
			}
			break;
		case 1:
			printf("\n<<< Feature 1 is unavailable >>>\n\n");
			pause();
			printf("\n");
			break;
		case 2:
			printf("\n<<< Feature 2 is unavailable >>>\n\n");
			pause();
			printf("\n");
			break;
		case 3:
			printf("\n<<< Feature 3 is unavailable >>>\n\n");
			pause();
			printf("\n");
			break;
		case 4:
			printf("\n<<< Feature 4 is unavailable >>>\n\n");
			pause();
			printf("\n");
			break;
		case 5:
			printf("\n<<< Feature 5 is unavailable >>>\n\n");
			pause();
			printf("\n");
			break;
		case 6:
			printf("\n<<< Feature 6 is unavailable >>>\n\n");
			pause();
			printf("\n");
			break;
		}
	} while (flag == 0);
}


