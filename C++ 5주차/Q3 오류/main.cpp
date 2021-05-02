//#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>

using namespace std;

class Person
{
public:
	int age;
	char* name;

public:
	Person();

	Person(int _age, const char* _name)
	{
		age = _age;
		name = new char[strlen(_name) + 1];
		strcpy(name, _name);
	}

	Person(const Person& p)
	{
		age = p.age;
		name = new char[strlen(p.name) + 1];

		strcpy(name, p.name);
	}

	~Person()
	{
		cout << "소멸!" << endl;
		delete[] name;
	}

	void printPerson()
	{
		cout << "이름: " << name << endl;
		cout << "나이: " << age << endl;
	}

	void clone(Person& p)
	{
		age = p.age;

		int len = strlen(name) + 1;

		if (len > 0)
		{
			delete[] name;
		}

		len = strlen(p.name) + 1;

		name = new char[len];

		strcpy(name, p.name);

		for (int i = 0; i < len; i++)
		{
			name[i] = p.name[i];
		}
	}
};

Person::Person()
{
	age = 0;
	
	name = NULL;
}

int main()
{
	Person A(22, "jack");
	Person B(0, "  ");

	B.clone(A);

	A.age = 28;
	strcpy(A.name, "John");

	A.printPerson();
	B.printPerson();

}