#include <iostream>
#include <vector>
using namespace std;

void averge_odd_even(int size) {
    vector<int> arr(size);

    for (int i = 0; i < arr.size(); i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    int c_odd = 0, c_even = 0;
    double sum_odd = 0;
    double sum_even = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] % 2 == 0)
        {
            c_even += 1;
            sum_even += arr[i];
        }
        else
        {
            c_odd += 1;
            sum_odd += arr[i];
        }
    }

    cout << "Average of odd numbers: " << sum_odd / c_odd << endl;
    cout << "Average of even numbers: " << sum_even / c_even << endl;
}

int main() {
    int size;
    cout << "Enter array size: ";
    cin >> size;
    averge_odd_even(size);
}