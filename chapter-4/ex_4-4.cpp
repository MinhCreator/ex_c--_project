#include <iostream>

using namespace std;

string check_valid_triangle_angle(float angle1, float angle2, float angle3){
    if (angle1 + angle2 + angle3 == 180.0) {
        return "valid angle of triangle";
    }
    else
        return "invalid angle of triangle";
}

int main(){
    float an1, an2, an3;

    cout << "Enter 3 angle: ";
    cin >> an1 >> an2 >> an3;

    cout << "angle of triangle: " << check_valid_triangle_angle(an1, an2, an3);
}