#include<math.h>

double agm(double a, double b)
{
	
	double a1 = sqrt(a*b);
	double b1 = (a + b) / 2;
	double an = sqrt(b1*a1);
	double bn = (a1 + b1) / 2;

	while ((b1 != bn) && (a1 != an) && (an != bn))
	{
		a1 = an;
		b1 = bn;
		an = sqrt(a1*b1);
		bn = (a1 + b1) / 2;

	}

	return an;
}
