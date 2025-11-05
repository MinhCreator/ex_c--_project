#include <iostream>

using namespace std;

int factorial(int n) {
    int multiply = 0;
    for (int i = 1; i <= n; i++)
    {
        multiply += (i * i);
    }
    return multiply;
}

// int main() {
//     int n;
//     cout << "Enter n: ";
//     cin >> n;

//     cout << "Factorial of " << n << " is: " << factorial(n);
    
//}