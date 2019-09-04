#include<iostream>
using namespace std;

/*
	Developed by Kochmar Vadym
*/

#include "Functions.h"

int main(void)
{

	unsigned int counter = 0;

	cout <<"3^3="<< power(3, 3, counter) << endl;
	cout << "Number of calls: " << counter << endl;
	counter = 0;

	cout <<"2^10="<< power(2, 10, counter) << endl;
	cout << "Number of calls: " << counter << endl;
	counter = 0;

	cout <<"8^2="<< power(8, 2, counter) << endl;
	cout <<"Number of calls: "<< counter << endl;
	counter = 0;
	cout << endl;
	cout <<"Fibonacci n=6: "<< Fibonaci(6, counter) << endl;
	cout << "Number of calls: " << counter << endl;
	counter = 0;

	cout << "Fibonacci n=13: " << Fibonaci(13, counter) << endl;
	cout << "Number of calls: " << counter << endl;
	counter = 0;
	cout << endl;
	cout << "Quick Fibonacci n=10: " << fibNumFast(10) << endl;
	cout << "Quick Fibonacci n=2: " << fibNumFast(2) << endl;


	return 0;
}