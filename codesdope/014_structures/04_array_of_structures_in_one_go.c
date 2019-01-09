#include <stdio.h>
#include <string.h>

int main()
{
	struct student
	{
		int roll_no;
		char name[30];
		int phone_number;
	};

	struct student p1 = {1, "Gabriel", 2099172108};
	struct student p2;

	p2 = p1; // copying all elements of p1 to p2

	printf("roll_no: %d\n", p2.roll_no);
	printf("name: %s\n", p2.name);
	printf("phone_number: %d\n", p2.phone_number);

	return 0;
}