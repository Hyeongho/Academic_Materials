#include "Point.h"

int main()
{
	Point arr[5] = { Point(0, 1), Point(2, 3), Point(4, 5) };

	arr[3] = AddPoint(arr[0], arr[1]);

	arr[4] = SubPoint(arr[2], arr[1]);

	for (int i = 0; i < 5; i++)
	{
		arr[i].Print();
	}

	cout << AvgPoint(arr, 5) << endl;
}