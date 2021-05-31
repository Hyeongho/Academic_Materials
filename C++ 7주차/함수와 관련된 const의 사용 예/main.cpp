#include "Rational.h"

int main()
{
	Rational a(3, 4), b, c;
	const Rational h(1, 2);

	cout << "b ют╥б(a/b): ";
	cin >> b;
	// (5) cin >> h;
	c = a + b;
	cout << " a  = " << a << endl;
	cout << " b  = " << b << endl;
	cout << " h  = " << h << endl;
	cout << "a+b = " << c << endl;
}