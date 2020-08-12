#include "Immortal.h"

void Immortal::Attack(Unit** units, int size)
{
	int damageRadius = 1;
	int randomUnit = rand() % size;
	for (int i = randomUnit - damageRadius; i <= randomUnit + damageRadius; i++)
	{
		if (i >= 0 && i < size)
		{
			(*units[i]).SetHp(1);
		}
	}
}

void Immortal::Print()
{
	cout << "Immortal: " << "HP = [" << GetHp() << "] DMG = [" << GetDmg() << "]\n";
}

void Immortal::LogMyself(string& log)
{
	if (GetHp() <= 0)
	{
		log.append("Immortal has died.\n");
	}
	else if (GetHpChange() < 0)
	{
		log.append("Immortal received ").append(to_string(-GetHpChange())).append(" damage.\n");
	}
	else if (GetHpChange() > 0)
	{
		log.append("Immortal was healed by ").append(to_string(GetHpChange())).append(" health points.\n");
	}
}
