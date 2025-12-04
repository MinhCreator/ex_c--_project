#include <iostream>
#include <algorithm>
using namespace std;

void init_arr()
{
    int row, col;

    cout << "Enter number of rows: ";
    cin >> row;
    cout << "Enter number of columns: ";
    cin >> col;

    int arr[row][col];

    // add element to row and columns
    for (int i = 0; i < row; i++)
    {
        cout << "Enter element " << "row " << i + 1 << ":" << endl;
        for (int j = 0; j < col; j++)
        {
            cout << "Enter element " << "column " << j + 1 << ": ";
            cin >> arr[i][j];
        }
    }

    // sum of entered row from keyboard
    int sub_row, sum_row;
    cout << "Enter index row you want calculated: " << endl;
    cin >> sub_row;
    if (sub_row < row && sub_row >= 0)
    {
        for (auto i : arr[sub_row])
        {
            sum_row += i;
        }
        cout << "Sum of entered row: " << sum_row << endl;
    }
    else
    {
        cout << "Index out of range" << endl;
        return;
    }

    // sum of entered column from keyboard
    int sub_col, sum_col;
    cout << "Enter index column you want calculated: " << endl;
    cin >> sub_col;
    if (sub_col < col && sub_col >= 0)
    {
        for (int i = 0; i < row; i++)
        {
            sum_col += arr[i][sub_col];
        }
        cout << "Sum of entered column: " << sum_col << endl;
    }
    else
    {
        cout << "Index out of range" << endl;
        return;
    }

    // largest row and smallest row
    int row_n;
    cout << "Enter index row you want get largest and smallest element: " << endl;
    cin >> row_n;
    if (row_n < row && row_n >= 0)
    {
        int sub_l_row = *max_element(arr[row_n], arr[row_n] + col);
        int sub_m_col = *min_element(arr[row_n], arr[row_n] + col);
        cout << "Largest element: " << sub_l_row << endl;
        cout << "Smallest element: " << sub_m_col << endl;
    }
    else
    {
        cout << "Index out of range" << endl;
        return;
    }

    // largest column and smallest column
    int col_m;
    cout << "Enter index column you want get largest and smallest element: " << endl;
    cin >> col_m;
    if (col_m < col && col_m >= 0)
    {
        int sub_large_col, sub_small_col = -1;
        int sub_arr[row];
        for (int i = 0; i < row; i++)
        {
            sub_arr[i] = arr[i][col_m];
        }
        sub_large_col = *max_element(sub_arr, sub_arr + row);
        sub_small_col = *min_element(sub_arr, sub_arr + row);
        cout << "Largest element: " << sub_large_col << endl;
        cout << "Smallest element: " << sub_small_col << endl;
    }
    else
    {
        cout << "Index out of range" << endl;
        return;
    }
}

int main()
{
    init_arr();
}