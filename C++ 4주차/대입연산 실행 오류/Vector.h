#pragma once

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

class Vector
{
	int dim; //벡터의 차원
	double* arr; //벡터의 각 차원 데이터

public:
	Vector();
	Vector(int _dim);
	~Vector();

	void SetRand();

	void Print(string str);
};

