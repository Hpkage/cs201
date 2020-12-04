#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>

class Student {
public:
	Student();

	Student(std::string you);

	Student(std::string you, int i);

	void printInfo() const;

private:
	int _id;
	std::string _name;
};

#endif
