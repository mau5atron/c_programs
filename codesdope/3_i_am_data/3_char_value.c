#include <stdio.h>

int main()
{
	char ca;
	char cb;
	// a works bc it is assigned with ''
	ca = 'a';
	// b does not work for assigning chars with "", will throw incompatible pointer to integer conversion
	// cb = "b";

	printf("This is %c\n", ca);
	// printf("This is %c\n", cb);

	return 0;

}