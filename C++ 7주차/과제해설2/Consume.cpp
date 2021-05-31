#include "Consume.h"

Consume::Consume()
{
	hp = 0;
	mp = 0;
}

Consume::Consume(string _name, int _hp, int _mp)
{
	name = _name;
	hp = _hp;
	mp = _mp;
}

Consume::~Consume()
{
}

void Consume::Info()
{
	cout << "name: " << name << ", hp: " << hp << ", mp: " << mp << endl;
}
