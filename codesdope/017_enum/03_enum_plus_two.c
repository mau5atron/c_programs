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

/*
	In this example, the value of thurs i.e. 4 is assigned to the variable 
	day. Since we are printing 'day + 2' i.e. 6 (=4 + 2), the output is 6
*/ 