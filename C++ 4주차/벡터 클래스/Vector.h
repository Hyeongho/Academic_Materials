#pragma once

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

class Vector
{
	int dim; //������ ����
	double* arr; //������ �� ���� ������

public:
	Vector();
	Vector(int _dim);
	~Vector();

	void SetRand();

	void Print(string str);
};

