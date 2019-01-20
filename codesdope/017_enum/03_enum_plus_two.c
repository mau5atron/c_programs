#include <stdlib.h>
#include <stdio.h>

enum days{
	sun, 
	mon,
	tue,
	wed,
	thurs,
	fri,
	sat
};

int main()
{
	enum days day;
	day = thurs;
	printf("%d\n", day + 2); // thurs == 4, + 2, thurs == 6
	return 0;
}