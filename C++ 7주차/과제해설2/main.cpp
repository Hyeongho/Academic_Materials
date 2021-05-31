#include "Item.h"
#include "Equipment.h"
#include "Consume.h"
#include "Armor.h"
#include "Weapon.h"

int main()
{
	Item* item[5];

	item[0] = new Weapon("°Ë", 10, 10);
	item[1] = new Armor("°©¿Ê", 10, 10);
	item[2] = new Consume("»¡°£ Æ÷¼Ç", 50, 0);
	item[3] = new Consume("ÆÄ¶õ Æ÷¼Ç", 0, 50);
	item[4] = new Consume("¿¤¸¯¼­", 50, 50);

	for (int i = 0; i < 5; i++)
	{
		item[i]->Info();
	}

	for (int i = 0; i < 5; i++)
	{
		delete item[i];
	}
}