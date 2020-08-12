#include <iostream>

#include "Battle.h"
#include "Initialize.h"
using namespace std;

int main()
{
	Init();

	cout << "Enter hoplite stats:\n";
	cout << "HP: ";
	string hp;
	cin >> hp;
	cout << "DMG: ";
	string dmg;
	cin >> dmg;
	cout << "Enter number of hoplites: ";
	int numberOfHoplites;
	cin >> numberOfHoplites;

	Hoplite hoplite(stoi(hp), stoi(dmg));

	cout << "\nEnter dragon stats:\n";
	cout << "HP: ";
	cin >> hp;
	cout << "DMG: ";
	cin >> dmg;

	Dragon dragon(stoi(hp), stoi(dmg));

	cout << "\nEnter immortal stats:\n";
	cout << "HP: ";
	cin >> hp;

	Immortal immortal(stoi(hp), 1);

	UnitsPattern up = { hoplite, numberOfHoplites, dragon, immortal };

	Battle battle(up);
	battle.Start();
}