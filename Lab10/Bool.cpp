// Functions for the main file (Source.cpp)

#include "Bool.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

// Outputs numbers from 0-40 which do not have remainders
bool isDiv3(int n) {
	if (n % 3 == 0)
		cout << n << endl;

	return 0;
}