#include "Functions.h"

using std::string;

long long term(string polyterm, long long val) {
    string coeffStr = "";
    int i;
    //to find the coefficient
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

long long value(string& str, int val) {
    long long ans = 0;
    string polyterm;
    // using istringstream to get input in tokens
    std::istringstream is(str);
    while (is >> polyterm) {
        // check if the token is equal to '+' then
        // continue with the string
        if (polyterm == "+")
            continue;
        // Otherwise find the derivative of that
        // particular term
        else
            ans = (ans + term(polyterm, val));
    }
    return ans;
}
