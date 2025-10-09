#include <iostream>
#include <complex>
#include <string>

using namespace std;

pair<complex<double>, complex<double>> findQuadraticRoots(double a, double b, double c)
{
    /*
    Finds the roots of a quadratic equation ax^2 + bx + c = 0.
    Handles real and complex roots.
    */
    if (a == 0)
    {
        if (b == 0)
        {
            if (c == 0)
            {
                throw runtime_error("Infinitely many solutions");
            }
            else
            {
                throw runtime_error("No solution");
            }
        }
        else
        {
            return make_pair(-c / b, 0); // Linear equation
        }
    }

    double discriminant = (b * b) - 4 * a * c;

    if (discriminant >= 0)
    {
        complex<double> root1 = (-b - sqrt(discriminant)) / (2 * a);
        complex<double> root2 = (-b + sqrt(discriminant)) / (2 * a);
        return make_pair(root1, root2);
    }
    else
    {
        // Complex roots
        complex<double> root1 = (-b - sqrt(complex<double>(discriminant))) / (2 * a);
        complex<double> root2 = (-b + sqrt(complex<double>(discriminant))) / (2 * a);
        return make_pair(root1, root2);
    }
}
int main()
{
    double a, b, c;
    cout << "enter a, b, c: ";
    cin >> a >> b >> c;
    pair<complex<double>, complex<double>> x = findQuadraticRoots(a, b, c);
    cout << x.first << x.second;
}
