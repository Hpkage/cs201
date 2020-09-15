/*Source.cpp Hiromi Kageyama Sept. 4th 2020
This program is to practice While-loops*/


#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int n = 1;
int i = 0;
int j = 1;
int main() {
	//part 1 of lab 3
	//print the numbers 1-20
	while (n <= 20) {
		cout << n << endl;
		++n;
	}

	cout << "" << endl;

	//part 2 of lab 3
	//make a 10*60 box using #
	while (i < 600) {
		if (i == j * 60) {
			cout << "" << endl;
			++j;
		}
		cout << "#";
		++i;
	}
	cout << "\n";

	cout << "Press ENTER to quit" << endl;
	while (cin.get() != '\n');
}