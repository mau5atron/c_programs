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

