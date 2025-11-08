#include <iostream>
using namespace std;
double getLength();
double getWidth();
double getArea(double &, double &);
void displayData(double &, double &, double &);

int main()
{
    double length, // The rectangle's length
        width,     // The rectangle's width
        area;      // The rectangle's area

    // Get the rectangle's length.
    length = getLength();

    // Get the rectangle's width.
    width = getWidth();

    // Get the rectangle's area.
    area = getArea(length, width);

    // Display the rectangle's data.
    displayData(length, width, area);

    return 0;
}
double getLength(){
    
    double length;
    cout << "Enter the rectangle's length: ";
    cin >> length;
    return length;
}

double getWidth()
{
    double width;
    cout << "Enter the rectangle's width: ";
    cin >> width;
    return width;
}

double getArea(double &l, double &w)
{
    return l * w;
}

void displayData(double &l, double &w, double &a){
    cout << "Length: " << l << " | Width: " << w << " | Area: " << a << '\n'; 
}