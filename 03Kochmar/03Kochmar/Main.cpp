#include<iostream>
using namespace std;

#include "Functions.h";
#include<cmath>

int main(void)
{
	cout << "Gaussian integral" << endl; //При х>6 з'являються некоректні результати обчислення через	
	cout << gauss(1, 0.000000001) << endl;  //несумірність доданків
	cout << gauss(2, 0.000001) << endl;
	cout << gauss(3, 0.000001) << endl;
	cout << gauss(4, 0.000001) << endl;
	cout << gauss(5, 0.000001) << endl;
	cout << gauss(6, 0.01) << endl;
	cout << gauss(7, 0.0000000001) << endl;
	cout << gauss(8, 0.000001) << endl;
	cout << gauss(9, 0.000001) << endl;
	cout << gauss(10, 0.000001) << endl;
	cout << "Simpson" << endl;
	cout << Simpson(1, 0.000001, &funct) << endl;
	cout << Simpson(2, 0.000001, &funct) << endl;
	cout << Simpson(3, 0.000001, &funct) << endl;
	cout << Simpson(4, 0.000001, &funct) << endl;
	cout << Simpson(5, 0.000001, &funct) << endl;
	cout << Simpson(6, 0.000001, &funct) << endl;
	cout << Simpson(7, 0.000001, &funct) << endl;
	cout << Simpson(8, 0.000001, &funct) << endl;
	cout << Simpson(9, 0.000001, &funct) << endl;
	cout << Simpson(10, 0.000001, &funct) << endl;
	cout << "Exponential" << endl;
	cout << expon(0, 0.000001) << endl;
	cout << expon(1.5, 0.000001) << endl;
	cout << expon(-1.5, 0.000001) << endl;
	cout << expon(5.7, 0.000001) << endl;
	cout << expon(-5.7, 0.000001) << endl;
	cout << expon(0.77, 0.000001) << endl;
	cout << expon(-0.77, 0.000001) << endl;
	cout << "______________________________"<< endl;
	cout << exp(-10)<< endl;
	cout << expon(-10, 0.000001) << endl;
	char k; cin >> k;
	return 0;
}