#include <iostream>
#include <string>
using namespace std;

int main() {
    char getinp;
    cout << "enter a character: ";
    cin >> getinp;

    if (isalpha(getinp)) 
    {
        cout << "A";
    }
    
    else if (isdigit(getinp))
    {
        cout << "D";
    }
    else if (ispunct(getinp))
    {
        cout << "S";
    }
    
    

}