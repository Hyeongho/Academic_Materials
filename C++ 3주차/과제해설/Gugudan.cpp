#include "Gugudan.h"

void Gugudan::Set(int _a)
{
	a = _a; 
}

int Gugudan::Get()
{
	return a;
}

void Gugudan::guguDan(int _a)
{
	for (int i = 1; i < 20; i++)
	{
		cout << a << " * " << i << " = " << a * i << endl;
	}
}
