#include <stdio.h>
#include <stdlib.h>

/*
	Unions are declared and used in the same way as structures. Like 
	structures, it is also used to store different types of data. 

	Before going into the differences between structure and union, let's 
	first see how to define a union.

	union union_name{
		data-type member-1;
		data-type member-2;
		data-type member-3;
		data-type member-4;
	};

	This is basically the same same syntax of structure. But this time we 
	use the keyword 'union.'

	Let's take the same example we took in structure. Here we will take 
	the name of union as student and name, roll_no and phone_number as 
	its members as follows.
*/ 

union student{
	int roll_no;
	char name[30];
	int phone_number;
};

/*
	We declare the variables of a union in the same way as we declare those of a structure. 

	Let's take the same example in which we want to store the roll no, name
	and phone number of three students. To do this, we will define a union named student as we have defined above and then we will declare its 
	three variables p1, p2, p3 (which will represent the three students respectively) in the main function. 
*/ 

int main()
{
	union student p1, p2, p3;
	
	/*
		or union variables can be declared at the time of defining the union


	union student{
		int roll_no;
		char name[30];
		int phone_number;
	} p1, p2, p3;
	*/

	/*
		like structure, we assign the name, roll no and phone number
		of the first student (p1) by accessing its name, roll no and phone
		number as follows.

		p1.roll_no = 1;

		Here p1.roll_no implies roll_no of p1

		Always use strcpy to assign a string value to a variable as we 
		assigned the name "Brown" to p1(first student)

		strcpy(p1.name, "Brown")
	
		These are the similarities of struct and union
	*/ 
}

