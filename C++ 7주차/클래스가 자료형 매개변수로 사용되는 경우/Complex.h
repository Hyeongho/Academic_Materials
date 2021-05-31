#pragma once

#include <iostream>

using namespace std;

class Complex
{
	double	real, imag;

public:
	Complex();
	Complex(double r, double i);
	~Complex();

	friend ostream& operator << (ostream& os, const Complex& c);
};

