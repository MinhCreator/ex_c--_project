#include <iostream>
#include "vector"
#include "algorithm"
using namespace std;

auto sort_vec_increase(int number) {

    vector<int> result;

    for (char strings: to_string(number)) {

        result.push_back(strings - '0');
    }

    sort(result.begin(), result.end());

    return result;
}

auto sort_vec_decrease(int number) {
    auto sort_ = sort_vec_increase(number);

    reverse(sort_.begin(), sort_.end());

    return sort_;
}

int main() {

    int number;
    cout << "Enter number: ";
    cin >> number;

    for (auto i: sort_vec_increase(number))
    {
        /* code */
        cout << i << " ";
    }

    for (auto i : sort_vec_decrease(number))
    {
        /* code */
        cout << i << " ";
    }
}