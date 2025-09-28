#include <iostream>
#include <array>

using namespace std;

array<int, 3> convert_date(int day) {
    int year, months, days;

    return { year = day /365, months = (day % 365) / 30, days = (day % 365) % 30 };
}

int main () {
    int days;
    cout << "Enter days: ";
    cin >> days;
    array<int, 3> results = convert_date(days);
    cout << results[0] << " years, " << results[1] << " months, " << results[2] << " days.\n";

    return 0;
}