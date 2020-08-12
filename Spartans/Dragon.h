#pragma once

#include <iostream>

#include "Unit.h"

using namespace std;

class Dragon : public Unit
{
public:
	Dragon(int hp = 0, int dmg = 0) : Unit(hp, dmg) {};
	void Attack(Unit** units, int size) override;
	void Print() override;
	void LogMyself(string& log) override;
};

