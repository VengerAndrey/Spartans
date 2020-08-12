#include "EnemyArmy.h"

EnemyArmy::EnemyArmy(Dragon dragon, Immortal immortal, int size) : Army(size)
{
	int randomNumber;
	for (int i = 0; i < size; i++)
	{
		randomNumber = rand() % 2;
		switch (randomNumber)
		{
		case 0:
			units[i] = new Dragon(dragon);
			break;
		case 1:
			units[i] = new Immortal(immortal);
			break;
		default:
			break;
		}
	}
}

void EnemyArmy::Attack(Group group)
{
	cout << "\nXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n";\
	SetColor(Colors::RED);
	cout << "\nEnemy army is attacking...\n";
	SetColor(Colors::WHITE);
	cout << "\nXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n";

	Army::Attack(group);
}

void EnemyArmy::Print()
{
	cout << "\n---------------------------------------------\n";
	SetColor(Colors::RED);
	cout << "\n\tEnemy Army:\n\n";
	SetColor(Colors::WHITE);
	Army::Print();
	cout << "\n---------------------------------------------\n";
}
