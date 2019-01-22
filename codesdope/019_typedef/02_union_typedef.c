#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// same as struct, but different (actually the same lol)
typedef union student{
	int roll_no;
	int phone_number;
	char name[30];
} st; // typdef union student as st

int main()
{
	st p1, p2, p3;

	p1.roll_no = 1;
	p1.phone_number = 1234567;
	strcpy(p1.name, "Brown");

	p2.roll_no = 2;
	p2.phone_number = 1233443;
	strcpy(p2.name, "RanchGod");

	p3.roll_no = 3;
	p3.phone_number = 4325643;
	strcpy(p3.name, "OhOnCod");

	printf("First student: \n> ");
	printf("roll no: %d, name: %s, phone_number: %d\n", 
		p1.roll_no, p1.name, p1.phone_number
	);

	printf("Second student: \n> ");
	printf("roll no: %d, name: %s, phone_number: %d\n", 
		p2.roll_no, p2.name, p2.phone_number
	);

	printf("Third student: \n> ");
	printf("roll no: %d, name: %s, phone_number: %d\n", 
		p3.roll_no, p3.name, p3.phone_number
	);

	return 0;
}