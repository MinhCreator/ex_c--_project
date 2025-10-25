#include <iostream>
#include <algorithm>
using namespace std;

string palin(string input) {

    string message = " is a palindrome";

    string tmp = input;
    reverse(tmp.begin(), tmp.end());

    return (tmp == input)
               ? input + message
               : input + " isn't a palindrome";
}


int main() {
    string number;
    cout << "Enter the number: ";
    cin >> number;
    cout << palin(number);
}