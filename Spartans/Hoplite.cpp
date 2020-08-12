#include "Hoplite.h"

void Hoplite::Print()
{
	cout << "Hoplite: " << "HP = [" << GetHp() << "] DMG = [" << GetDmg() << "]\n";
}

void Hoplite::Attack(Group group)
{
	group.GetUnits()[0].SetHp(group.GetUnits()[0].GetHp() - GetDmg());
}
