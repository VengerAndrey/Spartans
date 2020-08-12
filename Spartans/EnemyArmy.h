#pragma once
#include <iostream>

#include "Army.h"
#include "Dragon.h"
#include "Immortal.h"

using namespace std;

class EnemyArmy : public Army
{
public:
	EnemyArmy(Dragon dragon, Immortal immortal, int size = 1);
	void Attack(Group group);
	void Print();
};

