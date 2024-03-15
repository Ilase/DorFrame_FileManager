#include "prStr.h"

void cours::setPosition(short x, short y)
{
	SetConsoleCursorPosition(hStdOut, { x, y });
}
