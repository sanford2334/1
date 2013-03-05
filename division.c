#include "calc.h>"

int division(int j, int k, int l)
{
	printf("Please enter first number to be divided:\n");
	scanf("%lf",&j);
	printf("Please enter second number to be divided:\n");
	scanf("%lf",&k);
	l=j/k;
	printf("The answer is: %lf\n", l);
	return(l);
}
