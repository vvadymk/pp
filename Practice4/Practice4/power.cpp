double power(double x, int n)
{
	if (n == 0)
		return 1;
	
		return x * power(x, n - 1);
}

double quickPower(double x, int n)
{
	 if(x == 0)
		 return 0;
	if(n % 2 == 1)
		return x*quickPower(x, n-1);
	//(x^n)= (x*x)^(n/2)
	 return quickPower(x*x, n/2);
}