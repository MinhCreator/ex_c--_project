#include "fstream"
#include "ex_5-4.cpp"
#include "ex_5-5.cpp"
#include "ex_5-6.cpp"
#include "ex_5-7.cpp"
#include "ex_5-8.cpp"
#include <iostream>

using namespace std;

void out_file(string path, string data_out_file) {

    ofstream output;
    output.open(path, ios::out);

    output << data_out_file;

    output.close();

}


int main() {

    out_file("ex_5_18.txt", "1.2.3.4.5.6.7.8.9.10.11.12.13.14.15.16.17.18.19.20.");
}