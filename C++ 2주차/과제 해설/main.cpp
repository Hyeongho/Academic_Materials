#include <iostream>

using namespace std;

void Swap(int* a, int* b);
int* Sum(int a[], int *result, int size);
int* Copy(int a[], int copyA[], int size);
int* Reverse(int a[], int size);

int main()
{
	int a = 2;
	int b = 3;

	Swap(&a, &b);

	cout << a << " " << b << endl;

	int arr[5] = { 1, 2, 3, 4, 5 };

	int size = sizeof(arr) / sizeof(arr[0]);

	int result = 0;

	Sum(arr, &result, size);

	cout << result << endl;

	int copyArr[5];

	Copy(arr, copyArr, size);

	for (int i = 0; i < size; i++)
	{
		cout << copyArr[i] << " ";
	}

	cout << endl;

	Reverse(copyArr, size);

	cout << copyArr << endl;

	for (int i = 0; i < size; i++)
	{
		cout << copyArr[i] << " ";
	}

	cout << endl;
}

void Swap(int* a, int* b) //1번문제
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int* Sum(int a[], int *result, int size) //2번문제
{
	for (int i = 0; i < size; i++)
	{
		*result += a[i];
	}

	return result;
}

int* Copy(int a[], int copyA[], int size) //3번 문제
{
	for (int i = 0; i < size; i++)
	{
		copyA[i] = a[i];
	}

	return copyA;
}

int* Reverse(int a[], int size)
{
	int temp;

	for (int i = 0; i < size / 2; i++)
	{
		temp = a[i];
		a[i] = a[size - 1 - i];
		a[size - 1 - i] = temp;
	}

	return a;
}