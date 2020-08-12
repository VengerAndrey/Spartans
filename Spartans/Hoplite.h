#pragma once
#include "Unit.h"
#include <iostream>

using namespace std;

class Hoplite : public Unit
{
public:
	Hoplite(int hp = 0, int dmg = 0) : Unit(hp, dmg) {};
	Hoplite(const Unit& unit) : Unit(unit) {};
	void Attack(Unit** units, int size) override;
	void Print() override;
	void LogMyself(string& log) override;
};

