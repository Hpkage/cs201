/**
 * @file     lambdas.hpp
 * @author   Student Name
 * @date     Mar 21, 2019
 * John Quan
 *
 * Practice using lambda functions
 */

#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <iterator>
#include <utility>
#include <vector>
#include <string>

#include "lambdas.hpp"

int main() {

	// TODO: REQUIRED
	//       Create a vector<pair<size_t, string>> to enumerate
	//       each string in the WIKIPEDIA_CPP string vector.

	std::vector<std::pair<size_t, std::string>> v1;

	for (auto i : WIKIPEDIA_CPP) {
		v1.push_back({ i.size(), i });
	}

	// TODO: REQUIRED
	//       Use std::sort with a comparison lambda function that sorts
	//       the vector pairs with the first member in descending order.

	std::sort(v1.begin(), v1.end(), 
		[](std::pair<size_t, std::string> simple,

		std::pair<size_t, std::string> simple2) {

		return (simple.first > simple2.first);
		});

	// TODO: REQUIRED
	//       Use printVectorPairs() to print the vector

	std::cout << printVectorPairs(v1.begin(), v1.end());

	std::cout << std::endl;

	// TODO: ADDITIONAL 1
	//       Use std::sort with a comparison lambda function that sorts
	//       the vector pairs with the second member in ascending order.

	std::sort(v1.begin(), v1.end(),
		[](std::pair<size_t, std::string> simple,

			std::pair<size_t, std::string> simple2) {

				return (simple.second < simple2.second);
		});

	// TODO: ADDITIONAL 1
	//       Use printVectorPairs() to print the vector

	std::cout << printVectorPairs(v1.begin(), v1.end());

	// TODO: ADDITIONAL 2
	//       Use std::find_if with a comparison lambda function that prints
	//       the vector pairs where the pair's second.length() > 15.
	//       Print the vector as described in the lab.

	std::cout << std::endl;
	int counter = 0;

	while (v1.begin() + counter + 1 < v1.end()) {
		auto iter =
		std::find_if(v1.begin() + counter, v1.begin() + counter + 1,
			[](std::pair<size_t, std::string> simple) {
				return (simple.second.length() > 15);
			});

		if (iter < v1.begin() + counter + 1 ) {
			std::cout << "{" << iter->first << ", " << iter->second << "}" << std::endl;
		}
		counter += 1;
	}
	return 0;
}
