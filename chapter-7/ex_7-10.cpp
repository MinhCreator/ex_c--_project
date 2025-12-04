#include <iostream>

using namespace std;

void multiply_arr(){
    int size;

    cout << "Enter array size: "; cin >> size;

    int arr_1[size];

    cout << "Enter first array: " << endl;
    for (int i = 0; i < size; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr_1[i];
    }

    int arr_2[size];
    cout << "Enter second array: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr_2[i];
    }

    int multiply_arr[size];

    for (int i = 0; i < size; i ++) {
        multiply_arr[i] = arr_1[i] * arr_2[i];
    }

    // Display the final multiple array

    for(auto i: multiply_arr) {
        cout << i << " ";
    }
}

int main() {
    multiply_arr();
}