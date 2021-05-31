#pragma once

#include <iostream>

using namespace std;

class Shape
{
public:
	int x;
	int y;

	Shape();
	virtual ~Shape();

	virtual int GetArea();
	virtual void Draw();
};

