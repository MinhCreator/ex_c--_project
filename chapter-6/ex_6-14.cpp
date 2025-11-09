#include <iostream>

using namespace std;
// overload data type

int add(int a, int b) {

    return a + b;
}

double add(double a, double b) {

    return a + b;
}

float add(float a, float b) {

    return a + b;
}

int main() {

    int a, b;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << add(a, b);
}