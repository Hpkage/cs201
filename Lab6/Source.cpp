//Source.cpp Hiromi Kageyama September 14, 2020
//write a function that takes a string parameter
#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

void print(string str1) {
	//make link's size show after printing out str1
	int len = str1.size();
	cout << "Your string is : " << str1 << "; and the size is " << len << endl;

}
int main() {
	print("supercalafragalistic");

	return 0;
}