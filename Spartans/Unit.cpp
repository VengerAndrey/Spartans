#include "Unit.h"

Unit::Unit(int hp, int dmg)
{
	this->hp = hp;
	this->dmg = dmg;
}

int Unit::GetHp()
{
	return hp;
}

void Unit::SetHp(int hp)
{
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

void Group::Update()
{
	int i = 0;
	while (true)
	{
		if (i == size)
		{
			break;
		}
		if (!(units[i].IsAlive()))
		{
			Unit* newUnits = new Unit[size - 1];
			for (int j = 0; j < size; j++)
			{
				if (j < i)
				{
					newUnits[j] = units[j];
				}
				else if (j > i)
				{
					newUnits[j - 1] = units[j];
				}
			}
			size--;
			units = newUnits;
		}
		else
		{
			i++;
		}
	}
}

Group Group::GetGroup()
{
	return *this;
}

int Group::GetSize()
{
	return size;
}

Unit* Group::GetUnits()
{
	return units;
}
