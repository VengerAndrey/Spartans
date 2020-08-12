#include "EnemyArmy.h"

EnemyArmy::EnemyArmy(int size)
{
	this->size = size;
	this->units = new Unit[size];
	for (int i = 0; i < size; i++)
	{
		this->units[i] = Dragon(1000, 50);
	}
}

void EnemyArmy::Attack(Group group)
{
	for (int i = 0; i < size; i++)
	{
		units[i].Attack(group);
	}
}

void EnemyArmy::Print()
{
	cout << "----------------------------------\n";
	cout << "Enemy Army:\n";
	for (int i = 0; i < size; i++)
	{
		units[i].Print();
	}
	cout << "----------------------------------\n";
}
