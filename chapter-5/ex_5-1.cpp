#include <iostream>

using namespace std;

int main() {
    int i, n, sum = 0;

    cout << "Enter range sum: ";
    cin >> n;
    for ( i = 0; i < n; i++)
    {
        sum += i;
    }

    cout << "sum: " << sum;
}