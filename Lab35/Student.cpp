#include "Student.h"
using std::string;
using std::cout;

Student::Student() {
	_name = "Unknown";
	_id = 0;
}

Student::Student(string you) {
	_name = you;
	_id = 0;
}

Student::Student(string you, int i) {
	_name = you;
	_id = i;
}

void Student::printInfo() const{
	cout << "ID: " << _id << ", Name: " << _name;
}