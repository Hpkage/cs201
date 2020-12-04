// Newton.cpp Hiromi Kageyama Dec 4, 2020
// Write a c++ program that finds the real roots of a problem
// using Newton's method

#include "Functions.h"
#include <iostream>
using std::cout;
using std::endl;
using std::cin;
#include <string>
using std::string;
using std::getline;


// The formula for Newton's Method is 
// x sub (k + 1) = x sub k - F(x sub k) / F'(x sub k)
int main() {
    string str = "2x^3 + 1x^1 + 3x^2";
    int val = 2;
    std::cout << value(str, val);
   
    return 0;
}