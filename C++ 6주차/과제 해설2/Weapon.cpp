#include "Weapon.h"

Weapon::Weapon()
{
	atk = 0;
}

Weapon::Weapon(string _name, int _lv, int _atk)
{
	name = _name;
	lv = _lv;
	atk = _atk;
}

Weapon::~Weapon()
{
}

void Weapon::Info()
{
	cout << "name: " << name << ", lv: " << lv << ", atk: " << atk << endl;
}
