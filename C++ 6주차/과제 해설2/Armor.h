#pragma once

#include "Equipment.h"

class Armor : public Equipment
{
	int def;

public:

	Armor();
	Armor(string _name, int _lv, int _def);
	~Armor();

	void Info();
};

