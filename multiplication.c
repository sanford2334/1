#include "calc.h"

int multiplication(int g, int h, int i)
{
	printf("Please enter first number to be multiplied:\n");
	scanf("%lf",&g);
	printf("Please enter second number to be multiplied:\n");
	scanf("%lf",&h);
	i=g*h;
	printf("The answer is: %lf\n", i);
	return(i);
}
