#pragma once

#include "Shape.h"

class Rectangle : public Shape
{
	int area;

public:
	int height;
	int width;

	Rectangle();
	Rectangle(int _x, int _y, int _height, int _width);

	int GetArea();

	void Draw();
};

