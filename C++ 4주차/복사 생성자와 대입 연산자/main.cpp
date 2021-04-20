#include "Vector.h"

int main()
{
	srand((unsigned int)time(NULL));

	Vector u(3), v, w(3);

	u.SetRand();
	
	v = u;

	w.add(u, v);

	u.Print(" U ");
	v.Print(" V ");
	w.Print("U+V");
} 