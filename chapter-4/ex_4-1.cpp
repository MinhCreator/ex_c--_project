#include <iostream>

using namespace std;

int check_number(int number) { 
    if (number >= 0 )
    {
        /* code */ cout << "You entered the positive number: " << number;
    }
    else {
        cout << "You entered the negative number: " << number;
    }

    
}

int main() {
    int numb;
    cout << "Please enter any integer number you want: ";
    cin >> numb;
    cout << check_number(numb);
}