#include <iostream>

using namespace std;

int clock_cal (int hours, int minus) {

    return (hours * 60) + minus;
}

int main () {

    int hours, minus;

    cout << "enter hour and minus: ";
    cin >> hours >> minus;

    cout << "total minus: " << clock_cal(hours, minus);
    return 0;
}