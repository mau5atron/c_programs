/*
	we close an opened file using fclose() function

	Syntax for fclose()
*/

#include <stdio.h>

int main()
{
	FILE *fr;
	fclose(fr);

	return 0;
}

/*
	fclose() function returns zero if a file is successfully closed. If there is some error in closing the file, EOF(End of File) is returned.
*/ 