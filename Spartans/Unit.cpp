#include "Unit.h"

Unit::Unit(int hp, int dmg)
{
	this->hp = hp;
	this->dmg = dmg;
	hpChange = 0;
}

int Unit::GetHp()
{
	return hp;
}

void Unit::SetHp(int hp)
{
	hpChange += hp - this->hp;
	this->hp = hp;
}

int Unit::GetDmg()
{
	return dmg;
}

void Unit::SetDmg(int dmg)
{
	this->dmg = dmg;
}

bool Unit::IsAlive()
{
	return (hp > 0) ? true : false;
}

int Unit::GetHpChange()
{
	return hpChange;
}

void Unit::ClearHpChange()
{
	hpChange = 0;
}



