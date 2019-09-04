#include<cmath>
/*
	Developed by Kochmar Vadym
*/


double func1(const double a)
{
	return sin(a)-a;
}
double func3(double const a)
{
	return log(a) - 1;
}
double func4(double const a)
{
	return exp(a) - 2+a;
}
double dichotomy(double(*f)(double), double a, double b, double eps)
{
	double x = (a + b) / 2;
	
	do
	{
		f(a)*f(x) < 0?b = x : a =x ;
	
		x = (a + b) / 2;
	} while (fabs(f(x)) > eps);

	return x;

}
