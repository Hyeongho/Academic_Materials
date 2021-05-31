#pragma once

#include <iostream>
#include <string>

using namespace std;

class Vector
{
	double* arr;
	int dim;

public:
	Vector();
	Vector(int d);
	Vector(const Vector& v);

	~Vector();

	double& operator[] (int id);

	friend ostream& operator << (ostream& os, Vector& v);

	Vector operator + (Vector& v);
	Vector& operator = (const Vector& v);

	void clone(const Vector& a);
};

