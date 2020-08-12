#pragma once
#include <iostream>
#include <string>
#include <ctime>
#include <Windows.h>

using namespace std;

class Unit
{
	int hp;
	int dmg;
	int hpChange;
public:
	Unit(int hp = 0, int dmg = 0);
	int GetHp();
	void SetHp(int hp);
	int GetDmg();
	void SetDmg(int dmg);
	bool IsAlive();
	int GetHpChange();
	void ClearHpChange();
	virtual void Attack(Unit** units, int size) = 0;
	virtual void Print() = 0;
	virtual void LogMyself(string& log) = 0;
};

