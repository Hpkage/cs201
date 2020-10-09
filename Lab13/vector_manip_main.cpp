/**
 * @file     vector_manip_main.cpp
 * @author   Student Name
 * @version  Jan 21, 2019
 * John Quan 
 *
 * Declare a vector of strings, initialize it using an initializer
 * list (braces-based initialization), and print it—neatly—using
 * a range-based for-loop.
 */

#include <iostream>
#include <vector>
#include "vector_manip.hpp"

using std::cout;
using std::endl;
using std::vector;
using std::string;

int main() {
	vector<string> words{ "Hello!", "Welcome", "to", "the", "initializer." };

	std::cout << "Types in any amount of words (type 'end' to quit): "
			<< endl;

	
	//TODO Declare a vector of strings named "words"
	getInputs(words);
	//TODO REQUIRED Print original words with a range-based for loop.
	//     Access each string by-reference and make it constant.


	return 0;
}