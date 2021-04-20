#include <stdio.h>

int main()
{
	int arr[5];

	int a, b, c, d, e;

	a = 1;
	b = 2;
	c = 3;
	d = 4;
	e = 5;

	for (int i = 0; i < 5; i++)
	{
		arr[i] = i + 1;
	}

	printf("%d %d %d %d %d \n", a, b, c, d, e);

	for (int i = 0; i < 5; i++)
	{
		printf("arr[%d] = %d\n", i, arr[i]);
	}

	int arr2[2][5] =
	{
		{ 1, 2, 3, 4, 5},

		{1, 2, 3, 4, 5}
	};

	return 0;
}