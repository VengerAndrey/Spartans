#pragma once

#include <iostream>

#include "HopliteArmy.h"
#include "EnemyArmy.h"

using namespace std;

struct UnitsPattern
{
	Hoplite hoplite;
	int numberOfHoplites;
	Dragon dragon;
	Immortal immortal;
};

class Battle
{
	HopliteArmy* hopliteArmy;
	EnemyArmy* enemyArmy;
public:
	Battle(UnitsPattern up);
	void Start();
	bool CheckEnd();
};

