#include "calc.h"

int subtraction(int d, int e, int f)
{
	printf("Please enter first number to be subtracted:\n");
	scanf("%lf",&d);
	printf("Please enter second number to be subtracted:\n");
	scanf("%lf",&e);
	f=d-e;
	printf("The answer is: %lf\n", f);
	return(f);
}
