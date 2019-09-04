#include<iostream>
using namespace std;
/*
	Developed by Kochmar Vadym
*/
#include"Functions.h"

bool first(int k)
{
	return (-k == ~k + 1);
}

int second(int n)
{
	int c = 0;
	while (n)
	{
		c += n & 1;
		n >>= 1;
	}
	return c;
}

int char2int(char *str) 
{
	int i = 0, a = 0;
	while (str[i] != '\0') {
		if (str[i] >= 0x30 && str[i] <= 0x39)
			a = a * 10 + str[i] - 48;
		i++;
	}
	return a;
}

char* int2char(int a)
{
	int t = a;
	int l = 0;
	while (t > 0) {
		t /= 10;
		l++;
	}
	char *s = new char[l];
	s[l] = '\0';

	while (a > 0)
	{
		l--;
		s[l] = (a % 10) + 0x30;
		a /= 10;

	}

	return s;
}

Polinom operator+(Polinom &a, Polinom &b)
{
	Polinom c;
	c.n = (a.n >= b.n ? a.n : b.n);
	c._x = new double[c.n];
	for (int i = 0; i < c.n; i++)
	{
		if (a.n > i&& b.n > i) {
			c._x[i] = a._x[i] + b._x[i];
		}
		else {
			if (a.n > i&&b.n < i) {
				c._x[i] = a._x[i];
			}
			else {
				c._x[i] = b._x[i];
			}
		}
	}
	return c;
}

Polinom operator*(Polinom &a, Polinom &b)
{
	Polinom c ;
	c.n = a.n + b.n - 1;
	c._x = new double(c.n);

	for (int i = 0; i < c.n; i++)
	{
		c._x[i] = 0;
	}
	for (int i = 0; i < a.n; i++)
	{
		for (int j = 0; j < b.n; j++)
		{
			c._x[i +j] =c._x[i+j]+ a._x[i] * b._x[j];
		}
	}

	return c;
}

double calculator(double k, Polinom &a, Polinom &b, Polinom(*f)(Polinom &a, Polinom &b))
{
	
	Polinom ñ = f(a, b);
	double result = 0;

	for (int i = 0; i <= ñ.n; ++i)
	{
		result += pow(k, i)*ñ._x[i];
	}
	return result;
}

CList toCList(const char* str) {
	CList *c = 0;
	int l = sizeof(str) / sizeof(char);
	do{
		CList *next = new CList;
		next->_el = str[l];
		next->_next = c;
		c = next;
	}while (l--!= 0);
	
	return *c;
}
