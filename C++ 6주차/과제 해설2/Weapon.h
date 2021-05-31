#pragma once

#include "Equipment.h"

class Weapon : public Equipment
{
	int atk;

public:
	Weapon();
	Weapon(string _name, int _lv, int _atk);
	~Weapon();

	void Info();
};

