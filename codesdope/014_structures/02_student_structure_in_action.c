#include <stdio.h>
#include <string.h>

void dash_line() {
	printf("----------------------\n");
};

int main()
{
	struct student
	{
		int roll_no;
		char name[30];
		int phone_number;
	};

	struct student p1 = {1, "Brown", 123334};
	struct student p2, p3;

	p2.roll_no = 2;
	strcpy(p2.name, "Sam");
	// always use strcpy to assign a string value to a string variable

	p2.phone_number = 12423235;
	p3.roll_no = 3;

	strcpy(p3.name, "Addy");
	p3.phone_number = 121243242;

	printf("First student\nroll_no: %d\n", p1.roll_no);
	printf("name: %s\nphone_number: %d\n", p1.name, p1.phone_number);
	dash_line();	

	printf("Second student\nroll_no: %d\n", p2.roll_no);
	printf("name: %s\nphone_number: %d\n", p2.name, p2.phone_number);
	dash_line();

	printf("Third student\nroll_no: %d\n", p3.roll_no);
	printf("name: %s\nphone_number: %d\n", p3.name, p3.phone_number);
	dash_line();

	return 0;
}	

// always use strcpy to assign a string value to a string variable
/*
	The reason for this is that in C, we cannot equate two strings (i.e. arrays). If we had written p1.name = "Brown";, that would have given an error. Therefore, bby writing strcpy(p1.name, "Brown");, we are copying the string 'Brown' to the string variable p1.name.
*/ 

// This is just to show that can also initialize a structure this way
struct student p1 = {1, "Brown", 122324};
// Structures use continuous memory locations