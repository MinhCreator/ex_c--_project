#include <iostream>
#include <array>
#include <algorithm>


using namespace std;

void sorted(int a, int b, int c) {

    int arr[3] = {a, b, c};
    int len = sizeof(arr) / sizeof(arr[0]);

    sort(arr, arr + len);

    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int a, b, c;
    cout << "Enter a, b, c: ";
    cin >> a >> b >> c;
    // -999 999 999 <= a, b, c <= 999 999 999
    if (-999999999 <= a <= 999999999 && -999999999 <= b <= 999999999 && -999999999 <= c <= 999999999)
    {
        sorted(a, b, c);
    }
    else
        cout << "Not valid";
}