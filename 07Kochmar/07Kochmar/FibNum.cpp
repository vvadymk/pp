#include"FibNum.h"
/*
	Developed by Kochmar Vadym
*/

Matrix2x2 mul(Matrix2x2 a, Matrix2x2 b)
{
	Matrix2x2 c;
	c._11 = a._11*b._11 + a._12 *b._21;
	c._12 = a._11*b._12 + a._12 *b._22;

	c._21 = a._21*b._11 + a._22 *b._21;
	c._22 = a._21*b._12 + a._22 *b._22;

	a._11 = c._11;
	a._12 = c._12;
	a._21 = c._21;
	a._22 = c._22;

	return a;
}

Matrix2x2 power(Matrix2x2 a, int n)
{
	if (n == 0 || n == 1)
		return a ;
	Matrix2x2 b = {1, 1, 1, 0};
	a=power(a, n / 2);
	a = mul(a, a);
	if (n % 2 != 0) 
	{
		a=mul(a, b);
	}
	return a;
}


int fibNum(const int n)
{

	if (n == 0) 
	{
		return 0;
	}

	Matrix2x2 a = { 1, 1, 1, 0};
	Vector2 v = { 1 ,0 };

	a = power(a, n - 1);

	v = { a._11* v._1 + a._12 * v._2, a._21 * v._1 + a._22 * v._2 };
	
	return v._1;
	
}

