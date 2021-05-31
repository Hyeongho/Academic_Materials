#include "Rational.h"

Rational::Rational()
{
	top = 0;
	bottom = 0;
}

Rational::Rational(int t, int b)
{
	top = t;
	bottom = b;
}

double Rational::real() const 
{
	// (1) top = 2; bottom += 10;
	return (double)top / bottom;
}

Rational Rational::operator+(const Rational& f) const
{
	return Rational(top * f.bottom + f.top * bottom, bottom * f.bottom);
}

ostream& operator<<(ostream& os, const Rational& f)
{
	// TODO: 여기에 return 문을 삽입합니다.

	os << f.top << "/" << f.bottom;

	return os;
}

istream& operator>>(istream& is, Rational& f)
{
	// TODO: 여기에 return 문을 삽입합니다.

	is >> f.top >> f.bottom;
	return is;
}
