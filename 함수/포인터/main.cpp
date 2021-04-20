#include <stdio.h>

int sum1(int a);
void sum2(int *pa);
void sum3(int a);

int main()
{
	int x = 7;
	int* ptr = &x;
	int** pptr = &ptr;

	/*printf("%d, %p, %d, %p, %d, %p \n", x, &x, *ptr, ptr);*/

	int a = 10;

	int b;

	sum3(a);

	printf("%d\n", a);

	//sum2(&a);

	//printf("%d\n", a);

	return 0;
}

//call by value
int sum1(int a)
{
	a += 10;

	return a;
}

void sum3(int a)
{
	a += 10;
}

//call by reference
void sum2(int* pa)
{
	*pa += 10;
}