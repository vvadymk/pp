#include <iostream>
using namespace std;

int Fibonacci(int n)
{
	int f,a,b;
	if (n<0) throw n; 
	if (n<2) return 1;
	a=1; b=1; f=0;
	for (int k=1; k<=n-1; k++)
	{
		f=a+b;
		a=b;
		b=f;
	}
	return f;
};

int main()
{
	int n;

	try
	{
	cout<<"Give your n:";
	cin>>n;
	cout<<"Fibonacci= "<<Fibonacci(n)<<"\n";
	}
	catch (int n)
	{
		cout<<"You gave negative "<<n<<endl;
	}
	return 0;
}