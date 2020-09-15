//Source.cpp Hiromi Kageyama Sept. 2, 2020
//This program is used to output the integer you type into
//integer + 1, then square the new interger

#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int n;

int main() {
	cout << "Type in an interger" << endl;
	cin >> n;
	cout << "The outcome is " << (n + 1) * (n + 1) << endl;
	cout << "Type ENTER to quit" << endl;
	system("pause>0");
}