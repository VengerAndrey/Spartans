#include "HopliteArmy.h"

HopliteArmy::HopliteArmy(Hoplite hoplite, int size)
{
	units = new Hoplite[size];
	for (int i = 0; i < size; i++)
	{
		units[i] = hoplite;
	}
	this->size = size;
}

void HopliteArmy::Attack(Group group)
{
	for (int i = 0; i < size; i++)
	{
		units[i].Attack(group);
	}
	/*int totalDmg = units[0].GetDmg() * size;
	group.GetUnits()[group.GetSize()/2].SetHp(group.GetUnits()[group.GetSize() / 2].GetHp() - totalDmg);*/
}

void HopliteArmy::Print()
{
	cout << "----------------------------------\n";
	cout << "Our Army:\n";
	for (int i = 0; i < size; i++)
	{
		units[i].Print();
	}
	cout << "----------------------------------\n";
}
