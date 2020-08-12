#include "Battle.h"

Battle::Battle(UnitsPattern up)
{
	hopliteArmy = new HopliteArmy(up.hoplite, up.numberOfHoplites);
	enemyArmy = new EnemyArmy(up.dragon, up.immortal, 5);
}

void Battle::Start()
{
	cout << "\n=============================================\n";

	SetColor(Colors::PINK);
	cout << "\nTHE BATTLE STARTS RIGHT NOW!\n";
	SetColor(Colors::WHITE);

	hopliteArmy->Print();
	enemyArmy->Print();

	while (true)
	{
		hopliteArmy->Attack(enemyArmy->GetGroup());
		enemyArmy->Update();
		enemyArmy->PrintLog();
		enemyArmy->Print();
		enemyArmy->ReloadArmy();

		SetColor(Colors::LIGHTBLUE);
		cout << "\n#############################################\n";
		cout << "#############################################\n";
		cout << "#############################################\n";
		SetColor(Colors::WHITE);

		if (CheckEnd())
		{
			break;
		}

		enemyArmy->Attack(hopliteArmy->GetGroup());
		hopliteArmy->Update();
		hopliteArmy->PrintLog();
		hopliteArmy->Print();
		hopliteArmy->ReloadArmy();

		SetColor(Colors::LIGHTBLUE);
		cout << "\n#############################################\n";
		cout << "#############################################\n";
		cout << "#############################################\n";
		SetColor(Colors::WHITE);

		if (CheckEnd())
		{
			break;
		}
	}

	SetColor(Colors::PINK);
	cout << "THE BATTLE IS FINISHED!\n";
	SetColor(Colors::WHITE);

	cout << "\n=============================================\n";
}

bool Battle::CheckEnd()
{
	if (hopliteArmy->IsDefeated())
	{
		SetColor(Colors::RED);
		cout << "\n\n\nHoplites have lost!\n\n\n";
		SetColor(Colors::WHITE);
		return true;
	}
	else if (enemyArmy->IsDefeated())
	{
		SetColor(Colors::RED);
		cout << "\n\n\nEnemies have lost!\n\n\n";
		SetColor(Colors::WHITE);
		return true;
	}
	return false;
}
