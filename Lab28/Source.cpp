// Source.cpp Hiromi Kageyama Nov. 11, 2020
// Write a c++ program that sends your output into a text file

#include <iostream>
#include <fstream>
#include <iomanip>

using std::cout;
using std::endl;
using std::ofstream;

int main() {
	ofstream fout("Table.txt");
	if (!fout) {
		cout << "Error in opening Table.txt.";
		exit(1);
	}

	if (fout) {
		for (size_t i = 0; i < 100; i++) {
			if (i % 10 == 0) {
				fout << endl;
			}
			fout << std::setw(3) << i;
		}
		cout << "Successful run" << endl;
	}
	return 0;
}