#include "iostream"
#include "vector"
using namespace std;

/**
 * @brief Calculate prime factors of a given number
 * @param number The number to find prime factors of
 * @return A vector of prime factors
 */
auto PrimeFactorization(int number) {
    int idx = 2; vector<int> listNumber;

    while (number > 1) {

        // If the number is divisible by idx, add idx to listNumber
        // and divide the number by idx
        if (number % idx == 0) 
        {
            number /= idx; listNumber.push_back(idx);
        }// If not, increment idx by 1
        else idx += 1;
    }
    // If listNumber is empty, add the number to listNumber
    if (listNumber.size() == 0){ listNumber.push_back(number); }
    return listNumber;
}

/**
 * @brief Dup prime factors of a given number to a vector
 * @param number The number to dump prime factors of
 * @return A vector of prime factors
 */
auto dupProcces(int number) {
    auto listNumber = PrimeFactorization(number); vector<int> result; int duplication, dupCount = 0;

    // Iterate through listNumber and add each number to result
    // If the number is not equal to duplication, add it to result
    // Otherwise, increment dupCount
    for (auto numbr : listNumber) {

        if (numbr != duplication) { result.push_back(numbr); duplication = numbr; } else dupCount += 1;
    }
    // If dupCount is greater than 1, add it to result
    if (dupCount > 1) result.push_back(dupCount + 1);
    return result;
}

/**
 * @brief Check if a given number is economical
 * @param number The number to check
 * @return 1 if the number is "Equidigital", 2 if the number is "Frugal" but has the same number of digits as the number of its prime factors, and 3 is "Wastefull"
 */
auto isEconomical(int number) {
    string StrNumber = to_string(number); auto listNumber = dupProcces(number);
    
    // If StrNumber has the same size as listNumber, the number is economical
    if (StrNumber.size() == listNumber.size()) return 1;
    // If StrNumber has more digits than listNumber, the number is not economical
    else if (StrNumber.size() > listNumber.size()) return 2;
    // Otherwise, the number is not economical
    else return 3;
}

int main() {

    int number;
    cout << "Enter number: ";
    cin >> number;
    
    cout << isEconomical(number);

}
