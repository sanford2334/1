/* Release 0.1
   Developped by Michael Sanford
   If errors or upgrades wanted or found, please email sanford2334@gmail.com */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Addition Function */

int addition(double a, double b, double c)
{
	printf("Please enter first number to be added:\n");
	scanf("%lf",&a);
	printf("Please enter second number to be added:\n");
	scanf("%lf",&b);
	c = a + b;
	printf("The answer is: %lf\n\n", c);
}

/* Subtraction Function */

int subtraction(double d, double e, double f)
{
	printf("Please enter first number to be subtracted:\n");
	scanf("%lf",&d);
	printf("Please enter second number to be subtracted:\n");
	scanf("%lf",&e);
	f = d - e;
	printf("The answer is: %lf\n\n", f);
}

/* Multiplication Function */

int multiplication(double g, double h, double i)
{
	printf("Please enter first number to be multiplied:\n");
	scanf("%lf",&g);
	printf("Please enter second number to be multiplied:\n");
	scanf("%lf",&h);
	i = g * h;
	printf("The answer is: %lf\n\n", i);
}

/* Division Function */

int division(double j, double k, double l)
{
	printf("Please enter first number to be divided:\n");
	scanf("%lf",&j);
	printf("Please enter second number to be divided:\n");
	scanf("%lf",&k);
	l = j / k;
	printf("The answer is: %lf\n\n", l);

}

/* Complete Calculator */

int main(void) 
{
	int count;
	double a, b, c, d, e, f, g, h, i, j, k, l;
	char fct;
	do
	{
		printf("Enter oreration desired:\n");
		printf("The choices are:\n");
		printf("a=addition\n");
		printf("b=subtraction\n");
		printf("c=multiplication\n");
		printf("d=division\n\n");
		fct=getch();
		if(fct == 'a')
		{
			addition(a, b, c);	
		}
		else if(fct == 'b')
		{
			subtraction(d, e, f);
		}
		else if(fct == 'c')
		{
			multiplication(g, h, i);
		}
		else if(fct == 'd')
		{
			division(j, k, l);
		}
		else
		{
			printf("Learn to spell!\n4\n");
		}
	}
	while(count++<100);
	return(0);
}
