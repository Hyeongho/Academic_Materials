#include "Student.h"

int Student::people = 0;

Student::Student(int _num, string _name)
{
	num = _num;
	name = _name;

	people++;
}

void Student::Print()
{
	cout << "Name: " << name << ", Num: " << num << endl;
}

void Student::PeopleNum()
{
	cout << "count: " << people << endl;
}
