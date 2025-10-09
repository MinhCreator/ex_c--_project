#include <iostream>
#include <cmath>
using namespace std;

int check_year(int month, int year)
{

    int ar[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (400 % (year / 100) == 0)
    {
        return ar[month - 1];
    }

    else
        return 0;
}

int main()
{
    int month, year;
    cout << "Enter month and year: ";
    cin >> month >> year;
    cout << check_year(month, year) << " days" << endl;
}