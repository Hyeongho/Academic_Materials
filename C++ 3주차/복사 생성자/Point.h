#pragma once
class Point
{
public:
	int a;
	int b;

	Point();

	Point(int _a, int _b);

	//��� �Լ��� add()�� �����ϴ� �����(��� ��ȯx)
	void add8(Point _p1, Point _p2);
	void add9(Point* _p1, Point* _p2);

	//��� �Լ��� add()�� �����ϴ� �����(��� ��ȯ)
	Point add10(Point _p);
	Point add11(Point& _p);
	Point operator + (Point& _p);
};
