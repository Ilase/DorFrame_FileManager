#include "date.h"

date::date() {
	output = "00-00-0000";
	dd = 0;
	mm = 0;
	yyyy = 0;

}
date::date(int d, int m, int y) {

	dd = d;
	mm = m;
	yyyy = y;
	
	try {
		if ((m == 2) && (y % 4 == 0) && (d > 29))
			throw "Date is out of range!";
		if ((m % 2 == 1) && (d > 31))
			throw "Date is out of range!";
		if ((m % 2 == 0) && (d > 30))
			throw "Date is out of range!";
	}
	catch (const char * err_message) {
		dd = 0;
		mm = 0;
		yyyy = 0;
		std::cout << err_message << std::endl;
	}
}
date::date(const date& dt){
	this->dd = dt.dd;
	this->mm = dt.mm;
	this->yyyy = dt.yyyy;
}
int date::getDay()
{
	return dd;
}
int date::getMonth()
{
	return mm;
}
int date::getYear()
{
	return yyyy;
}

std::ostream& operator<<(std::ostream& out, date& _date)
{
	std::string tmp;
	_date.output = "";
	if (_date.dd < 10) _date.output = _date.output + "0" + std::to_string(_date.dd) + "-";
	else _date.output = _date.output + std::to_string(_date.dd);
	if (_date.mm < 10) _date.output = _date.output + "0" + std::to_string(_date.mm) + "-";
	else _date.output = _date.output + std::to_string(_date.dd);
	_date.output = _date.output + std::to_string(_date.yyyy);
	out << _date.output << std::endl;
	return out;
}

bool operator==(date& left, date& right ){
	
		return left.getDay() == right.getDay() && left.getMonth() == right.getMonth() && left.getYear() == right.getYear();
	
}