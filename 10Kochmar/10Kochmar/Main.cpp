#include<iostream>
using namespace std;

#define _USE_MATH_DEFINES
#include<math.h>

/*
	Developed by Kochmar Vadym
*/

#include"Functions.h"

int main(void)
{	
	cout <<"Integral: "<< 2/M_PI*simpson(0, M_PI/2, 0.00000001, func1)<<" = "<<1/ags(2, 4) << endl;//a=2 b=4
	cout << "Integral: " << simpson(0.0001, 1.e+3, 0.00000001, func2)<<" = "<<M_PI/2*sgn(2)<<endl;//a=2
	cout << "Integral: " << simpson(0, 1.e+1, 0.00000001, func3)<<" = "<<sqrt(M_PI)/2 << endl;
	cout << "Integral: " << simpson(0.0005, 1.e+3, 0.00001, func4) << " = " << M_PI / sin(0.5*M_PI) << endl;//a=0.5
	
	return  0;
}
