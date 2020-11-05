// Source.cpp Hiromi Kageyama Nov. 4, 2020
// Write a c++ program uses the mismatch 

#include <algorithm>
#include <iostream>
#include <vector>

int main() {
	std::vector<int> v1{ 3, 5, 1, 23, 11, 15, 30, 28, 21, 10 };
	std::vector<int> v2{ 3, 5, 7, 23, 11, 10, 15, 21, 18, 12 };

	auto same = std::mismatch(v1.begin(), v1.end(), v2.begin());

	std::cout << "There is a mismatch at:" << std::endl;
	std::cout << "v1 = " << *same.first << " and v2 = " << *same.second << std::endl;

	return 0;
}