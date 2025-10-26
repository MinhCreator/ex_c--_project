#include <iostream>

using namespace std;

int largest_odd_divisor(int num) {

    if (num == 0)
    {
        return 0;
    }
    
    while (num % 2 == 0){

        num /= 2;
    }

    return num;
}

int main() {

    int num;
    cout << "Enter the number: ";
    cin >> num;
    cout << "Largest odd divisor of " << num << " is " << largest_odd_divisor(num);
}