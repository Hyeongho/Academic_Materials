#include "Complex.h"

int main()
{
	Complex c1(1, 2), c2(3, 4), s1, s2, s3, s4;

	s1.Add(c1, c2);
	s2 = Add(c1, c2);
	s3 = c1.Add(c2);
	s4 = c1 + c2;

	s1.Print("s1.Add(c1, c2) : ");
	s2.Print("s2 = Add(c1, c2) : ");
	s3.Print("s3 = c1.Add(c2) : ");
	s4.Print("s4 = c1 + c2 : ");
}