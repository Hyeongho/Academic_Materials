#include <stdio.h>
#include <iostream>

using namespace std;

void swap(int* m, int*);
int add(int*, int);
void revers(int*, int);

int main()
{
	int a = 3;
	int b = 5;

	swap(&a, &b);

	cout << a << " " << b << endl;

	int array[] = { 1, 2, 3, 4, 5 };

	int sum = 0;

	sum = add(array, 5);

	cout << sum << endl;

	int array2[] = { 1, 2, 3, 4, 5 };

	revers(array2, 5);
}

void swap(int* a, int* b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int add(int* arr, int num)
{
	int result = 0;

	for (int i = 0; i < num; i++)
	{
		result += arr[i];
	}

	return result;
}

void revers(int* arr, int num)
{
	int temp = 0;

	int n = num - 1;

	for (int i = 0; i < num / 2; i++)
	{
		temp = arr[i];
		arr[i] = arr[n];
		arr[n] = temp;

		n--;
	}

	for (int i = 0; i < num; i++)
	{
		cout << arr[i] << " ";
	}
}
