#include "Item.h"
#include "Equipment.h"
#include "Consume.h"
#include "Armor.h"
#include "Weapon.h"

int main()
{
	Weapon w1("°Ë", 10, 10);
	Armor a1("Ãµ °©¿Ê", 10, 10);
	Consume c1("»¡°£ Æ÷¼Ç", 50, 0);

	w1.Info();
	a1.Info();
	c1.Info();
}