/*
	There are pointers for structures just like there are for int, char, float... etc. other data types. 

	These pointers are called structure pointers 

	struct struct_name
	{
		int member-1;
		char member-2;
		float member-3;
	};
	
	main()
	{
		struct structure_name *ptr;
	}

*/ 

#include <stdio.h>

int main()
{
	struct student
	{
		char name[10];
		int roll_no;
	};

	struct student stud = {"Sam", 1}; // student structure
	struct student *ptr; // declaring pointer of a structure student

	ptr = &stud; // pointer ptr pointing to structure stud

	printf("%s %d\n", stud.name, stud.roll_no);
	// THIS IS HOW YOU CALL POINTERS OF STRUCTURES OMGs
	printf("%s %d\n", ptr->name, ptr->roll_no);
	// using -> pointer arrow to structure works similar to using (.) 
	// with structure variables
}