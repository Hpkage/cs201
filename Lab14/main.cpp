// main.cpp Hiromi Kageyama Oct.5, 2020
// Write a c++ program that takes an input from the user
// and removes one letter from the right side until only
// one letter remains

#include <iostream>
#include "minus.h"

using std::cout;
using std::endl;
using std::cin;
using std::string;

int main() {
	cout << "Type in a word: ";
	string subtract;
	cin >> subtract;
	cout << endl;

	minus(subtract);

	return 0;
}