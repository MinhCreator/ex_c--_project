#include <iostream>

using namespace std;
string check_two_rectangle(float length1, float width1, float length2, float width2) {
    float area = length1 * width1;
    float area2 = length2 *width2;
    
    if (length1 * width1 == length2 * width2) {
        return "Same";
    }
    else {
        return (area > area2) ? "area is greater" : "area2 is greater"; 
    }
    
}

int main() {
    float l1, w1, l2, w2;

    cout << "Enter length and width of rectangle 1: ";
    cin >> l1 >> w1;
    cout << "Enter length and width of rectangle 2: ";
    cin >> l2 >> w2;

    cout << check_two_rectangle(l1, w1, l2, w2);
}