// Source.cpp Hiromi Kageyama Nov. 25, 2020
// Write a c++ program that defines a class with member functions 
// and data members, and creates objects of the class.

#include <iostream>
#include <string>

using std::string;

class Data {
public:
	void setter1(int number, string name) {
		_num1 = number;
		_name1 = name;
	}

	int getter1() const {
		return _num1;
	}

	string getter2() const {
		return _name1;
	}

	void toString() {
		std::cout << "{ " << getter1() << ", " << getter2() << " }" << std::endl;
	}

private:
	int _num1 = 0;
	string _name1;
};

int main() {
	Data value;
	int val;
	string name;
	std::cout << "Please enter a number: ";
	std::cin >> val;
	std::cout << std::endl;
	std::cout << "Please enter a name: ";
	std::cin >> name;
	std::cout << std::endl;

	value.setter1(val, name);
	value.toString();

	return 0;
}