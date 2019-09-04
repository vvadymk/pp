#include<iostream>
using namespace std;

/*
	Developed by Kochmar Vadym
*/
#include"Functions.h"

int main(void)
{
	cout << "First: " << first(10) << endl;
	cout <<"Second task: " <<second(10) << endl;
	cout << "Second task: " << second(100) << endl;
	cout << endl;
	char * number = new char[4];
	number[0] = '2';
	number[1] = '0';
	number[2] = '1';
	number[3] = '8';
	cout <<"char2int: "<< char2int(number) << endl;
	char* number2 = int2char(213435);
	cout << "int2char: " << number2 << endl;
	cout << "POLINOM" << endl;
	Polinom a;
	Polinom b;
	double aa[] = { 2, 5 };
	double bb[] = { 10, 4, 8, 12 };
	a.n = 2;
	a._x = aa;

	b.n =4;
	b._x = bb;
	Polinom c = a + b;
	cout <<"SUM: "<< c._x[0]<<" "<<c._x[1]<<" "<<c._x[2]<<" "<<c._x[3] << endl;
	c = a * b;
	cout << "Multiply: " << c._x[0] << " " << c._x[1] << " " << c._x[2] << " " << c._x[3]<<" "<<c._x[4]<< endl;
	
	Polinom a1;
	Polinom b1;
	double aa1[] = { 2, 5 };
	double bb1[] = { 3, 4 };
	a1.n = 2;
	a1._x = aa1;

	b1.n = 2;
	b1._x = bb1;

	//cout << calculator(3, a1, b1, operator+) << endl;
	//cout << calculator(2, a1, b1, operator*) << endl;
	return 0;
}