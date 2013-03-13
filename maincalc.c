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

/* Finding opposite with sine function */

int oppsin(double m, double n, double o)
{
	printf("Enter hypotenuse length:");
	scanf("%lf",&m);
	printf("Enter angle:");
	scanf("%lf",&n);
	o = m * sin (n);
	printf("The opposite length is: %lf\n\n",o);
}

/* Finding hypotenuse with sine function */

int hypsin(double p, double q, double r)
{
	printf("Enter opposite length:");
	scanf("%lf",&p);
	printf("Enter angle:");
	scanf("%lf",&q);
	r = p / sin (q);
	printf("The hypotenuse length is: %lf\n\n",r);
}

/* Finding angle with sine function */

int arcsin(double s, double t, double u)
{
	printf("Enter opposite length:");
	scanf("%lf",&s);
	printf("Enter hypotenuse length:");
	scanf("%lf",&t);
	u = asin (s/t);
	printf("The angle is: %lf\n\n",u);
}

/* Finding adjsent with cosine function */

int adjcos(double v, double w, double x)
{
	printf("Enter hypotenuse length:");
	scanf("%lf",&v);
	printf("Enter angle:");
	scanf("%lf",&w);
	x = v * sin (w);
	printf("The adjsent length is: %lf\n\n",x);
}

/* Finding hypotenuse with cosine function */

int hypcos(double y, double z, double A)
{
	printf("Enter opposite length:");
	scanf("%lf",&y);
	printf("Enter angle:");
	scanf("%lf",&z);
	A = y / sin (z);
	printf("The hypotenuse length is: %lf\n\n",A);
}

/* Finding angle with cosine function */

int arccos(double B, double C, double D)
{
	printf("Enter adjsent length:");
	scanf("%lf",&B);
	printf("Enter hypotenuse length:");
	scanf("%lf",&C);
	D = acos (B/C);
	printf("The angle is: %lf\n\n",D);
}

/* Finding opposite with tangent function */

int opptan(double E, double F, double G)
{
	printf("Enter adjsent length:");
	scanf("%lf",&E);
	printf("Enter angle:");
	scanf("%lf",&F);
	G = E * tan(F);
	printf("The angle is: %lf\n\n",G);
}

/* Finding angle with cosine function */

int adjtan(double H, double I, double J)
{
	printf("Enter adjsent length:");
	scanf("%lf",&H);
	printf("Enter hypotenuse length:");
	scanf("%lf",&I);
	J = H / tan(I);
	printf("The angle is: %lf\n\n",J);
}

/* Finding angle with cosine function */

int arctan(double K, double L, double M)
{
	printf("Enter adjsent length:");
	scanf("%lf",&K);
	printf("Enter hypotenuse length:");
	scanf("%lf",&L);
	M = acos (K/L);
	printf("The angle is: %lf\n\n",M);
}

/* Complete Calculator */

int main(void) 
{
	int count;
	double a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z, A, B, C, D, E, F, G, H, I, J, K, L, M;
	char fct;
	do
	{
		printf("Enter oreration desired:\n");
		printf("The choices are:\n");
		printf("a=addition\n");
		printf("b=subtraction\n");
		printf("c=multiplication\n");
		printf("d=division\n");
		printf("e=oppsin\n");
		printf("f=hypsin\n");
		printf("g=arcsin\n");
		printf("h=adjcos\n");
		printf("i=hypcos\n");
		printf("j=arccos\n");
		printf("k=opptan\n");
		printf("l=hyptan\n");
		printf("m=arctan\n");
		fct=getchar();
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
		else if(fct == 'e')
		{
			oppsin(m, n, o);
		}
		else if(fct == 'f')
		{
			hypsin(p, q, r);
		}
		else if(fct == 'g')
		{
			arcsin(s, t, u);
		}
		else if(fct == 'h')
		{
			adjcos(v, w, x);
		}
		else if(fct == 'i')
		{
			hypcos(y, z, A);
		}
		else if(fct == 'j')
		{
			arccos(B, C, D);
		}
		else if(fct == 'k')
		{
			opptan(E, F, G);
		}
		else if(fct == 'l')
		{
			adjtan(H, I, J);
		}
		else if(fct == 'm')
		{
			arctan(K, L, M);
		}
		else
		{
			printf("Learn to spell!\n\n");
		}
		getchar();
	}
	while(count++<100);
	return(0);
}
