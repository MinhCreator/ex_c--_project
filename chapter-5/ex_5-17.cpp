#include <iostream>

using namespace std;

int find_largest_k(int n) {

    int k = 1;

    while (((k * (k + 1)) / 2) <= n)
    {
        k++;
    }
    
    return k - 1;
}

int main() {

    int n;
    cout << "Enter n: ";
    cin >> n;

    if (n > 0)
    {
        cout << "Largest k is: " << find_largest_k(n);
    }
    else if (n < 0)
    {
        cout << "N";
    }
    
}