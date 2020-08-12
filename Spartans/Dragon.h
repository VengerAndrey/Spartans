#pragma once
#include "Unit.h"
#include <vector>
#include <iostream>
using namespace std;

class Dragon : public Unit
{
public:
	Dragon(int hp = 0, int dmg = 0) : Unit(hp, dmg) {};
	// dragon damages all units in the group (splash damage)
	void Attack(Group group);
	Unit* GetUnit();
	void Print();
};

