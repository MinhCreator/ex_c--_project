#include <iostream>
#include "vector"

using namespace std;

int main() {
    const int employees = 6;
    vector<int> hours{employees};

    for (int i = 0; i < employees; i++)
    {
        cout << "Enter the worked hours of " << i + 1 << " employee: ";
        cin >> hours[i];
    }
    
    for (int i = 0; i < employees; i++)
    {
        cout << "The working hours of " << i + 1 << " employee is " << hours[i] << endl;
    }

}