#include "Number.h"

Number::Number()
{
	size = 0;

	arr = NULL;
}

Number::Number(int _size)
{
	size = _size;

	arr = new float[size];
}

Number::~Number()
{
	delete[] arr;
}

void Number::SetArr()
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100 + 1;
	}
}

void Number::Print()
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}

	cout << endl;
}

float Number::Max()
{
	float num = arr[0];

	for (int i = 0; i < size; i++)
	{
		num = max(num, arr[i]);
	}

	return num;
}

float Number::Min()
{
	float num = arr[0];

	for (int i = 0; i < size; i++)
	{
		num = min(num, arr[i]);
	}

	return num;
}

float Number::Average()
{
	float ave = 0;

	for (int i = 0; i < size; i++)
	{
		ave += arr[i];
	}

	ave /= size;

	return ave;
}
