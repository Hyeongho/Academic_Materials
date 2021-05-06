#include "Number.h"
#include "Student.h"

#include <cstdlib>
#include <ctime>

int main()
{
	// 문제 2

	srand((unsigned int)time(NULL));

	Number n(5);

	n.SetArr();

	n.Print();

	cout << "max: " << n.Max() << endl;
	cout << "min: " << n.Min() << endl;
	cout << "average: " << n.Average() << endl;

	cout << endl;

	// 문제 3

	Student s1(5, "A");	
	Student s2(9, "B");
	Student s3(10, "C");

	s1.Print();
	s2.Print();
	s3.Print();

	Student::PeopleNum();

	cout << endl;

	// 문제 4

	int size = 3;

	int** mat = new int* [size];

	int idx = 1;

	for (int i = 0; i < size; i++)
	{
		mat[i] = new int[size];
	}

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			mat[i][j] = idx++;
		}
	}

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cout << mat[i][j] << " ";
		}

		cout << endl;
	}

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			mat[i][j] = NULL;
		}

		delete[] mat[i];
	}

	delete[] mat;
}