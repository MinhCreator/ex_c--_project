#include <iostream>

using namespace std;

bool not_in(int arr[], int size, int target){

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target) {
            return false;
        }
    }
    return true;
}

void delete_duplicate() {

    // initialize array
    int size;
    cout << "Enter array size: ";
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }
    
    int new_arr[size];
    // Start traversing elements
   
    // check if element is not in new array
    for (int i = 0; i < size; i++)
    {
        if (not_in(new_arr, i, arr[i]))
        {
            new_arr[i] = arr[i];
        }
        else
        {
            new_arr[i] = -1;
        }
    }
        
    
    // print array
    for (int i = 0; i < size; i++)
    {
        if (new_arr[i] == -1)
        {
            continue;
        }
        else
            cout << new_arr[i] << " ";
    }
    
}
int main() {
    delete_duplicate();
}