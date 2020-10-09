#include <iostream>
#include "minus.h"

using std::cout;
using std::endl;
using std::cin;
using std::string;

// takes input from user and outputs 'subtract.size -1' until there is one
// letter left
void minus(string subtract) {
	for (int i = subtract.size(); i >= 0; i--) {
		cout << subtract.substr(0,i) << endl;
	}

	return;
}