#include "HopliteArmy.h"

HopliteArmy::HopliteArmy(Hoplite hoplite, int size) : Army(size)
{
	//units = new Unit*[size];
	for (int i = 0; i < size; i++)
	{
		units[i] = new Hoplite(hoplite);
	}
	//this->size = size;
}

void HopliteArmy::Attack(Group group)
{
	cout << "\nXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n";
	SetColor(Colors::GREEN);
	cout << "\nHoplite army is attacking...\n";
	SetColor(Colors::WHITE);
	cout << "\nXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n";

	Army::Attack(group);
}

void HopliteArmy::Print()
{
	cout << "\n---------------------------------------------\n";
	SetColor(Colors::GREEN);
	cout << "\n\tHoplite Army:\n\n";
	SetColor(Colors::WHITE);
	Army::Print();
	cout << "\n---------------------------------------------\n";
}
