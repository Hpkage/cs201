// Source.cpp Hiromi Kageyama Oct. 29, 2020
// Write a program that uses a map

#include <iostream>
#include <map>

using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::map;

int main() {
	map<int, string> person;
	person.insert({ 3, "Three" });
	person.insert({ 20, "Twenty" });
	person.insert({ 1, "One" });
	person.insert({ 13, "Thirteen" });
	person.insert({ 25, "Twenty-five" });

	person.erase(20);

	for (const auto i : person) {
		cout << "The key is: " << i.first << ", the value is: " << i.second << endl;
	}

	return 0;
}