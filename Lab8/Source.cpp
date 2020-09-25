//Source.cpp Hiromi Kageyama Sept. 19, 2020
//This program uses 2 functions. One that takes the input from the user
// and one that return values of n^2

#include <iostream>
#include "intio.cpp"
#include "lab8_main.cpp"
using std::cout;

int doInput() {
	cout << "Here are the numbers you input: ";
	return getInt();
}
int compute(int n) {
	return n * n;
}