#include "Vector.h"

int main()
{
	srand((unsigned int)time(NULL));

	Vector u(3), v(3);

	u.SetRand();
	
	v = u;

	u.Print(" U ");
	v.Print(" V ");
} 