#pragma once
#include "Hoplite.h"
#include <iostream>
using namespace std;

class HopliteArmy : public Group
{
	//vector<Hoplite> army;
	//Group army;
public:
	HopliteArmy(Hoplite hoplite, int size = 1);
	void Attack(Group group);
	void Print();
};

