/*
	Developed by Kochmar Vadym
*/
#include<iostream>
using namespace std;

#include <ctime>
#include<cassert>

void fillArray(double * coeff, size_t size)
{
	srand(time(NULL));
	double num;
	for (unsigned int i = 0; i < size + 1; i++)
	{
		num = (double)rand() / RAND_MAX * 100 + 1;
		coeff[i] = num;
	}

}

double sum(double* coeff, size_t size, double x)
{
	double s = coeff[size];
	for (unsigned int i = 1; i <= size; ++i)
	{
		s *= x;
		s += coeff[size - i];
	}

	return s;
	
}

double horner(double* coeff, size_t size, double x)
{
	
	double result = sum(coeff, size, x);
	assert(result == sum(coeff, size, x));
	return result;

}