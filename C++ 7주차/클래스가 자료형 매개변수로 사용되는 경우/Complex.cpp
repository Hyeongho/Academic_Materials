#include "Complex.h"

Complex::Complex()
{
    real = 0.0;
    imag = 0.0;
}

Complex::Complex(double r, double i)
{
    real = r;
    imag = i;
}

Complex::~Complex()
{

}

ostream& operator<<(ostream& os, const Complex& c)
{
    // TODO: ���⿡ return ���� �����մϴ�.

    os << "(" << c.real << "," << c.imag << ")";

    return os;
}
