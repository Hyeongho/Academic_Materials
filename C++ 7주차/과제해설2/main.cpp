#include "Item.h"
#include "Equipment.h"
#include "Consume.h"
#include "Armor.h"
#include "Weapon.h"

int main()
{
	Item* item[5];

	item[0] = new Weapon("��", 10, 10);
	item[1] = new Armor("����", 10, 10);
	item[2] = new Consume("���� ����", 50, 0);
	item[3] = new Consume("�Ķ� ����", 0, 50);
	item[4] = new Consume("������", 50, 50);

	for (int i = 0; i < 5; i++)
	{
		item[i]->Info();
	}

	for (int i = 0; i < 5; i++)
	{
		delete item[i];
	}
}