#pragma once

#include <iostream>
#include <string>

using namespace std;

class Item
{
protected:
	string name;

public:
	Item();
	virtual ~Item();

	virtual void Info();
};

