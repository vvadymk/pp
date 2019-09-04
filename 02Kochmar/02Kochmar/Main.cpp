#include<iostream>
using namespace std;

#include"power.h";

int main(void) {
	cout << "Power: " << power(0, 20) << endl;
	cout <<"Power: "<< power(1.5, 10) << endl;
	cout << "Power: " << power(2, 12) << endl;
	cout << "Power: " << power(2, 5) << endl;
	cout << "Power: " << power(10, 2) << endl;
	
	cout << "Quick power: " << quickPower(0, 20) << endl;
	cout <<"Quick power: "<< quickPower(1.5, 10) << endl;
	cout << "Quick power: " << quickPower(2, 12) << endl;
	cout << "Quick power: " << quickPower(2, 5) << endl;
	cout << "Quick power: " << quickPower(10, 2) << endl;
	
	cout << "Power recursive: " << powerRec(0, 20) << endl;
	cout <<"Power recursive: "<< powerRec(2, 10) << endl;
	cout << "Power recursive: " << powerRec(1.5, 10) << endl;
	cout << "Power recursive: " << powerRec(2, 12) << endl;
	cout << "Power recursive: " << powerRec(2, 5) << endl;
	cout << "Power recursive: " << powerRec(10, 2) << endl;

	cout << "Quick power recursive: " << fastPowerRec(0, 20) << endl;
	cout <<"Quick power recursive: "<< fastPowerRec(1.5, 10) << endl;
	cout << "Quick power recursive: " << fastPowerRec(2, 12) << endl;
	cout << "Quick power recursive: " << fastPowerRec(2, 5) << endl;
	cout << "Quick power recursive: " << fastPowerRec(10, 2) << endl;
	cout << "Quick power recursive: " << fastPowerRec(3, 3) << endl;

	cout <<"Test quickPower via power: "<< testQuickPower(2, 4) << endl;
	cout << "Test quickPower via power: " << testQuickPower(7, 2) << endl;
	

	return 0;
}