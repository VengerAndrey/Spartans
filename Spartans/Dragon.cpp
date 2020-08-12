#include "Dragon.h"

void Dragon::Attack(Group group) 
{
	for (int i = 0; i < group.GetSize()/5; i++)
	{
		group.GetUnits()[i].SetHp(group.GetUnits()[i].GetHp() - GetDmg());
	}
}

Unit* Dragon::GetUnit()
{
	return this;
}

void Dragon::Print()
{
	cout << "Dragon: " << "HP = [" << GetHp() << "] DMG = [" << GetDmg() << "]\n";
}
