#include <iostream>
#include <cmath>
using namespace std;

double circle_perimeter(double radius) {
    return 2 * M_PI * radius;
}
double circle_area(double radius) {
    return M_PI * radius * radius;
}
int main () {
    double radius;
    cout << "Enter circle radius: ";
    cin >> radius;
    cout << "Circle perimeter: " << circle_perimeter(radius) << "\n";
    cout << "Circle area: " << circle_area(radius) << "\n";
    return 0;
}