#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int m, n, num, digit, sum, temp; 
    cout << "enter m and n";
    cin >> m >> n;

    if (n <= m)
    {
        temp = m;
        m = n;
        n = temp;
    }
    cout << "Armstrong Number Between %d and %d: ", m, n;
    for (int i = m; i <= n; i++)
    {
        num = i;
        sum = 0;
        while (num > 0)
        {
            digit = num % 10;
            sum += pow(digit, 3);
            num /= 10;
        }
        if (sum == i)
        {
            cout << "%d ", i;
        }
    }
    return 0;
}