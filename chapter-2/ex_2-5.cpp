#include <iostream>
#include <array>

using namespace std;
array<double, 4> normal_cal(int x , int y) {

    double add, sub, mul, div;
    add = x + y;
    sub = x - y;
    mul = x * y;
    div = x / y;
    return { add, sub, mul, div };
}

int main () {
    int a, b;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    array<double, 4> results = normal_cal(a, b);
    cout << "add: " << results[0] << "\n";
    cout << "sub: " << results[1] << "\n";
    cout << "mul: " << results[2] << "\n";
    cout << "div: " << results[3] << "\n";

    return 0;
}