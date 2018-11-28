#ifndef CONTACTS_H

#define CONTACTS_H

struct Name {
	char firstName[31];
	char middleInitial[7];
	char lastName[36];
};

struct Numbers {
	char cell[11];
	char home[11];
	char business[11];

};

struct Address {
	int streetNumber;
	char street[41];
	int apartmentNumber;
	char postalCode[8];
	char city[41];
};

struct Contact {
	struct Name name;
	struct Address address;
	struct Numbers numbers;
};

void getName(struct Name *n);

void getAddress(struct Address *a);

void getNumbers(struct Numbers *m);

void getContact(struct Contact *c);

#endif // !CONTACTS_H
