#include <iostream>
#include <string>

#include "Vector.h"

using namespace std;

int main()
{
	Vector u(4), v(4);

	Vector w(4);

	for (int i = 0; i < 4; i++)
	{
		u[i] = i * 10.0;
		v[i] = i;
	}

	cout << " u = " << u << endl;
	cout << " v = " << v << endl;

	w = u + v;

	cout << "u + v = " << w << endl;
}