#include "Item.h"
#include "Equipment.h"
#include "Consume.h"
#include "Armor.h"
#include "Weapon.h"

int main()
{
	Weapon w1("��", 10, 10);
	Armor a1("õ ����", 10, 10);
	Consume c1("���� ����", 50, 0);

	w1.Info();
	a1.Info();
	c1.Info();
}