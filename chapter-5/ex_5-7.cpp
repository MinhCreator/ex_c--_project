#include <iostream>

using namespace std;

string even_sum(int n) {
    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
    }
    return to_string(sum);
}    

// int main() {

//     int n;
//     cout << "Enter n: ";
//     cin >> n;

//     cout << even_sum(n);

// }