#pragma once

#include <iostream>
#include <string>

using namespace std;

class Student
{
	int num;
	string name;

	static int people;

public:
	Student(int _num, string _name);

	void Print();

	static void PeopleNum();
};

