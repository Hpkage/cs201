// Source.cpp Hiromi Kageyama Oct. 22, 2020
// write code that does formatted numerical output using C++ Standard Library stream manipulators

#define _USE_MATH_DEFINES
#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>

// function to convert degrees into radians
std::vector<double> degreesToRadians(int degrees) {

	std::vector<double> radians;

	for (int degree = 0; degree <= degrees; ++degree) {
		radians.push_back(degree * M_PI / 180);
	}
	return radians;
}

int main() {

	std::vector<double> radians = degreesToRadians(180);

	// prints the values of cos(x) starting from 0 up to 180 at intervals of 5
	for (size_t i = 0; i < radians.size(); i += 5) {
		std::cout << std::setw(3) << i << " " << std::setw(11) << std::setprecision(8) << std::fixed << cos(radians[i]) << "\n";
	}

	return 0;
}