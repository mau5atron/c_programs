#include <stdio.h>
#include <string.h>

typedef struct student{
	int roll_no;
	char name[30];
	int phone_number;
}st;

int main()
{
	st p1, p2, p3;

	p1.roll_no = 1;
	strcpy(p1.name, "Brown");
	p1.phone_number = 121236547;

	p2.roll_no = 2;
	strcpy(p1.name, "Waifu");
	p2.phone_number = 986464765;

	p3.roll_no = 3;
	strcpy(p3.name, "Ruckus");
	p3.phone_number = 69847694;

	printf("First student: \n");
	printf("roll no: %d, name: %s, phone num: %d\n", 
		p1.roll_no, 
		p1.name,
		p1.phone_number
	);

	printf("Second student: \n");
	printf("roll no: %d, name: %s, phone num: %d\n", 
		p2.roll_no, 
		p2.name,
		p2.phone_number
	);

	printf("Third student: \n");
	printf("roll no: %d, name: %s, phone num: %d\n", 
		p3.roll_no, 
		p3.name,
		p3.phone_number
	);

	return 0;
}

/*
	This example is the same as a structure, the only difference is that 
	instead of writing out struct student we wrote it as a single two
	letters, 'st' to take place instead of struct student.

	typedef can also be used with unions, using the same structure as if 
	using struct 
*/ 