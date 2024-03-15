#include <iostream>

#include "matrix.h"



int main() {
	matrix<int> mm0(6,6);
	matrix<int> mm1(6, 6);
	mm0 + mm1;
	return 0;
}