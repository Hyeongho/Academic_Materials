#include "Complex.h"

Complex::Complex()
{
	real = 0;
	imag = 0;
}

Complex::Complex(double r, double i)
{
	real = r;
	imag = i;
}

Complex::~Complex()
{

}

void Complex::Print(string s)
{
	cout << s << real << ", " << imag << endl;
}

void Complex::Add(Complex a, Complex b) //멤버함수
{
	real = a.real + b.real;
	imag = a.imag + b.imag;
}

Complex Complex::Add(Complex b) // 멤버함수
{
	return Complex(real + b.real, imag + b.imag);
}

Complex Complex::operator+(Complex b) // 연산자 중복
{
	return Complex(real + b.real, imag + b.imag);
}

Complex Add(Complex a, Complex b) // 일반함수
{
	return Complex(a.real + b.real, a.imag + b.imag);
}
