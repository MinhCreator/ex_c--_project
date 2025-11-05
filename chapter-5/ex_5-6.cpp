#include <iostream>

using namespace std;

string reverse_number(int n){
    string store = "";
    for (int i = n; i > 0; i--)
    {
        cout << " " << i;
        store += " " + i;
    }
    return store;
}


// int main() {
//     int n;
//     cout << "Enter n: ";
//     cin >> n;

//     cout << reverse_number(n);
    
// }