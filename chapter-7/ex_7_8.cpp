#include <iostream>

using namespace std;

void ask_input()
{
    int size;
    int val;
    int index;

    cout << "Enter array size: ";
    cin >> size;
    cout << "Enter array value: ";
    cin >> val;
    cout << "Enter array index: ";
    cin >> index;

    if (size < 0)
    {
        cout << "Size cannot be negative" << endl;
       
    }
    if (index > size || index < 0)
    {
        cout << "Index out of range" << endl;
    }

    // initialize array
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        
        if (i == index)
        {
            arr[i] = val;
        }
        else
        {
            arr[i] = 0;
        }
        
    }

    // print out array
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    ask_input();
}