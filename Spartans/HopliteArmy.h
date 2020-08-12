#pragma once
#include <iostream>

#include "Army.h"
#include "Hoplite.h"

using namespace std;

class HopliteArmy : public Army
{
public:
	HopliteArmy(Hoplite hoplite, int size = 1);
	void Attack(Group group);
	void Print();
};

