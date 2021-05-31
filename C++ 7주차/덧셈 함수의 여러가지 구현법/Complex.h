#pragma once

#include <iostream>
#include <string>

using namespace std;

class Complex
{
	double real;
	double imag;

public:
	
	Complex();
	Complex(double r, double i);
	~Complex();

	void Print(string s);

	void Add(Complex a, Complex b);
	friend Complex Add(Complex a, Complex b);
	Complex Add(Complex b);
	Complex operator+(Complex b);
};

