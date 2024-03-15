#pragma once
#include "libs.h"
class date
{
	int dd, mm, yyyy;
	std::string output;

public:
	date();
	date(int d, int m, int y);
	date(const date& dt);
	int getDay();
	int getMonth();
	int getYear();
	friend std::ostream& operator<<(std::ostream&, date&);
	friend bool operator==(date& left, date& right);
};

