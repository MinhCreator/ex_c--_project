#include "iostream"

using namespace std;

auto candy_parcel(int SmallCandies, int BigCandies, int order) {
    // check order not equal to 0
    if (order <= 0)
        return 0;
    
    const int Big_parcel = 5, Small_parcel = 2;
    // check BigCandies not equal to 0
    if (BigCandies == 0) {
        // check order is even
        if (order % 2 == 0 && order / 2 <= SmallCandies)
            return order / 2;
        else
            return -1;
    }
    
    // check order is greater than Big_parcel
    int remainingOrder = order - Big_parcel;
    // check remainingOrder is greater than 0
    int smallParcel_Required = candy_parcel(SmallCandies, BigCandies - 1, remainingOrder);

    // check smallParcel_Required not equal to -1
    if (smallParcel_Required != -1)
        return smallParcel_Required;
    
    // check order is even
    if (order % 2 == 0 && order / 2 <= SmallCandies) {
        return order / 2;
    } 
    return -1;
}


int main() {

    int SmallCandies, BigCandies, order;
    cout << "Enter number of small and big candies: ";
    cin >> SmallCandies >> BigCandies;
    cout << "Enter order: ";
    cin >> order;
    cout << "Number of small and big candies required: " << candy_parcel(SmallCandies, BigCandies, order);
}