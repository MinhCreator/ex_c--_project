#include <iostream>
#include "cmath"
using namespace std;

int implemented_power(int base, int exponent) {

    
    return base * pow(base, exponent - 1);
}

int main() {
    // create a function that calculates the derivative of the function f(x) = x^y ~ tính đạo hàm f(x) = x^y
    int base, exponent;
    cout << "Enter base and exponent: ";
    cin >> base >> exponent;
    cout << implemented_power(base, exponent);
}