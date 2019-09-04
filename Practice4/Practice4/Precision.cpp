#include <iostream>
using namespace std;
int prec(float base)
{
	float xx=1/base, x=1;
	float px=1/base, ppx;
	int i=1;

	do
	{
		xx=x;i++;
		x=x+px; ppx=px;px/=base;
		cout.precision(20);
	} while (x!=xx);
	return --i;
}
int prec_double(double base)
{
	double xx=1/base, x=1;
	double px=1/base, ppx;
	int i=1;

	do
	{
		xx=x;i++;
		x=x+px; ppx=px;px/=base;
		cout.precision(20);
	} while (x!=xx);
	return --i;
}
