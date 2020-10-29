// Main.cpp Hiromi Kageyama Oct. 28, 2020
// Finish writing a main function which utilizes the functions
// in truncstruct.cpp

#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include "truncstruct.hpp"


int main() {
	std::string str;
	std::cout << "Type in a word (it could be anything): ";
	std::cin >> str;
	std::cout << std::endl;
	StringInfo print = trunc8(str);
	std::cout << print.str << std::endl;

	return 0;
}