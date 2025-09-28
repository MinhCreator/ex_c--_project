#include <iostream>
#include <cmath>

double cot(double x)
{
    return 1.0 / tan(x);
}

using namespace std;

int main() {

    double angle_degree;

    cout << "Enter degree angle: ";
    cin >> angle_degree ;
    //angle_degree ;
    cout << "sine: " << sin(angle_degree)  << endl;   //* 180/M_PI;
    cout << "cosine: " << cos(angle_degree)  << endl; //* 180/M_PI;
    cout << "tangent: " << tan(angle_degree)  << endl; //* 180/M_PI;
    cout << "cotangent: " << cot(angle_degree)  << endl; //* 180/M_PI;
}