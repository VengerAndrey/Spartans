#pragma once

#include <iostream>

#include "Unit.h"

using namespace std;

class Immortal : public Unit
{
public:
	Immortal(int hp = 0, int dmg = 0) : Unit(hp, dmg) {};
	void Attack(Unit** units, int size);
	void Print();
	void LogMyself(string& log) override;
};

