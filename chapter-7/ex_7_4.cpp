#include <iostream>
#include <vector>
using namespace std;

void listing_arr(vector<double> arr) {
    cout << "Array: ";
    for (auto i : arr)
    {
        cout << i << " ";
    }
}

void average(int size) {
    vector<double> arr(size);

    for (int i = 0; i < arr.size(); i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }
    listing_arr(arr);
    double sum = 0;
    for (auto i : arr)
    {
        sum += i;
    }
    
    cout << "Average: " << sum / arr.size();    
}

int main() {
    int size;
    cout << "Enter array size: ";
    cin >> size;
    average(size);
}