#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>

using namespace std;

class Person
{
public:
	int age;
	char* name;

public:
	Person(int _age, const char* _name)
	{
		age = _age;
		name = new char[strlen(_name) + 1];
		strcpy(name, _name);
	}

	Person(const Person& s)
	{
		age = s.age;
		name = s.name;
	}

	~Person()
	{
		cout << "소멸!" << endl;
		delete name;
	}

	void printPerson()
	{
		cout << "이름: " << name << endl;
		cout << "나이: " << age << endl;
	}
};

int main()
{
	Person A(22, "jack");
	Person B = A;

	A.age = 28;
	strcpy(A.name, "John");

	A.printPerson();
	B.printPerson();

}