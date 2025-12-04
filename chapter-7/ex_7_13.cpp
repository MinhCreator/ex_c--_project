#include <iostream>
#include "algorithm"
#include "string"
using namespace std;

void main_arr() {
    int n;
    do
    {
        cout << "Enter positive n the size of array (up to 50 elements): \n";
        cin >> n;
        /* code */
    } while (n < 0);
    
    int arr[n];

    // add ele into array
    for (int i = 0; i < n; i++)

    {
        cout << "Enter element " << i + 1 << ": \n";
        cin >> arr[i];
    }

    // display ele into array
    for (auto i : arr)
    {
        cout << i << " ";
    }

    // max element
    int max = *max_element(arr, arr + n);
    cout << "\nMax element: " << max << endl;
    
    // occurance of max element
    string occurance = to_string(max);
    cout << "occurance of max element: " << occurance.length();
}

int main() {
    main_arr();
}