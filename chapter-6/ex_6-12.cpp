#include <iostream>

using namespace std;

// use simple dynamic programming to find the factorial

int factorial(int n) {

    int dp[n];
    dp[0] = 1;

    for (int i = 1; i <= n; i ++) {
        dp[i] = dp[i - 1] * i;
    }

    return dp[n];
}


int main() {

    int n;
    cout << "Enter n: ";
    cin >> n;
    cout << "Factorial of " << n << " is " << factorial(n);
}