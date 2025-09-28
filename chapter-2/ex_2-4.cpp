#include <iostream>

using namespace std;

int main () {
    // swap values

    float a = 1., b = 3., temp; 
    cout << "Before swap: \n";
    cout << "a = " << a << ", b = " << b << "\n";
    temp = a;
    a = b;
    b = temp;
    cout << "After swap: \n";
    cout << "a = " << a << ", b = " << b << "\n";
    return 0;
}