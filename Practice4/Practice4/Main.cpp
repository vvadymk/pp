#include<iostream>
using namespace std;

#include"Practice4.h"

int main(void)
{
	/*cout << "Octal precision" << endl;
	cout << "float " << prec(8) << endl;
	cout << "double " << prec_double(8) << endl << endl;

	cout << "Decimal precision" << endl;
	cout << "float " << prec(10) << endl;
	cout << "double " << prec_double(10) << endl << endl;

	cout << "Heximal precision" << endl;
	cout << "float " << prec(16) << endl;
	cout << "double " << prec_double(16) << endl;
	*/
	
	float x = 1;
	float d = 1;
	for(int n = 1; n<=10; n++)
	{
		d = d/10;
		x = x + d;
		cout << x << endl;
	}

	

	{
		long l = 1;
		int i = 1;
		float x = 1;
		double kk = 1;
		cout << sizeT(l) << endl;
		cout << sizeT(i) << endl;
		cout << sizeT(x) << endl;
		cout << sizeT(kk) << endl;


		size();


		cout << power(2, 10) << endl;
		//cout << quickPower(2, 10) << endl;
	}

	char k; cin >> k;
	return 0;
}