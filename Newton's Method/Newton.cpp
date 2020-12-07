// Newton.cpp Hiromi Kageyama Dec 4, 2020
// Write a c++ program that finds the real roots of a problem
// using Newton's method

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <cmath>
#include <iomanip>
using std::setw;
using std::fixed;

void Newton(float x1) {
    x1 = x1 - (x1 * x1 * x1 - 1) / (3 * (x1 * x1));
    cout << setw(9) << fixed << x1 << endl;
    return;
}

// The equation looks like:
// Note that '_' stands for the word "sub"
// X_(k+1) = X_k - F(X_k)/F'(X_k)
int main() {
    // Enter an initial guess x
    cout << "Enter an initial guess: ";
    float x;
    cin >> x;

    float x1;

    x1 = x - (x * x * x - 1) / (3 * (x * x));
    cout << x1 << endl;

    x1 = x1 - (x1 * x1 * x1 - 1) / (3 * (x1 * x1));
    cout << x1 << endl;
    for (size_t i = 0; i < 10; i++) {
        Newton(x1);
    }
    return 0;
}