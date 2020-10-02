// Source.cpp Hiromi Kageyama Oct. 1, 2020
// Write the function for getUserString which takes an
// arbitrary number of words from the user and prints it out

#include "userInput.hpp"
#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;

void getUserStrings(std::vector<std::string>& words) {
	string type;

	while (cin >> type) {
		if (type == "End") {
			break;
		}
		words.push_back(type);
	}
	cout << endl;

	for (auto i : words) {
		cout << i << " ";
	}
	cout << endl;

	return;
}
