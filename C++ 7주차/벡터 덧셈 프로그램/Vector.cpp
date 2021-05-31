#include "Vector.h"

Vector::Vector()
{
	dim = 0;
	arr = NULL;
}

Vector::Vector(int d)
{
	dim = d;
	arr = new double[dim];
}

Vector::Vector(const Vector& v)
{
	arr = NULL;

	clone(v);
}

Vector::~Vector()
{
	delete[] arr;
}

double& Vector::operator[](int id)
{
	// TODO: ���⿡ return ���� �����մϴ�.

	return arr[id];
}

Vector Vector::operator+(Vector& v)
{
	Vector sum(v.dim);

	for (int i = 0; i < dim; i++)
	{
		sum[i] = arr[i] + v[i];
	}

	return sum;
}

Vector& Vector::operator=(const Vector& v)
{
	// TODO: ���⿡ return ���� �����մϴ�.

	clone(v);

	return *this;
}

void Vector::clone(const Vector& a)
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

ostream& operator<<(ostream& os, Vector& v)
{
	// TODO: ���⿡ return ���� �����մϴ�.

	os << "<";

	for (int i = 0; i < v.dim; i++)
	{
		os << v.arr[i] << " ";
	}

	os << ">";

	return os;
}
