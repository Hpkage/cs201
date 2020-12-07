// Newton.cpp Hiromi Kageyama Dec 4, 2020
// Write a c++ program that finds the real roots of a problem
// using Newton's method

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <cmath>

// The equation looks like:
// Note that '_' stands for the word "sub"
// X_(k+1) = X_k - F(X_k)/F'(X_k)
int main() {
    // Enter an initial guess x
    cout << "Enter an initial guess: ";
    double x;
    cin >> x;

    double f = x * x - 1;
    double fprime = 2 * x;



    return 0;
}