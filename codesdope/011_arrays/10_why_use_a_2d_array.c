#include <stdio.h>

int main()
{
	float student_grades[3][2];
	int i, j;
	for(i = 0; i < 3; ++i){
		// grades input from the users
		printf("starting input...\n");
		printf("Enter student grades: \n> student #%d", (i + 1));
		for(j = 0; j < 3; ++j){
			printf("\nSubject #%d\n> ", (j + 1));
			scanf("%f", &student_grades[i][j]);
		}
	}
	printf("\n\n\n");
	// printing out student grades
	for(i = 0; i < 3; ++i){
		printf("\nStudent grades for student #%d\n", (i + 1));
		// printing out the student subject studied
		for(j = 0; j < 2; ++j){
			printf("\nSubject #%d\n> %f\n", (j + 1), student_grades[i][j]);
		}
	}

	return 0;
}