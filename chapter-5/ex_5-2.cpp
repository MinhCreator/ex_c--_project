#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num;
    cout << "enter number: ";
    cin >> num;

    int i = 2;
    int count = 0;

    while (i <= sqrt(num)) {
        if (num % i == 0)
        {
            count += 1;
        }
        i += 1;
    }

    if (count == 0 && num > 1)
    {
        cout << num << "is prime";
    }
    else
        cout << num << "isn't prime";
}