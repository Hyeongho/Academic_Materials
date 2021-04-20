#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int Sum(int a, int b);

int main()
{
	int result = Sum(10, 20);

	cout << result << endl;

}

int Sum(int a, int b)
{
	return a + b;
}
