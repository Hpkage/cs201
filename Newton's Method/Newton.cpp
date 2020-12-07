// Newton.cpp Hiromi Kageyama Dec 4, 2020
// Write a c++ program that finds the real roots of a problem
// using Newton's method

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <cmath>
#include <iomanip>
using std::setprecision;
using std::fixed;

// The equation looks like:
// Note that '_' stands for the word "sub"
// X_(k+1) = X_k - F(X_k)/F'(X_k)
int main() {
    // Enter an initial guess x
    cout << "Enter an initial guess: ";
    float x;
    cin >> x;

    // Formula of Newton's method
    float x1 = x - (x * x * x - 1) / (3 * (x * x));
    cout << setprecision(9) << fixed << x1 << endl;
    while (true) {
        x1 = x1 - (x1 * x1 - 2) / (2 * x1);
        cout << setprecision(9) << fixed << x1 << endl;
        if (x1 == x1 - (x1 * x1 - 2) / (2 * x1)) break;
    }

    cout << "The real root is at: " << x1 << endl;
    return 0;
}