#include <iostream>
#include <cmath>

#define PI 3.14159265358979323846

using namespace std;

// use pointer to find the area of a circle

void circle_area(float *radius, float *area) {
    
    *area = PI * *radius * *radius;
}

int main() {

    float radius, area;
    
    cout << "Enter circle radius: "; cin >> radius;
    
    circle_area(&radius, &area);
    cout << "Circle area: " << area << endl;
}