#include "Hoplite.h"

void Hoplite::Print()
{
	cout << "Hoplite: " << "HP = [" << GetHp() << "] DMG = [" << GetDmg() << "]\n";
}

void Hoplite::LogMyself(string& log)
{
	if (GetHp() <= 0)
	{
		log.append("Hoplite has died.\n");
	}
	else if (GetHpChange() < 0)
	{
		log.append("Hoplite received ").append(to_string(-GetHpChange())).append(" damage.\n");
	}
	else if (GetHpChange() > 0)
	{
		log.append("Hoplite was healed by ").append(to_string(GetHpChange())).append(" health points.\n");
	}
}

void Hoplite::Attack(Unit** units, int size)
{
	int randomUnit = rand() % size;
	(*units[randomUnit]).SetHp((*units[randomUnit]).GetHp() - GetDmg());
}
