#include "libs.h"
#include "date.h"


int main() {

	date date1 = date(1,1,2006);
	date date2 = date(1,1,2005);
	date date3{ date2 };

	if (date3 == date2) {
		std::cout << "date3 = date2" << std::endl;
	}
	std::cout << date1 << date2 << date3 << std::endl;
	return 0;
}