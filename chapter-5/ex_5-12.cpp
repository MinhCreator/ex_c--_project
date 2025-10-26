#include <iostream>

using namespace std;

int fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    int dp[n] = {};
    dp[0] = 0;
    dp[1] = 1;

    for (int i = 2; i < n; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    return dp[n - 1];
}


int main() {

    int n;
    cout << "Enter n: ";
    cin >> n;
    cout << "Fibonacci number is: " << fibonacci(n);
}