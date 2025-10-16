#include <iostream>

using namespace std;

int main() {
    int n, multiply;
    cout << "Enter n: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        multiply += (i * i);
    }
    
}