// Source.cpp Hiromi Kageyama Oct. 1, 2020
// Write a c++ program that uses a vector of strings and uses an initializer list
// to print out words separated by spaces using a variety of for loops

#include <iostream>
#include <vector>
#include <string>
#include <array>
#include "vector_manip.hpp"

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;
using std::array;

void getInputs(vector<string>& words) {
	string type;

	while (cin >> type) {
		if (type == "end") {
			break;
		}
		words.push_back(type);
	}
	cout << endl;

	for (const auto& i : words) {
		cout << i << " ";
	}
	cout << endl;

	return;
}