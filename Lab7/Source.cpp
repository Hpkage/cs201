//Source.cpp Hiromi Kageyama September 17, 2020
//Write a c++ program which uses the intio.hpp and intio.cpp files.
//This program outputs three separate integers input by the user.

#include <iostream>
#include "intio.cpp"

using std::cout;
using std::endl;

int main() {
	//takes user's input

	cout << "Type an integer : ";
	int num = getInt();
	cout << "Type an integer : ";
	int num1 = getInt();
	cout << "Type an integer : ";
	int num2 = getInt();
	
	//outputs the integers inputted by user

	putInt(num, 10);
	cout << endl;
	putInt(num1, 10);
	cout << endl;
	putInt(num2, 10);
	cout << endl;

	return 0;
}