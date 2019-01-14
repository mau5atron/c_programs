#include <stdio.h>

#define READ "r"
#define WRITE "w"

int main()
{
	/*
		While getc and putc are used for characters, we used fscanf() and
		fprintf() to read and write string to a file.
	*/ 

	FILE *fp;
	char str[40];
	int n;
	char *filename = "welcome_04.txt"; // declaring file name 


	fp = fopen(filename, WRITE);
	printf("Enter a string and a number: \n> ");
	scanf("%s %d", str, &n); // reads from keyboard and assigns pointers to values

	fprintf(fp, "%s %d\n", str, n); // writes to file

	fclose(fp);
	fp = fopen(filename, READ); 
	fscanf(fp, "%s%d", str, &n);	// reading from file
	printf("%s %d\n", str, n); // displaying on screen 

	fclose(fp);
	return 0;

}
