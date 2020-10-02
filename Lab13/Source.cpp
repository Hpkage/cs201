// Source.cpp Hiromi Kageyama Oct. 1, 2020
// Write a c++ program that uses a vector of strings and uses an initializer list
// to print out words separated by spaces using a variety of for loops

#include <iostream>
#include <vector>
#include <string>
#include "vector_manip_main.cpp"

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;

void getInputs(vector<string>& words) {
	for (int i = 0; i < words.size(); i++) {
		cout << words[i] << " ";
	}
}