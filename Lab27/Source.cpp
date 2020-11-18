// Source.cpp Hiromi Kageyama Nov. 9, 2020
// Write a c++ program that simulates flipping a fair coin 1000 times

#include <iostream>
#include <vector>
#include <random>
#include <ctime>
#include <algorithm>

int main() {
	std::vector<int> heads;
	std::vector<int> tails;
	std::mt19937 randomizer(time(0));
	std::uniform_int_distribution<int> HoT(0, 1);
	
	for (size_t i = 0; i < 1000; i++) {
		// if a 0 occurs, it will be put into the tails vector and
		// if a 1 occurs, it will be put into the heads vector
		if (HoT(randomizer) == 0) 
			tails.push_back(i);
		else 
			heads.push_back(i);
	}

	// prints out the size of each vector
	std::cout << "Heads count: " << heads.size() << std::endl;
	std::cout << "Tails count: " << tails.size() << std::endl;

	return 0;
}