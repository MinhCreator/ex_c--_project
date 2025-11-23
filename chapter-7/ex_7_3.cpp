#include <iostream>
#include <vector>
using namespace std;

auto intialize_array(int size) {
    vector<int> arr(size);

    for (int i = 0; i < size; i ++) {
        cout << "Enter element " << i + 1 << ": ";
       cin >> arr[i];
    }
    return arr;
}

void print_array(vector<int> arr, int size) {
    for (int i = 0; i < size; i ++) 
        if (arr[i] != -1)
            cout << arr[i] << " ";
}

auto delElement(vector<int> arr, int pos) {
    // auto size = sizeof(arr);
    arr[pos] = -1;
    return arr;
}

void ask_user() {
    cout << "Enter array size and delete position: "; int size, pos; cin >> size >> pos;

    if(size > 0 && pos > 0 && pos <= size){
        auto arr = intialize_array(size);
        print_array(arr, size);
        cout << endl;
        
        cout << "Deleted element: " << arr[pos] << endl;
        arr = delElement(arr, pos);
        print_array(arr, size);
    }
}

int main() {

    ask_user();
}