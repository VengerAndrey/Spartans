#include <iostream>

#include "HopliteArmy.h"
#include "Dragon.h"
#include "EnemyArmy.h"

using namespace std;

int main()
{
	HopliteArmy army(Hoplite(100, 100), 10);
	army.Print();
	EnemyArmy enemies(3);
	//Dragon dragon(1000, 50);
	//dragon.Attack(army.GetGroup());
	enemies.Attack(army.GetGroup());
	army.Update();
	army.Print();
	//army.Attack(dragon.GetUnit());
	//dragon.Print();
}