#pragma once

#include <iostream>

using namespace std;

class Shape
{
	int height, width;

	float radius;

	int rectangle;

	float circle;

public:
	Shape(int _height, int _width, float _radius);

	~Shape();

	int GetRectangle();

	float GetCircle();
};

