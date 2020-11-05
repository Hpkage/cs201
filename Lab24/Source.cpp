// Source.cpp Hiromi Kageyama Oct. 30, 2020
// Write a program that includes the iterator header
// to use the sort, reverse, and fill function on an initialized vector

#include <iostream>
#include <algorithm>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

void print(const vector<int>& v1) {
	for (const auto& i : v1) {
		cout << i << " ";
	} cout << endl << endl;
}

int main() {
	vector<int> v1{ 10, 11, 32, 5, 17, 21, 53, 15, 8, 1 };

	// prints the original vector
	cout << "Original vector:" << endl;
	print(v1);

	// prints sorted vector
	cout << "Sorted vector:" << endl;
	sort(v1.begin(), v1.end());
	print(v1);

	// prints reversed vector
	cout << "Reversed vector:" << endl;
	reverse(v1.begin(), v1.end());
	print(v1);

	// prints filled vector
	cout << "Filled vector:" << endl;
	fill(v1.begin() + 2, v1.end() - 4, 69);
	print(v1);

	return 0;
}