#include <stdio.h>

int main()
{
	int a, b;

	for(a = 1, b = 5 ; a <= 5 && b >= 1 ; ++a, --b){
		printf("a = %d, b = %d\n", a, b);
		// this doesnt actually work without there being a check on both conditions 
	}

	return 0;
}