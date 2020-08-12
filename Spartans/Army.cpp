#include "Army.h"

Army::Army(int size)
{
	units = new Unit * [size];
	this->size = size;
}

void Army::Attack(Group group)
{
	int* queueArray = new int[size];
	for (int i = 0; i < size; i++)
	{
		queueArray[i] = i;
	}
	int randomAttacker;
	for (int i = 0; i < size; i++)
	{
		while (true)
		{
			randomAttacker = rand() % size;
			if (queueArray[randomAttacker] != -1)
			{
				(*units[randomAttacker]).Attack(group.GetUnits(), group.GetSize());
				//(*units[randomAttacker]).Print();
				queueArray[randomAttacker] = -1;
				break;
			}
			
		}
		
	}
}

void Army::Print()
{
	if (size == 0)
	{
		cout << "No one is alive!\n";
		return;
	}
	for (int i = 0; i < size; i++)
	{
		(*units[i]).Print();
	}
}

void Army::ReloadArmy()
{
	ClearLog();
	for (int i = 0; i < size; i++)
	{
		(*units[i]).ClearHpChange();
	}
}

bool Army::IsDefeated()
{
	return (size > 0) ? false : true;
}
