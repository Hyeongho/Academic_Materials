#include "Complex.h"

template < typename T >
void printArray(T a[], int len) 
{
	cout << "Array: ";

	for (int i = 0; i < len; i++)
	{
		cout << a[i] << " ";
	}

	cout << endl;
}

int main() 
{
	Complex cArr[3] = { Complex(1, 1), Complex(2, 2), Complex(3, 3) };
	printArray(cArr, 3);
}