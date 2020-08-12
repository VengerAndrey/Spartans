#pragma once
class Unit
{
	int hp;
	int dmg;
public:
	Unit(int hp = 0, int dmg = 0);
	int GetHp();
	void SetHp(int hp);
	int GetDmg();
	void SetDmg(int dmg);
	bool IsAlive();
	virtual void Attack(Group group) {};
	virtual void Print() {};
};

class Group
{
protected:
	Unit* units;
	int size;

public:
	void Update();
	Group GetGroup();
	int GetSize();
	Unit* GetUnits();
};
