/* Source.cpp Hiromi Kageyama Sept. 25, 2020
   Write a c++ program that outputs values divisible by 3
   for the numbers 1-40 */

#include "Bool.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
	cout << "These numbers have no remainders when divided by 3:" << endl;
	for (int n = 0; n < 40; n++) {
		isDiv3(n);
	}
	return 0;
}