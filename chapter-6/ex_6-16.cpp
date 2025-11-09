#include <iostream>

using namespace std;

// recursive sum natural number

int sum(int n) {

    return n == 1 ? 1 : n + sum(n - 1);
}

int main() {    

    int n;
    cout << "Enter n: ";
    cin >> n;
    cout << "Sum of natural number is: " << sum(n);
}