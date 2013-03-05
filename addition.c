#include "calc.h"

int addition(int a, int b, int c)
{
	printf("Please enter first number to be added:\n");
	scanf("%lf",&a);
	printf("Please enter second number to be added:\n");
	scanf("%lf",&b);
	c=a+b;
	printf("The answer is: %lf\n", c);
	return(c);
}
