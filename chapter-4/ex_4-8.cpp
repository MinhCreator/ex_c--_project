#include <iostream>

using namespace std;

int main() {
    float quiz_s, mid_score, final_score;
    cout << "input quiz-s, mid-s and final-s: ";
    cin >> quiz_s >> mid_score >> final_score;
    float GPA = 0.2 * quiz_s + 0.3 * mid_score + 0.5 * final_score;
    
    if (GPA >= 8.5)
    {
        cout << "A";
    }
    else if (7.0 <= GPA < 8.5)
    {
        cout << "B";
    }
    else if (5.5<= GPA < 7.0)
    {
        cout << "C";
    }
    else if (4.0 <= GPA < 5.5)
    {
        cout << "D";
    }
    else
        cout << "F";
}