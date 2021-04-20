#pragma once

#include <iostream>
#include <string>

using namespace std;

class Point
{
	int x, y;
public:
	Point(int x, int y);

	void Print(string msg);
	void WhereAmI();
};

