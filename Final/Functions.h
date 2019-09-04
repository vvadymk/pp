
/*
	Developed by Kochmar Vadym
*/
bool first(int k);
int second(int n);
int char2int(char *str);
char* int2char(int a);

struct Polinom {
	double *_x;
	int n;
};

Polinom operator+(Polinom &a, Polinom &b);
Polinom operator*(Polinom &a, Polinom &b);
double calculator(double k, Polinom &a, Polinom &b, Polinom(*f)(Polinom &a, Polinom &b));

struct CList
{
	char _el;
	CList *_next;
};

CList toCList(const char* str);
