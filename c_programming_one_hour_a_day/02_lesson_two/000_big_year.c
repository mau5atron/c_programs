/*
	This program is used to calculate when a person will turn a specific 
	age 
*/ 

#include <stdio.h>
#define TARGET_AGE 88 // defines target age macro 

int year1, year2; // declaring initial and final year

int calcYear(int year1);

int main(void)
{
	// User is prompted to enter the year they were born 
	printf("What year was the subject bor?\n");
	printf("Please enter a 4-digit year (YYYY)\n");
	scanf("%d", &year1); // creates reference pointer to the value entered

	// Calculates the future year and displays it 
	year2 = calcYear(year1);

	printf(
		"Someone born in %d will be %d in %d.\n", year1, TARGET_AGE, year2
	);

	return 0;
}

int calcYear(int year1){
	return (year1 + TARGET_AGE);
}

/*
	The main() function 

	The only component required in every executable C program is the main()
	function 

	You can leave the void out and the program still works with most 
	compilers. The ANSI Standard states that you sbould include the word 
	"void" so you know that there is nothing sent to the main() function 

	Within the braces are statements that make up the body of the program. 
	Under normal circumstances, program execution starts at the first 
	statement in main() and terminates at the last statement in main()

	Per the ANSI Standard, the only statement that you need to include 
	in this example is the 

		return 

	statement on line 22.
	*/ 