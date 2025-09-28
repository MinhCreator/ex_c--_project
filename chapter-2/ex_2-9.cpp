#include <iostream>

using namespace std;

double triangle_angle(double an1, double an2) {

    return 180 - (an1 + an2);
}


int main() {

    double an1, an2;

    cout << "Enter two angles of a triangle: ";
    cin >> an1 >> an2;
    cout << "The third angle is " << triangle_angle(an1, an2) << " degrees.";

    return 0;
}