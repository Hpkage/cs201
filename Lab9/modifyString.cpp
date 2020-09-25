#include <iostream>
#include <string>
#include "modifyString.h"

using std::string;
using std::cout;
using std::cin;
using std::endl;

/**
 * Append an integer to a string
 * @param referencedString string to append integer to
 * @param n append (n % 10) to referencedString
 * @return New length of referencedString
 */
void modifyString(string& referencedString, int n) {
	cout << "Type in a word: ";
	cin >> referencedString;
	n = referencedString.length();
	cout << "length: " << n << std::endl;
	cout << "stringInMain: " << referencedString << endl;
	cout << endl;
	return;
}