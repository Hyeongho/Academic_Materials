#pragma once

#include <iostream>

using namespace std;

class Rational
{
	int top, bottom;

public:
	Rational();
	Rational(int t, int b);

	double real() const;

	friend ostream& operator<<(ostream& os, const Rational& f);

	friend istream& operator >> (istream& is, Rational& f);

	Rational operator+(const Rational& f) const;
};

