#include <stdio.h>
#include <string.h>

struct student 
{
	int roll_no;
	char name[30];
	int phone;
};

void display(struct student stu){
	printf("Roll no: %d\n", stu.roll_no);
	printf("Name: %s\n", stu.name);
	printf("Phone: %d\n", stu.phone);
}


int main()
{	
	struct student s; // defining current structure name being used 
	// after definition and structure variables defined at the top.
	s.roll_no = 4;
	strcpy(s.name, "Gabriel");
	s.phone = 225345363;
	display(s);

	return 0;
}