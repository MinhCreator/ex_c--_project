#include <iostream>
#include <vector>
using namespace std;


auto resize_del_arr(auto arr, int size) {
    
}

vector<int> create_arr(int size) {
    vector<int> arr_numb;
    
    for (int index = 0; index < size; i++) {
        int num;
        cout << "Enter element of " << i + 1 << " : ";
        cin >> num;
        
        arr_numb.push_back(num);
    }
    return arr_numb;
}