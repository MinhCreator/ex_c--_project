#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

auto max(vector<double> arr) {
    auto it = max_element(arr.begin(), arr.end());

    return *it;
}

auto min(vector<double> arr) {
    return *(min_element(arr.begin(), arr.end()));
}

void add(int size){
    vector<double> arr(size);

    for (int i = 0; i < arr.size(); i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << "The Average: " << (max(arr) + min(arr)) / 2;
}

int main() {

    int size;
    cout << "Enter array size: ";
    cin >> size;
    add(size);
}