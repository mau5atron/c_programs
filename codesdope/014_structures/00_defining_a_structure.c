/*
	We use structures to store different types of data. For example, you are a student. Your name is a string, your phone number and roll_no are integers. So, name, address and phone number are those different types of data. Here, structure comes into picture.
*/ 

// Defining a structure: 
struct structure_name 
{
	data-type member-0;
	int member-1;
	char member-2;
	float member-3;
};

// In our case, lets name the structure as student

struct student 
{
	int roll_no;
	char name[30];
	int phone_number;
};

/*
	Just as we declare variables of type int, char, etc, we can declare variables of structure as well.

	Suppose, we want to store the roll no, name and phone number of three students. For this, we will define a structure of name student (as declared above ) and then declare three variables, say p1, p2, p3 (which will represent the three students respectively) of the structure 'student'. This declaration will be done in the main function 
*/ 

struct student 
{
	int roll_no;
	char nanme[30];
	int phone_number;
};

int main()
{
	struct student p1, p2, p3;
	// here p1... are the variabbles of the structure 'student';
}

// We can also declare structure variables at the time of defining structure as follows 

struct student 
{
	int roll_no;
	char name[30];
	int phone_number;
} p1, p2, p3;

// How to enter the details of each student i.e. roll_no name and phone number 
// To assign a roll number to the first student we wiykd beed to access the roll number of the first student. This can be done by writing

p1.roll_no = 1;

// In a structure we use dot variables to use variables
// If we want to assign any string value , we will use strcpy as follows

strcpy(p1.name, "Brown");
