#include <iostream>

using namespace std;

int main() {
    int x, y;
    cout << "Enter x and y: ";
    cin >> x >> y;

    int p = x * y, s = x + y;
    int q = s * 2 + p * (s * x) * (p + y);
    
    cout << "Result: " << q;
}