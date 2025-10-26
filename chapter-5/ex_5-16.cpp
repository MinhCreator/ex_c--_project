#include "iostream"

using namespace std;

string odd_digit(string input) {

    string odd_store = "";

    for (char i : input){
        if ((int) i % 2 != 0){
            odd_store += i;
        }
    }
    return (odd_store != "") ? odd_store : "N";
}


int main() {

    string input;
    cout << "Enter number: ";
    cin >> input;
    cout << odd_digit(input);
}