//При а=10 функція power виконує 10кроків, а функція quickPower - 4кроки.
//При а=7 функція power виконує 7кроків, а функція quickPower - 3кроки.
//При а=2 функція power виконує 2кроки і функція quickPower також виконує за 2кроки.
//Обчислюати степінь швидше за допомогою функції quickPower.
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

bool testQuickPower(double x, int a) { // Тестування функції quickPower
	
	return power(x, a) == quickPower(x, a); //Якщо 1(true) функція quickPower вірна, якщо 0(false) - ні.
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
/* Ітеративні варіанти швидші ніж рекурсивні. Рекурсивні варіанти повільніші через багаторазові
 виклики функції, а також в рекурсивних варіантах потребуються додаткові витрати на стек.

*/