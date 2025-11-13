#include <iostream>
#include "vector"
using namespace std;

int odd_sum(int number){
    
    int sum = 0;
    vector<int> oddDigits;

    for (int i = 0; i < to_string(number).length(); i++)
    {
        if (to_string(number)[i] % 2 == 1)
        {
            oddDigits.push_back(to_string(number)[i] - '0');
        }
    }
    
    for (int i = 0; i < oddDigits.size(); i++)
    {
        sum += oddDigits[i];
    }
    
    return sum;
}

int taxi_fare(int distance) {
    int fare = 0;

    for (int i = 1; i <= distance; i++)
    {

        if (i >= 1 && i < distance - 2) {
            fare += 30000;
        }
        if (i >= distance - 2 && i < distance - 4) {
            fare += 20000;
        }                
        if (i > distance - 4) {
            fare += 15000;
        }
        
        // cout << fare << endl;
        
    }
    return fare;
}
int main() {

    // int number;
    // cout << "Enter number: ";
    // cin >> number;
    // cout << "Sum of odd digits: " << odd_sum(number);

    int distance;
    cout << "Enter distance: ";
    cin >> distance;
    cout << "Taxi fare: " << taxi_fare(distance);
}