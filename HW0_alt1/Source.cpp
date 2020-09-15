#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main() {
	cout << "roses are red," << endl;
	cout << "violets are blue," << endl;
	cout << "i've got five fingers," << endl;
	cout << "the middle one's for you." << endl;
	cout << "" << endl;
	cout << "Press ENTER to quit";
	while (cin.get() != '\n');
}