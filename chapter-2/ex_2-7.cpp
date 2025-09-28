#include <iostream>
#include <array>
using namespace std;

array<double, 2> rectangle_cal(double width, double height) {
    double perimeter = 2 * (width + height);
    double area = width * height;
    
    return { perimeter, area };
}

int main () {

    double width, height;
    cout << "Enter rectangle width and height: \n";
    cin >> width >> height;
    array<double, 2> results = rectangle_cal(width, height);
    cout << "perimeter: " << results[0] << "\n";
    cout << "area: " << results[1] << "\n";
}