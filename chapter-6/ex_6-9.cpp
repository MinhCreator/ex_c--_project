#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

auto sievePrime(int number)
{
    std::vector<bool> isPrime(number + 1, true); // Khởi tạo tất cả là true
    isPrime[0] = isPrime[1] = false;        // 0 và 1 không phải là số nguyên tố

    for (int prime = 2; prime * prime <= number; ++prime)
    {
        // Nếu isPrime[p] vẫn là true, thì đó là số nguyên tố
        if (isPrime[prime])
        {
            // Đánh dấu tất cả các bội của p là hợp số
            for (int i = prime * prime; i <= number; i += prime)
            {
                isPrime[i] = false;
            }
        }
    }

    // In ra tất cả các số nguyên tố
    vector<int> prime;

    for (int p = 2; p <= number; ++p)
    {
        if (isPrime[p])
        {
            prime.push_back(p);
        }
    }
    return prime;
}

auto getFirstXPrime(int range, int first_x_prime) {
    auto prime = sievePrime(range);

    int product = 1;

    for (int i = 0; i < first_x_prime; i++)
    {
        // cout << prime[i] << " ";
        product *= prime[i];
    }

    cout << endl;
    cout << "Product: " << product;
}
int main() {

    int range, first_x_prime;

    cout << "Enter range: "; cin >> range;
    cout << "Enter first x prime: "; cin >> first_x_prime;

    getFirstXPrime(range, first_x_prime);    
}