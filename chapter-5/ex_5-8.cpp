#include <iostream>

using namespace std;

string product_of_natural_digits(int n){
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
    
    return to_string(product);
}

// int main() {
//     int n;
//     cout << "Enter n: ";
//     cin >> n;
    
//     cout << product_of_natural_digits(n);

// }