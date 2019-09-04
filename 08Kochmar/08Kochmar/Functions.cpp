#include<cassert>
#include<cmath>

/*
	Developed by Kochmar Vadym
*/

#include "Functions.h"

// Допоміжна функція

void zet(double &y, double &x, unsigned int &k, unsigned int &counter)
{

	if (k>0)
	{
		if (k % 2 == 1)
		{
			y *= x; k--;
		}
		else
		{
			x *= x; k /= 2;
		};
		zet(y, x, k, counter);
	}
	counter++;
}

double power(double x, unsigned int n, unsigned int &counter)
{
	double y = 1;
	double test = pow(x, n);
	zet(y, x, n, counter);
	assert(y == test);
	return y;
}

// Допоміжна функція

void fib(double &f1, double &f2, unsigned int n, unsigned int &counter)
{
	
	if (n >= 2)
	{
		double f = f2; f2 += f1; f1 = f;
		fib(f1, f2, n - 1, counter);
	}
	counter++;
}


unsigned int fibonacciTest(unsigned int n)
{
	return n < 2 ? n : fibonacciTest(n - 2) + fibonacciTest(n - 1);
}

double Fibonaci(unsigned int n, unsigned int &counter)
{
	double f0 = 0, f1 = 1;
	switch (n)
	{
	case 0:
		return f0; break;
	case 1:
		return f1; break;
	default:
		fib(f0, f1, n, counter); 
		assert(f1 == fibonacciTest(n));
		return f1;
	}
}


Matrix2x2 mul(Matrix2x2 a, Matrix2x2 b)
{
	Matrix2x2 c;
	c._11 = a._11*b._11 + a._12 *b._21;
	c._12 = a._11*b._12 + a._12 *b._22;

	c._21 = a._21*b._11 + a._22 *b._21;
	c._22 = a._21*b._12 + a._22 *b._22;

	return c;
}

Matrix2x2 power(Matrix2x2 a, int n)
{
	if (n == 0 || n == 1)
		return a;
	Matrix2x2 b = { 1, 1, 1, 0 };
	a = power(a, n / 2);
	a = mul(a, a);
	if (n % 2 != 0)
	{
		a = mul(a, b);
	}
	return a;
}


int fibNumFast(const int n)
{

	if (n == 0)
	{
		return 0;
	}

	Matrix2x2 a = { 1, 1, 1, 0 };
	Vector2 v = { 1 ,0 };

	a = power(a, n - 1);
	
	v = { a._11* v._1 + a._12 * v._2, a._21 * v._1 + a._22 * v._2 };
	assert(v._1 == (fibonacciTest(n)));
	return v._1;

}

