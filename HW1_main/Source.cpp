//Source.cpp Hiromi Kageyama CS:201 September 10, 2020
//This program should make a diamond shape using a # after typing an integer

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int a, b, c;

int main() {
 //make the program display the shape of a diamond

    cout << "Type in an interger: ";
    cin >> c;

    for (a = 0; a <= c; a++) {
        for (b = 1; b <= c - a; b++)
            cout << " ";
        for (b = 1; b <= 2 * a - 1; b++)
            cout << "#";
        cout << endl;
    }
    for (a = c - 1; a >= 1; a--) {
        for (b = 1; b <= c - a; b++)
            cout << " ";
        for (b = 1; b <= 2 * a - 1; b++)
            cout << "#";
        cout << endl;
    }
    if (c <= 0) {
        cout << "Use a value greater than 0" << endl;
    }
}