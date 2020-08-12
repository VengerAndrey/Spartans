#include "Group.h"

void Group::Update()
{
	int i = 0;
	while (true)
	{
		if (i == size)
		{
			break;
		}
		if ((*units[i]).GetHpChange())
		{
			(*units[i]).LogMyself(battleLog);
			if ((*units[i]).GetHp() <= 0)
			{
				Unit** newUnits = new Unit * [size - 1];
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
				continue;
			}
		}
		i++;
	}
}

void Group::PrintLog()
{
	cout << "\n*********************************************\n";
	SetColor(Colors::YELLOW);
	cout << "\nThe results of the battle is here, dear Lord!\n\n";
	SetColor(Colors::WHITE);
	if (battleLog == "")
	{
		cout << "Nothing has changed!\n";
	}
	else
	{
		cout << battleLog;
	}
	cout << "\n*********************************************\n";
}

void Group::ClearLog()
{
	battleLog = "";
}

Group Group::GetGroup()
{
	return *this;
}

int Group::GetSize()
{
	return size;
}

Unit** Group::GetUnits()
{
	return units;
}