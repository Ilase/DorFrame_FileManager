#pragma once


class appBody
{
private:


public:
	appBody();
	void updateScreen();

};

void cours::setPosition(short x, short y)
{
	SetConsoleCursorPosition(hStdOut, { x, y });
}

