#include <iostream>

using namespace std;

int main() {
    double v0, accel, time;

    cout << "Enter velocity, acceleration and time: ";

    cin >> v0 >> accel >> time;

    double v = v0 + (accel * time);

    cout << "Final velocity: " << v;
}