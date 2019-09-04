#define _USE_MATH_DEFINES
#include<math.h>

/*
	Developed by Kochmar Vadym
*/

double simpson(const double a, const double b, const double eps, double(*const f)(double))
{
	int n = 2;
	double h = (b - a)*0.5;
	double prev = 0;
	double s1 = h * (f(a) + f(b));
	double s2 = 0;
	double s4 = 4 * h*f(a + h);
	double s = s1 + s2 + s4;

	do {
		prev = s;
		n *= 2;
		h /= 2;
		s1 *= 0.5;
		s2 = 0.5*s2 + 0.25*s4;
		s4 = 0;
		int i = 1;
		do {
			s4 = s4 + f(a + i * h);
			i += 2;
		} while (i <= n);
		s4 = 4 * h*s4;
		s = s1 + s2 + s4;
	} while (fabs(s - prev) > eps);
	return s / 3;
}

double func1(double x)
{
	return 1 / sqrt((2 * 2 * sin(x)*sin(x)) + (4 * 4 * cos(x)*cos(x)));// a=2, b=4
}
double func2(double x)
{
	return sin(2 * x) / x; // a=2
}
double func3(double x)
{

	return pow(M_E, -pow(x, 2));
}
double func4(double x)
{
	
	return pow(x, 0.5-1) / (1 + x);// a=0.5
}

int sgn(double a)
{
	if (a > 0) 
	{
		return 1;
	}
	else if (a < 0)
	{
		return -1;
	}
	else
	{
		return 0;
	}
}

double ags(const double a, const double b)
{
	double sa = a;
	double sb = b;
	double aa = sqrt(a*b);
	double bb = (a + b)*0.5;
	do {
		sa = aa;
		sb = bb;
		aa = sqrt(sa*sb);
		bb = (sa + sb)*0.5;
	} while ((sa < aa) && (aa < bb) && (bb < sb));

	return aa;
}
