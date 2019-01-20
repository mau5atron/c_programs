#include <stdlib.h>
#include <stdio.h>

enum days{
	/*
		Sunday and Monday start out at index 0, 1, but when the default value
		of tuesday is changed to five, every proceeding element of days goes
		to the next value. 

		wed == 6, thurs == 7, fri == 8, sat == 9
	*/ 
	sun, 
	mon, 
	tue = 5,
	wed, 
	thurs,
	fri,
	sat 
};

int main()
{
	enum days day;
	day = wed;
	printf("%d\n", day);
	return 0;
}

/*
	Notes from page

	The default value of sun will be 0, mon will be 1, tue will be 2 and so 
	on. In the above example, we defined the value of tue as 5. So the 
	values of wed, thurs, fri and sat will become 6, 7, 8, 9 respectively.

	There will be no effect on the values of sun and mon which will remain 0 and 1 respectively. Thus the value of thurs i.e. 7 will get printed.
*/ 