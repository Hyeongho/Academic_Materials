#include "Gugudan.h"

int main()
{
	Gugudan g;

	int a;

	cout << "¸î ´Ü? ";

	cin >> a;

	g.Set(a);

	g.guguDan(g.Get());
}