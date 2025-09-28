#include <iostream>

using namespace std;

int main() {
    float kt_d1, kt_d2, kt_d3, mid_term_ex, final_ex;

    cout << "==========Exam Scores==========" << endl;
    cout << "Enter exam score 1: " << endl;
    cin >> kt_d1;
    cout << "Enter exam score 2: " << endl;
    cin >> kt_d2;
    cout << "Enter exam score 3: " << endl;
    cin >> kt_d3;

    cout << "==========Midterm Exam Scores==========" << endl;
    cout << "Enter midterm exam score: " << endl;
    cin >> mid_term_ex;

    cout << "==========Final Exam Scores==========" << endl;
    cout << "Enter final exam score: " << endl;
    cin >> final_ex;

    cout << "Total of exam scores: " << kt_d1 + kt_d2 + kt_d3 << endl;
    cout << "Midterm exam scores: " << mid_term_ex << endl;

    cout << "Final exam scores: " << final_ex << endl;
}