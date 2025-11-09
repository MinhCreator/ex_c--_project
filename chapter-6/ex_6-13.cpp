#include <iostream>

using namespace std;

// manuplate swap value using pointer

void swap (int *a, int *b) {

    int temp = *a;
    *a = *b;
    *b = temp;

}


int main() {

    int a, b;
    cout << "Enter a: " << endl;
    cin >> a;
    cout << "Enter b: " << endl;
    cin >> b;
    cout << "Before swap: \n";
    cout << "a = " << a << ", b = " << b << "\n";
    swap(&a, &b);
    cout << "After swap: \n";
    cout << "a = " << a << ", b = " << b << "\n";
}