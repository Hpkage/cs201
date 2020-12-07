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
    cout << "This program finds a real root using Newton's Method." << endl;
    cout << "The sample problem is: f(x) = x^2 - 2, the derivative is 2x." << endl;
    cout << "The formula for Newton's Method is: " << endl << endl;
    cout << "   x_(k+1) = x_k - f(x_k) / f'(x_k)" << endl << endl;

    // Enter an initial guess x
    cout << "Enter an initial guess: ";
    float x;
    cin >> x;

    // Formula of Newton's method
    float x1 = x - (x * x - 2) / (2 * x);

    if (x == 0) {
        cout << "You cannot divide by 0." << endl;
        exit(1);
    } cout << setprecision(9) << fixed << x1 << endl;

    // Repeats using Newton's Method until a root is found
    while (true) {
        x1 = x1 - (x1 * x1 - 2) / (2 * x1);
        cout << setprecision(9) << fixed << x1 << endl;
        if (x1 == x1 - (x1 * x1 - 2) / (2 * x1)) break;
    } cout << "Found a real root at: " << x1 << "." << endl;

    return 0;
}