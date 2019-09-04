#include<iostream>
using namespace std;

float harm(int n)
{
	float a = 1;
	float one = 1;
	float s = 1;
	float s1 = 1;
	float s2 = 0;
	for (int i = 2; i <= n; i++)
	{
		one = -one;
	
		a = one / static_cast<float>(i);
		if (one < 0) {
			s2 += a;
		}
		else {
			s1 += a;
		}
		s += a;
	}
	cout << s1 << " " << s2 << endl;
	return s;
}

float harmRight(int n)
{
	float a = 1;
	float one = 1;
	float s = 1;
	for (int i = n; i >=1; i--)
	{
		one = -one;
		a = one / static_cast<float>(i);
		s += a;
	}
	return s;
}

float harm3(int n)
{
	float a = 1;
	float one = 1;
	float s = 1, s1 = 0;
	for (int i = 2; i <= n; i++)
	{
		one = -one;
		a = one / static_cast<float>(i);
		if (a > 0) {
			s += a;
		}
	}
	for (int i = 2; i <= n; i++)
	{
		one = -one;
		a = one / static_cast<float>(i);
		if (a < 0) {
			s1 += a;
		}
	}
	cout << s1 << " " << s << endl;
	return (s+s1);
}

float harm3(int n)
{
	float a = 1;
	float one = 1;
	float s = 1, s1 = 0;
	for (int i = n; i >= 1; i++)
	{
		one = -one;
		a = one / static_cast<float>(i);
		if (a > 0) {
			s += a;
		}
	}
	for (int i = n; i >= 1; i++)
	{
		one = -one;
		a = one / static_cast<float>(i);
		if (a < 0) {
			s1 += a;
		}
	}
	cout << s1 << " " << s << endl;
	return (s + s1);
}

