/*source.cpp Hiromi Kageyama September 9, 2020
This program is made to make a list of numbers, 1-100, and the 
numbers divisible by 3 would output Fizz*/

#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int n = 1;

int main() {
	//make every integer divisible by 3 output "Fizz"
	//additional: make every integer divisible by 5 output "Buzz"
	for (n = 1; n <= 100; ++n) {
		if (n % 3 == 0) {
			cout << "Fizz ";
		}
		if (n % 5 == 0) {
			cout << "Buzz";
		}
		if (n % 3 != 0 && n % 5 != 0) {
			cout << n;
		}
		cout << endl;
	}

	//adding space
	cout << "" << endl;

	//prevent debug from automatically closing
	cout << "Press ENTER to quit" << endl;
	while (cin.get() != '\n');
}