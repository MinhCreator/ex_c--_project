#include <iostream>

using namespace std;

double convert_money(double usd, double currencies) {
    return usd * currencies;
}

int main() {

    double usd;
    int opt;
    cout << "enter usd you want to convert: ";
    cin >> usd;
    cout << "enter option 1 -> 4 usd to other currencies: ";
    cin >> opt;

    switch (opt) {
        case 1:
            cout << "usd -> euro: " << convert_money(usd, 0.879121);
            break;
        case 2:
            cout << "usd -> jpy: " << convert_money(usd, 107.4345);
            break;
        case 3:
            cout << "usd -> GBP: " << convert_money(usd, 0.785731);
            break;
        case 4:
            cout << "usd -> vnd: " << convert_money(usd, 23286);
            break;
        default:
            cout << "invalid option";
            break;
    }
}