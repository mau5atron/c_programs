#include <stdio.h>
#include <ctype.h>

int main()
{
	char grade;
	printf("Enter your grade\n> ");
	scanf(" %c", &grade);
	// after getting the input 
	// we take the input and make it uppercase
	grade = toupper(grade);
	printf("You entered %c\n", grade);

	switch(grade){
		case 'A':
			printf("Fucking great, suck my cock :)\n");
			break;

		case 'B':
			printf("Definitely could of done better but can still suck my cock :)\n");
			break;

		case 'C':
			printf("You kinda suck noah fence\n");
			break;

		case 'D':
		  printf("This really sucks im gonna nut\n");
		  break;

		case 'F':
      printf("LMAO\n");
      break;

    default:
    	printf("Honestly dont know what happened but this doesnt add up lmao.\n");
	}
	return 0;
}