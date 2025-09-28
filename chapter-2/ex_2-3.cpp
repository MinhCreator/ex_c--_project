#include <iostream>

using namespace std;

int main () {
    double riseCM, riseIN, riseMM = 3.1 * 20;
    riseCM = riseMM * 0.1;
    riseIN = riseMM * 0.0393701;
    cout << "ocean rise: \n";

    cout << riseCM <<  "cm per year. \n";
    cout << riseIN <<  "in per year. \n";
    return 0;
}