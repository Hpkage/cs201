// Source.cpp Hiromi Kageyama Sept. 25, 2020
// Write a c++ program that repeatedly takes the input from the user
// and only outputs the lowercase letters

#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;

int main(int argc, char **argv) {
	cout << "Type anything: ";
	string input;
	cin >> input;
	cout << endl;
	cout << "Here are the lowercase letters you typed in:" << endl;

	// input is what the user enters
	for (int n = 0; n < input.length(); n++) {
		
		// character is each character typed in
		auto character = (input[n]);

		// prints only the lowercase letters
		if (character >= 97 && character <= 122) {
			cout << input[n];
		}
	}
	cout << endl;

	return 0;
}