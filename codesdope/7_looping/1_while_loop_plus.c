#include <stdio.h>

int main()
{
	char choice = 'y';

	while(choice == 'y'){
		int a;
		printf("Enter a number to check if it is odd or even: \n> ");
		scanf("%d", &a);

		if(a % 2 == 0){
			printf("Your number is even.\n");
		} else if(a % 2 != 0){
			printf("Your number is odd.\n");
		} else{
			printf("dawg i dont understand italics\n");
		}

		printf("Want to check more numbers? type 'y' for yes and 'n' for no.\n> ");
		scanf(" %c", &choice);
	}

	return 0;
}