#include<iostream>
using namespace std;
#define _USE_MATH_DEFINES
#include<math.h>
/*
	Developed by Kochmar Vadym
*/
#include "Functions.h"

int main(void)
{

	cout <<"sin(x)=x; "<<"x="<< dichotomy(func1, -1, 1, 0.000001) << endl;
	cout <<"sin(x)=0; "<<"x="<< dichotomy(sin, M_PI-1, M_PI, 0.000001) << endl;
	cout <<"ln(x)=1; "<<"x="<< dichotomy(func3, 2, 3, 0.000001) << endl;
	cout <<"exp(x)=2-x; "<<"x="<< dichotomy(func4, 0, 2, 0.000001) << endl;

	return 0;
}
