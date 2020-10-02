/**
 * @file     userInputMain.cpp
 * @author   Student Name
 * @version  Jan 21, 2019
 * John Quan
 * @brief    Print out every word that was entered
 *
 * Input an arbitrary number of “words” from the user (ending
 * when the user types some special word: perhaps something like
 * “end”). After all the input is done, the program should print
 * out every word that was entered separated by a space.
 */

#include "userInput.hpp"
#include <iostream>
#include <string>
#include <vector>

int main() {
	std::vector<std::string> words;

	// prompt
	std::cout << "Enter a series of strings (type \"End\" to finish): "
		<< std::endl;

	// TODO create userInput.cpp with this function
	getUserStrings(words);

	return 0;
}
