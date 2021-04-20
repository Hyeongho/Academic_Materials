#include "Vector.h"

int main()
{
	srand((unsigned int)time(NULL));

	Vector u(3), v(3), w(3);

	u.SetRand();
	v.SetRand();

	u.Print(" U ");
	v.Print(" V ");

	w.add(&u, &v);

	w.Print("U + V");
} 