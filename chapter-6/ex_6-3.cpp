#include <iostream>
#include "algorithm"
#include <iomanip>
using namespace std;

double getSales(string arg){
    double sales;

    do
    {
        cout << "Enter sales for " << arg << ": ";
        cout << "division's quarterly sales figure? ";
        cin >> sales;

        if (sales < 0.00)
        {
            cout << "Sales cannot be negative or less than $0.00. Please Try again.\n";
        }

    } while (!(sales > 0.00));
    
}

void findHighest(double NE, double SE, double NW, double SW){

    double Hightest;

    cout << "\nThe Hightest grossing division is the ";

    if (NE > SE && NE > NW && NE > SW)
    {
        Hightest = NE;
        cout << "Northeast ";
    }
    else if (SE > NE && SE > NW && SE > SW)
    {
        Hightest = SE;
        cout << "Southeast ";
    }
    else if (NW > SE && NW > NE && NW > SW)
    {
        Hightest = NW;
        cout << "Northwest ";
    }
    else
    {
        Hightest = SW;
        cout << "Southwest ";
    }

    cout << fixed << showpoint << setprecision(2);
    cout << "division with $" << Hightest << " in sales.\n";
}

int main() {

    double NE, SE, NW, SW;
    cout << "Program to detect which company's \n"
         << "four division had the greatest sales.";
    NE = getSales("Northeast") ;
    SE = getSales("Southeast");
    NW = getSales("Northwest");
    SW = getSales("Southwest");
    findHighest(NE, SE, NW, SW);
}