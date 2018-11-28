#include <stdio.h>
#include "contacts.h"

int main(void) 
{
	struct Contact contact;	
	printf("Contact Management System\n");
	printf("=========================\n");
	
	getName(&contact.name);
	getAddress(&contact.address);
	getNumbers(&contact.numbers);

	printf("\nContact Details\n");
	printf("=================\n");
	printf("Name Details\n");
	printf("------------\n");
	printf("First name: %s\n", contact.name.firstName);
	printf("Middle initial(s): %s\n", contact.name.middleInitial);
	printf("Last name: %s\n\n", contact.name.lastName);
	printf("Address Details\n");
	printf("---------------\n");
	printf("Street number: %d\n", contact.address.streetNumber);
	printf("Street name: %s\n", contact.address.street);
	printf("Apartment: %d\n", contact.address.apartmentNumber);
	printf("Postal code: %s\n", contact.address.postalCode);
	printf("City: %s\n\n", contact.address.city);
	printf("Phone Numbers:\n");
	printf("--------------\n");
	printf("Cell phone number: %s\n", contact.numbers.cell);
	printf("Home phone number: %s\n", contact.numbers.home);
	printf("Business phone number: %s\n\n", contact.numbers.business);
	printf("Structure test for Name, Address, and Numbers Done!\n");

	return 0;
}