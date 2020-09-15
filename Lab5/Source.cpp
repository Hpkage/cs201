//Source.cpp Hiromi Kageyama September 14, 2020
//This program should do 3 things when certain # are inputted

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int number;

int main() {
	//options to choose from
	cout << "Choose a number from 1 to 3\n";
	cout << "1). Do you wish to learn the truth?\n";
	cout << "2). How about the meaning of happiness?\n";
	cout << "3). To choose this option instead...\n";

	//to make a gap between the text and the typing box
	cout << endl;
	cin >> number;
	cout << endl;

	//Answers to the options
	switch(number) {

	case 1:
		cout << "There is no such thing as the absolute truth in this world\n";
		break;
	case 2:
		cout << "Happiness is when you are satisfied with life\n";
		break;
	case 3:
		cout << "You just wasted a chance to learn something\n";
		break;
	}
}