#pragma once

#include <iostream>
#include <algorithm>

using namespace std;

class Number
{
	int size;

	float *arr;

public:
	Number();
	Number(int _size);

	~Number();

	void SetArr();
	void Print();

	float Max();
	float Min();
	float Average();
};