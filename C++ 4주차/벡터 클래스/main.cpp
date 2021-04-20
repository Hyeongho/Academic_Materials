#include "Vector.h"

int main()
{
	srand((unsigned int)time(NULL));

	Vector u(3), v(5), w;

	u.SetRand();
	v.SetRand();

	u.Print(" U ");
	v.Print(" V ");
	w.Print(" W ");
} 