#include "Dragon.h"

void Dragon::Attack(Unit** units, int size)
{
	int damageRadius = 1;
	int randomUnit = rand() % size;
	for (int i = randomUnit - damageRadius; i <= randomUnit + damageRadius; i++)
	{
		if (i >= 0 && i < size)
		{
			(*units[i]).SetHp((*units[i]).GetHp() - GetDmg());
		}
	}
}

void Dragon::Print()
{
	cout << "Dragon: " << "HP = [" << GetHp() << "] DMG = [" << GetDmg() << "]\n";
}

void Dragon::LogMyself(string& log)
{
	if (GetHp() <= 0)
	{
		log.append("Dragon has died.\n");
	}
	else if (GetHpChange() < 0)
	{
		log.append("Dragon received ").append(to_string(-GetHpChange())).append(" damage.\n");
	}
	else if (GetHpChange() > 0)
	{
		log.append("Dragon was healed by ").append(to_string(GetHpChange())).append(" health points.\n");
	}
}
