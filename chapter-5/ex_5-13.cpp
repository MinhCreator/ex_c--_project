#include <iostream>

using namespace std;

void matrix_sign(int width, int height) {

    for (int i = 0; i < height; i++) {

        for (int jdex = 0; jdex < width; jdex++)
        {   
            cout << "* ";
        }

        cout << endl;
    }
}

int main() {

    int width, height;
    cout << "Enter width and height: ";
    cin >> width >> height;
    matrix_sign(width, height);
}