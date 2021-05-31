#pragma once

#include "Item.h"

class Consume : public Item
{
	int hp;
	int mp;

public:
	Consume();
	Consume(string _name, int _hp, int _mp);
	~Consume();

	void Info();
};

