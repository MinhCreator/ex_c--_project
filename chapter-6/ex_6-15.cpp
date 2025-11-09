#include <iostream>

using namespace std;

// recursive factorial 

int factorial(int n) {

    return n <= 0 ? 1 : n * factorial(n - 1);
}

int main() {

    int n;
    cout << "Enter n: ";
    cin >> n;
    cout << "Factorial of " << n << " is " << factorial(n);
}