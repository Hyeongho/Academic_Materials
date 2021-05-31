#include "Armor.h"

Armor::Armor()
{
	def = 0;
}

Armor::Armor(string _name, int _lv, int _def)
{
	name = _name;
	lv = _lv;

	def = _def;
}

Armor::~Armor()
{
}

void Armor::Info()
{
	cout << "name: " << name << ", lv: " << lv << ", def: " << def << endl;
}
