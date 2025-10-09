#include <iostream>

using namespace std;

int main() {
    double a, b, c;
    cout << "enter side of triangle: ";
    cin >> a, b, c;

    if (a == b || b == c)
    {
        cout << "I or S" ;
    }
    if (a == b && b == c && c == a)
    {
        cout << "E"; 
    }

}