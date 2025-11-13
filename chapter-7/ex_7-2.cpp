#include <iostream>
#include "vector"
#include <algorithm>

using namespace std;


// largest element using pointer
int largestElement(int arr[], int size){
    return *max_element(arr, arr + size);
}

int main() {

    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    
    int arr[size];
    for (int i = 0; i < size; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }
    cout << "The largest element in the array is: " << largestElement(arr, size);
}