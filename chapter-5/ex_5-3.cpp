#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int a, n;
    int power = 1;

    cout << "Enter a, n: ";
    cin >> a >> n;

    int i = 1;

    do
    {
        power *= a;
        i++;
    } while (i <= n);
    cout << a << " power of " << n << " is : " << power;
    return 0;
}