#include "Vector.h"

Vector::Vector()
{
	dim = 0;

	arr = new double[dim];
}

Vector::Vector(int _dim)
{
	dim = _dim;

	arr = new double[dim];
}

Vector::~Vector()
{
	delete[] arr;
}

void Vector::SetRand()
{
	int max = 100;

	for (int i = 0; i < dim; i++)
	{
		arr[i] = rand() % (max * 10) / 10.0;
	}
}

void Vector::Print(string str)
{

	cout << str << "[" << dim << "] = < ";

	for (int i = 0; i < dim; i++)
	{
		cout << arr[i] << " ";
	}

	cout << ">" << endl;
}

void Vector::clone(Vector& a)
{
	if (dim > 0)
	{
		delete[] arr;
	}

	dim = a.dim;

	arr = new double[dim];

	for (int i = 0; i < dim; i++)
	{
		arr[i] = a.arr[i];
	}
}