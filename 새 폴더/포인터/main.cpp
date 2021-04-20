#include <stdio.h>

int sum1(int a);
int sum2(int *pa);

int main()
{
	int x = 7;
	int* ptr = &x;
	int** pptr = &ptr;

	printf("%d, %p, %p \n", x, ptr, pptr);

	int a = 10;

	int b;

	b = sum1(a);

	printf("%d\n", b);

	sum2(&a);

	printf("%d\n", a);

	return 0;
}

//call by value
int sum1(int a)
{
	a += 10;

	return a;
}

//call by reference
int sum2(int* pa)
{
	*pa += 10;

	return *pa;
}