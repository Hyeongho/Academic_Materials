#include <stdio.h>

void VFuntion(int a, int b)
{
	printf("%d + %d = %d \n", a, b, a + b);
}

int IFuntion(int a, int b)
{
	return a + b;
}

int main()
{
	int a = 8;
	int b = 2;

	int result;

	/*VFuntion(a, b);*/

	result = IFuntion(a, b);

	printf("%d + %d = %d", a, b, result);
}