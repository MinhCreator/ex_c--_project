#include <iostream>

using namespace std;

string print_alphabet(int range = 127) {
    string alphabet = "";
    for (int i = 48; i <= range; i++) {
        
        cout << " " << (char)i << endl;
        alphabet += " " + (char)i;
    }
    return alphabet;
}
// int main() {

//     print_alphabet();

// }