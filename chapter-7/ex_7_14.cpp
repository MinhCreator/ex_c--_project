#include <iostream>
#include "cmath"
using namespace std;

auto primes(int n) {

    int i = 2;
    int count = 0;

    while (i <= sqrt(n))
    {
        if (n % i == 0)
        {
            count += 1;
        }
        i += 1;
    }

    if (count == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

auto totalPrime(){
    int n;
    cout << "Enter n: ";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    // re list array
    for (int i = 0; i < n; i++)
    {
        cout << "element " << i + 1 << ": ";
        cout << arr[i] << endl;
    }

    // total prime number
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        if (primes(arr[i]) == true)
        {
            total += 1;
        }
    }

    cout << total;
}

int main() {

    totalPrime();
}