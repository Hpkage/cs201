#include "Functions.h"

using std::string;

long long term(string polyterm, long long val) {
    //to find the coefficient
    string coeffStr = "";
    int i;
    for (i = 0; polyterm[i] != 'x'; i++)
        coeffStr.push_back(polyterm[i]);
    long long coeff = atol(coeffStr.c_str());
    // to get the power value
    string powStr = "";
    for (i = i + 2; i != polyterm.size(); i++)
        powStr.push_back(polyterm[i]);
    long long power = atol(powStr.c_str());
    // For ax^n, we return a(n-1)x^(n-1)
    return coeff * power * pow(val, power - 1);
}