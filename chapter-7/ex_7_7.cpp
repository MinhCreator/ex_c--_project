#include <iostream>
using namespace std;

bool not_in(int arr[], int size, int num) {
    for (auto i = 0; i < size; i++)
    {
        if (arr[i] == num)
        {
            return false;
        }
    }
    return true;
}

int* find_duplicate(int arr[], int size) {
    int* duplist = new int[size];

    for (auto i = 0; i < size; i++)
    {
        auto count = 0;
        for (auto j = 0; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count += 1;
            }
        }
        
        if (count > 1 && not_in(duplist, size, arr[i]))
        {
            duplist[i] = arr[i];
        }
    }
    
    return duplist;
}

void init_arr(int size) {
    int arr[size];

    for (int i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    int* list = find_duplicate(arr, size);
    cout << "Duplicate elements: ";
    for (auto i = 1 ; i < size; i++)
    {
        if (list[i] != 0)
        {
            /* code */
            cout << list[i] << " ";
        }
        
    }
}

int main() {

    int size;
    cout << "Enter array size: ";
    cin >> size;
    init_arr(size);
}