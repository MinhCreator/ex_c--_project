#include <iostream>
#include <array>

using namespace std;

string roman_numeral(int num) {
    string roman[10] = {"I",
                        "II",
                        "III",
                        "IV",
                        "V",
                        "VI",
                        "VII",
                        "VIII",
                        "IX",
                        "X"
                    };
    if (num > 0 && num <= 10)
    {
        return roman[num - 1];
    }
    else {
        return "Error number format";
    }

}


int main() {
    int num;
    cout << "Enter the number in range 1 -> 10: ";
    cin >> num;
    cout << "roman numeral you entered: " << roman_numeral(num);
}