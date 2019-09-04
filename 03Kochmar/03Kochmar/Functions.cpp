#include<cmath>

#define _USE_MATH_DEFINES  
#include <math.h>  

double gauss(double x, double eps)
{
	double sum = x;
	double an = x;

	int i = 1;
	int k = 3;

	while (abs(an / k) > eps)
	{
		an *= (-x * x / i);
		sum += an / k;
		i++;
		k += 2;
	}
	return sum;

}

double quickPower(double x, int a) {
	double r = 1;

	while (a > 0) {
		if (a % 2 == 0) {
			a /= 2;
			x *= x;
		}
		else {
			a -= 1;
			r *= x;
			a /= 2;
			x *= x;
		}
	}
	return r;
}

double expon(double x, double eps)
{

	int g = x;

	if (x >= 0)
	{
		double a = quickPower(M_E, g);

		double k = x - g;

		double sum = 1;
		double i = 1;
		double an = 1;
		do {
			an = an * k / i;
			sum += an;
			i++;
		} while (fabs(an) >= eps);

		return  a * sum;
	}
	else
	{
		double a = quickPower(M_E, -g);

		double k = abs(x -g);

		double sum = 1;
		double i = 1;
		double an = 1;
		do {
			an = an * k / i;
			sum += an;
			i++;
		} while (fabs(an) >= eps);

		return (1/ (a * sum));
	}
	
}


double funct(double x) {
	return pow(M_E, -(x*x));
}

double Simpson(double x, double eps, double(*f)(double))
{
	double N = 4;
	double sum1 = 0, sum2 = 0;
	double g, h;
	double index1, index2;
	unsigned int i;
	double func;
	for (;;) { 
		h = x / N;
		sum1 = sum2 = -(f(0) + f(x));
		index1 = index2 = 4.;
		i = 0;
		for (g = 0; g <= x + h / 2; g += h) {
			sum1 += (index1 = 6 - index1)*(func = f(g));
			if (i++ % 2 == 0) {
				sum2 += (index2 = 6 - index2)*func;
			}
		}
		if (fabs((sum1 - 2*sum2) / sum1) <= eps) return (h*sum1) / 3 + h * (2*sum2 - sum1) / 45; else N *= 2;
	}
	return (h*sum1) / 3;
}