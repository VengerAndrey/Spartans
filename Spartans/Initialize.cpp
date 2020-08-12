#include "Initialize.h"

void SetColor(Colors color)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (int)color);
}

void Init()
{
	srand(time(0));
	rand();
	CONSOLE_CURSOR_INFO cci;
	cci.bVisible = false;
	cci.dwSize = 0;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cci);
}
