#include <iostream>

using namespace std;


void print_word(string number) {

    string numbers[10] = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };

    for (char i : number) {

        // convert character to integer by subtracting ASCII value of '0'
        // so '0' becomes 0, '1' becomes 1, and so on
        // then use this integer as index to access string in numbers array
        cout << numbers[(int)(i - '0')] << " ";

        
    }


}



int main() {

    string number;
    cout << "Enter the number: ";
    cin >> number;
    print_word(number);
}