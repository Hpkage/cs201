//Source.cpp Hiromi Kageyama Sept. 22, 2020
//write a c++ program that sends information back to its caller
//using both a return value and parameter passed by reference

#include <iostream>
#include <string>
#include "modifyString.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
	string referencedString;
	modifyString(referencedString, 0);
	modifyString(referencedString, 0);
	modifyString(referencedString, 0);
	
	return 0;
}
