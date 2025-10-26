#include <iostream>
#include <cmath>
using namespace std;


void armstrong(int number){
    
    int num, digit, sum, count;
    
    num = number;
    sum = 0;
    
    while (num > 0)
    {
        digit = num % 10;
        sum += pow(digit, 3);
        num /= 10;
    }
    
    if (sum == number)
    {
        cout << number << " is an astrong number\n";
    }
    else
        cout << number << " is not an astrong number\n";
}

void prime(int number){

    int count;

    for (int i = 2; i <= sqrt(number); i++)
    {
        if (number % i == 0)
        {
            count += 1;
        }
    }

    if (count == 2){
        cout << number << " is prime\n";
    }
    else cout << number << " isn't prime\n";
}

void menu_display(){

    int opt;
    int opt_in_opt3;

    // 22 *
    do
    {
        cout << "************************" << endl;
        cout << "*      1. Armstrong    *" << endl;
        cout << "*      2. Prime        *" << endl;
        cout << "*      3. Finish       *" << endl;
        cout << "************************" << endl;
        cout << " Enter option(1, 2, 3): ";
        cin >> opt;

        if (opt == 1)
        {
            int number;
            cout << "Enter number: ";
            cin >> number;
            armstrong(number);
        }
        else if (opt == 2)
        {
            int number;
            cout << "Enter number: ";
            cin >> number;
            prime(number);
        }
        else if (opt == 3)
        {
            
            cout << "Do you want to continue? (1 for yes, 0 for no): " << endl;
            cin >> opt_in_opt3;
            if (opt_in_opt3 == 1)
            {
                cout << "See you later!" << endl;
            }
            
        }

    } while (opt_in_opt3 != 0);

}

int main() {
    menu_display(); 
}