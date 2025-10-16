#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    
    int i = 0;
    int product = 1;
    double digit;
    int temp = n;

    while (temp > 0)
    {
        digit = temp % 10;

        product *= digit;

        temp /= 10;
    }
    cout << product;
}