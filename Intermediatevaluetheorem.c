#include <stdio.h>
#include <math.h>

//Put your function here
#define FUNCTION (cos(M_PI_2*x)-x)

double sign(double a,double b)
{
		return a*b;
}
double f(double x)
{
		return FUNCTION;
}


double Bisection(double xl, double xr, double tol)
{
		int n = 1;
		int NMAX = 50;
		double c = 0.0;
		double error = 0.0;
		while(n <= NMAX)
		{
				error = fabs(xl-xr)/2;
				c = (xr+xl)/2;
				if(f(c) == 0 || error < tol){
						printf("%f\n", c);
						return c;
				}

						n = n + 1;
						if(sign(f(c),f(xl)) >= 0)
						{
								printf("%f\n", c);
								xl = c;
						}
						else
						{
								xr = c;
								printf("%f\n", c);
						}
		}
		return c;
}



double xl = 0.0;
double xr = 1.0;
double tol = 0.0001;

int main(){

Bisection(xl, xr, tol);

		return 0;
}

