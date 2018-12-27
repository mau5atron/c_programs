#include <stdio.h>

int main()
{
	int a;
	for(a = 1; a <= 10; ++a){
		printf("dawg i dont speak italics in amish venti latte #%d\n", a);
	}

	// can also be 
	// int a = 1;
	// (; a <= 10; ++a)
	// but prefer the latter as it is more concise but the initial variable value can be defined by the user though that would be catastrophic

	return 0;
}