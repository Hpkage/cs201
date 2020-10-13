#include <iostream>
#include <sstream>
#include <vector>
#include "Istream.h"

using std::cout;
using std::endl;
using std::istringstream;
using std::string;
using std::vector;

void stream() {
	vector<string> num{ "69", "69a", "a69", "5.6", "    68", "\t11", "68 69", "0xA" };

	for (int i = 0; i < num.size(); i++) {
		istringstream instream(num[i]);
		int value;
		instream >> value;

		if (!instream) {
			cout << "You need to enter a integer." << endl;
		}
		else {
			cout << "Your number is: " << value*value << endl;
		}
	}
	return;
}