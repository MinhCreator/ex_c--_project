#include <iostream>
#include <string>
#include <vector>
using namespace std;

auto PolydivisibleNumber(int number) {

    if (to_string(number)[0] == '0') return false;

    vector<bool> isDivisible;
    int length = to_string(number).length();

    while (number > 0)
    {
        if (number % length == 0) {
            isDivisible.push_back(true);
           
        } else {
            isDivisible.push_back(false);
        }
        number /= 10;
        length--;
    }

    for (int i = 0; i < isDivisible.size(); i++) {
        cout << isDivisible[i] << " \n"; // "%d is not Polydisisible number\n"
        if (isDivisible[i] == false)
            return false;
    }
    return true;
    
}


int main() {

    int number;
    cout << "Enter number: ";
    cin >> number;
    
    if (PolydivisibleNumber(number)) {
        cout << number << " is Polydivisible number\n";
    } else {
        cout << number << " is not Polydivisible number\n";
    }
}