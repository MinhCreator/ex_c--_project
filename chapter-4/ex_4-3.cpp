#include <iostream>

using namespace std;

int main() {
    int day, month, year;
    cout << "Enter day, month, year: ";
    cin >> day >> month >> year;

    if (year == day * month){
        cout << "the date is magic";
    }
    else
        cout << "the date is not magic";
}