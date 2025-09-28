#include <iostream>

using namespace std;

int main () {
    double tax, tip, Tbill, meal_cost = 88.67;
    tax = meal_cost * .0675;
    tip = (meal_cost + tax) * .20;
    Tbill = meal_cost + tax + tip;
    cout << "Meal cost = $" << meal_cost << endl;
    cout << "Tax = $" << tax << endl;
    cout << "Tip = $" << tip << endl;
    cout << "bill = $" << Tbill << endl;
    return 0;
}