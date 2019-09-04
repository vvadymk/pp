/*
	Developed by Kochmar Vadym
*/
#include<iostream>
using namespace std;

#include"Horner.h"

int main(void)
{
	size_t size = 4;
	double x = 6;

	double* coeff = new double[size + 1];
	fillArray(coeff, size);
	for (int i = 0; i <= size; ++i)
	{
		cout << coeff[i] << endl;
	}
	
	cout << "Answer: " << horner(coeff ,size, x) << endl;

	return 0;
}
