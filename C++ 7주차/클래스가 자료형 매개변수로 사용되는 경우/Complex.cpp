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
    // TODO: 여기에 return 문을 삽입합니다.

    os << "(" << c.real << "," << c.imag << ")";

    return os;
}
