#include <stdio.h>
#include <string.h>

struct student
{
	int roll_no;
	char name[30];
	int phone_number;
};

void display(struct student *stu){
	printf("Roll no: %d\n", stu->roll_no);
	printf("Name: %s\n", stu->name);
	printf("Phone no: %d\n", stu->phone_number);
}

int main()
{
	struct student s;
	s.roll_no = 4; // assigning roll no to structure variable 
	strcpy(s.name, "Gabriel"); // using strcpy to copy string into
	// structure variable

	s.phone_number = 8888888; // assigning number to structure variable 
	display(&s);

	return 0;
}

/*
	Passing by reference 
	
	In passing by reference, address of structure variable is passed to the function. In this, if we change the structure variable which is inside the function, the original structure variable which is used for calling the function changes. This was not the case in calling by value. 

	This case is similar to the previous one, the only differnce is that this time, we are passing the address of structure variable to the function. While declaring the function, we have passed the pointer of the copy 'stu' of the structure variable 's' in its argument. Since the pointer is of a variable of type structure named student, we have written 'struct student' before the name of the pointer in the argument of the function. In the function, we accessed the members of the pointer using -> sign as discussed before.
	
*/ 