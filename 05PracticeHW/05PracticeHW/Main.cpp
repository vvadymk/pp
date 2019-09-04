#include<iostream>
using namespace std;

#include"Arithm.h"

struct complex
{
	double re;
	double im;
};
void PrintComplexNumber(complex val)
{
	cout << val.re;
	if (val.im < 0)
		cout << " - " << -val.im;
	else
		cout << " + " << val.im;
	cout << endl;
}
int main(void)
{

	complex A, B, C;
	A.re = 0.6;
	A.im = 0.8;
	B.re = 0.8;
	B.im = 0.5;

	
		C.re = B.re*A.re - B.im*A.im;

		C.im = B.re*A.im + A.re*B.im;
	

	PrintComplexNumber(C);
	//cout.precision(18);
	//cout << harm3(10000) << endl;

	char k; cin >> k;

	return 0;
}