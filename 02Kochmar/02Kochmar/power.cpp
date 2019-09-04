//��� �=10 ������� power ������ 10�����, � ������� quickPower - 4�����.
//��� �=7 ������� power ������ 7�����, � ������� quickPower - 3�����.
//��� �=2 ������� power ������ 2����� � ������� quickPower ����� ������ �� 2�����.
//���������� ������ ������ �� ��������� ������� quickPower.
double power(double x, int a) {
	double r = 1;

	for (int i = 0; i < a; i++) {
		r *= x;
	}

	return r;
}

double quickPower(double x, int a) {
	double r = 1;
	
	while (a > 0) {
		if (a % 2 == 0) {
			a /= 2;
			x *= x;
		}
		else {
			a -= 1;
			r *= x;
			a /= 2;
			x *= x;
		}
	}
	return r;
}

bool testQuickPower(double x, int a) { // ���������� ������� quickPower
	
	return power(x, a) == quickPower(x, a); //���� 1(true) ������� quickPower ����, ���� 0(false) - �.
}

double powerRec(double x, int a) {

	if (a == 0) {
		return 1;
	}
	return x * powerRec(x, a - 1);
}

double fastPowerRec(double x, int a) {

	if (x == 0 || x == 1 || a == 1) {
		return x;
	}
	if (a == 0) {
		return 1;
	}
	if (a % 2 == 0) {
		double r = fastPowerRec(x, a / 2);
		return r * r;
	}
	else {
		return x * fastPowerRec(x, a - 1);
	}
}
/* ��������� ������� ������ �� ���������. ��������� ������� �������� ����� �����������
 ������� �������, � ����� � ����������� �������� ������������ �������� ������� �� ����.

*/