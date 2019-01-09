/*
	We can also make an array of structures. In the first example in structures, we stored the data of 3 students. Now suppose we need to store the data of 100 such children. Declaring 100 separate variabbles of structure is definitely not a good option. For that, we neeed to create an array of structures.

	Below, an exmple for 5 students.
*/ 

#include <stdio.h>

struct student
{
	int roll_no;
	char name[30];
	int phone_number;
};

void dash_line(){
	printf("-----------------\n");
};

int main()
{
	struct student stud[5];
	int i;

	for(i = 0; i < 4; ++i){
		printf("Student %d\n", i + 1);
		printf("Enter roll_no: \n> ");
		scanf("%d", &stud[i].roll_no);

		printf("Enter name: \n> ");
		scanf("%s", *&stud[i].name);

		printf("Enter phone number: \n> ");
		scanf("%d", &stud[i].phone_number);
		dash_line();
	}
	dash_line();
	dash_line();

	for(i = 0; i < 4; ++i){
		// add a 1 bc index starts at 0
		// since we are showing which student number we are printing
		printf("Student %d\n", i + 1);
		printf("Roll no: %d\n", stud[i].roll_no);
		printf("Name: %s\n", stud[i].name);
		printf("Phone number: %d\n", stud[i].phone_number);
		dash_line();
	}
	
	return 0;
}

