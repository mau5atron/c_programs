#include <stdio.h>

int div_2(int a){
	if(a % 2 == 0){
		return 1;
	} else {
		return 0;
	}
}

void div_6(int b){
	// here we used div_2 instead of just using b % 2 == 0 directly to test the use of functions inside of other functions 
	if(div_2(b) == 1 && b % 3 == 0){
		printf("Yeah the number is divisible by 6 chode.\n");
	} else {
		printf("Nah, that is not divisible by 6 owo.\n");
	}
}

int main()
{
	div_6(12);
	div_6(25);
	div_6(36);
	div_6(60);
	
	return 0;
}