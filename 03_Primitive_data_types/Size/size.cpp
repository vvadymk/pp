#include <iostream>
using namespace std;

int main()
{
	bool b;
	char c;
	unsigned char cu;
	signed char csg;
	short s;
	short int is;
	signed short int issg;
	unsigned short int ius;
	unsigned short su;
	int i;
	signed int isg;
	unsigned int iu;
	signed sg;
	unsigned u;
	long int il;
	signed long int ilsg;
	long l;
	signed long lsg;
	unsigned long int ilu;
	unsigned long lu;
	float f;
	double d;
	long double ld;
cout
	<< "\n bool= " << sizeof(b)
	<< "\n char= " << sizeof(c)
	<< "\n unsigned char = " << sizeof(cu)
	<< "\n signed char = " << sizeof(csg)
	<< "\n short = " << sizeof(s)
	<< "\n short int= " << sizeof(is)
	<< "\n signed short int = " << sizeof(issg)
	<< "\n unsigned short int = " << sizeof(ius)
	<< "\n unsigned short = " << sizeof(su)
	<< "\n int = " << sizeof(i)
	<< "\n signed int = " << sizeof(isg)
	<< "\n unsigned int = " << sizeof(iu)
	<< "\n signed = " << sizeof(sg)
	<< "\n unsigned= " << sizeof(u)
	<< "\n long int= " << sizeof(il)
	<< "\n signed long int= " << sizeof(ilsg)
	<< "\n long = " << sizeof(l)
	<< "\n signed long = " << sizeof(lsg)
	<< "\n unsigned long int= " << sizeof(ilu)
	<< "\n unsigned long = " << sizeof(lu)
	<< "\n float = " << sizeof(f)
	<< "\n double = " << sizeof(d)
	<< "\n long double = " << sizeof(ld) 
	<< endl;
return 0;
}
