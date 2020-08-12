#pragma once

#include "Unit.h"
#include "Initialize.h"

class Group
{
private:
	string battleLog;
protected:
	Unit** units;
	int size;
public:
	void Update();
	void PrintLog();
	void ClearLog();
	Group GetGroup();
	int GetSize();
	Unit** GetUnits();
};

