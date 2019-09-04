#include<iostream>
using namespace std;

/*
	Developed by Kochmar Vadym
*/
#include"Functions.h"

int main(void)
{
	char * number = new char[5];
	number[0] = '2';
	number[1] = '0';
	number[2] = '1';
	number[3] = '8';
	number[5] = '5';
	char2int(number);


	//cout << calculator(3, a1, b1, operator+) << endl;
	//cout << calculator(2, a1, b1, operator*) << endl;
	return 0;
}