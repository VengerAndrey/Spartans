#pragma once
#include <iostream>

#include "Group.h"
#include "Initialize.h"
using namespace std;

class Army : public Group
{
public:
	Army(int size = 1);
	void Attack(Group group);
	void Print();
	void ReloadArmy();
	bool IsDefeated();
};

