#include <stdio.h>
// instead of a macro here we create a function instead
float CircleArea(int r){
	float a;
	a = 3.14*r*r;
	return a;
}

int main()
{
	int radius;
	float area;

	printf("Enter radius of circle: \n> ");
	scanf("%d", &radius);

	area = CircleArea(radius);
	printf("Area of circle is %.2f\n", area);

	return 0;
}