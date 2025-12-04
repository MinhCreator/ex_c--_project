#include <iostream>

using namespace std;

void twoD_arr()
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
        for (int j = 0; j < col; j++)
        {
            cout << "Enter element " << "row " << i + 1 << ", " << " column " << j + 1 << ": ";
            cin >> arr[i][j];
        }
    }

    // display array
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // sum row
    int sum = 0;
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            sum += arr[i][j];
        }
        cout << "Sum of row " << i + 1 << ": " << sum << endl;
        sum = 0;
    }

    // sum columns
    for (int index_col = 0; index_col < row + 1; index_col++)
    {
        int sum_col = 0;
        for (int index_row = 0; index_row < row; index_row++)
        {
            sum_col += arr[index_row][index_col];
        }
        cout << "Sum of columns " << index_col + 1 << ": " << sum_col << endl;

    }
}

int main()
{
    twoD_arr();
}