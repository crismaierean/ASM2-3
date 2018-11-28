#include <stdio.h>
#include "contacts.h"
#include "contactHelpers.h"

void getContact(struct Contact *contact)
{
	int getNum;
	printf("Please enter the contact's first name: ");
	scanf(" %30[^\n]s", contact->name.firstName);
	printf("Do you want to enter a middle initial(s)? (y or n): ");
	clearKeyboard();
	if (yes() == 1) {
		printf("Please enter the contact's middle initial(s): ");
		scanf(" %6[^\n]s", contact->name.middleInitial);
		clearKeyboard();
	}
	printf("Please enter the contact's last name: ");
	scanf(" %35[^\n]s", contact->name.lastName);


	printf("Please enter the contact's street number: ");
	do {
		getNum = getInt();
		if (getNum < 0) {
			printf("*** INVALID STREET NUMBER *** <must be a positive number>: ");
		}
	} while (getNum < 0);
	contact->address.streetNumber = getNum;
	printf("Please enter the contact's street name: ");
	scanf(" %40[^\n]s", contact->address.street);
	printf("Do you want to enter an apartment number? (y or n): ");
	clearKeyboard();
	if (yes() == 1) {
		printf("Please enter the contact's apartment number: ");
	}
	do {
		getNum = getInt();
		if (getNum < 0) {
			printf("*** INVALID APARTMENT NUMBER *** <must be a positive number>: ");
		}
	} while (getNum < 0);
	contact->address.apartmentNumber = getNum;
	printf("Please enter the contact's postal code: ");
	scanf(" %7[^\n]s", contact->address.postalCode);
	clearKeyboard();
	printf("Please enter the contact's city: ");
	scanf(" %40[^\n]s", contact->address.city);
	printf("Please enter the contact's cell phone number: ");
	scanf(" %10[^\n]", contact->numbers.cell);
	printf("Do you want to enter a home phone number? (y or n): ");
	clearKeyboard();
	if (yes() == 1) {
		printf("Please enter the contact's home phone number: ");
		scanf(" %10[^\n]", contact->numbers.home);
	}
	printf("Do you want to enter a business phone number? (y or n): ");
	if (yes() == 1) {
		printf("Please enter the contact's business phone number: ");
		scanf(" %10[^\n]", contact->numbers.business);
	}

}