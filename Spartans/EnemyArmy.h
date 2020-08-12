#pragma once
#include <iostream>
#include "Unit.h"
#include "Dragon.h"
using namespace std;

class EnemyArmy : public Group
{
public:
	EnemyArmy(int size = 1);
	void Attack(Group group);
	void Print();
};

