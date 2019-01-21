#include <stdio.h>
#include <stdlib.h>
#include <string.h>

union student{
	int roll_no;
	char name[30];
	int phone_number;
};

int main()
{
	union student p1;

	p1.roll_no = 1;
	printf("Roll no: %d\n", p1.roll_no);

	strcpy(p1.name, "Brown");
	printf("Name: %s\n", p1.name);

	p1.phone_number = 123456788;
	printf("Phone number: %d\n", p1.phone_number);

	return 0;
}

/*
	Here, first we assigned the value of roll_no as 1 and printed it. SO
	currently, the value off the other members is some garbage value and
	that of roll_no is 1, so it got printed as it is. After that, we assigned a string value "Brown" to name, so now roll_no and phone_number
	contained garbage values and name got printed. Similarly, we printed
	phone_number.
*/ 