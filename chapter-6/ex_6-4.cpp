#include <iostream>

using namespace std;

int cal_sum_in_number(int n) {

    double digit;
    double sum = 0;
    double index = n;

    while (n > 0)
        
    {
        digit = n % 10;
        sum += digit;
        n /= 10;
    }

    return sum;
    
}
int bigest_number(int n, int m){
    if (n > m){
        return 0;
    }

    double max = 0;
    double final_num;
    for (int i = n; i <= m; i++)
    {

        //  cout << cal_sum_in_number(i) << endl;
        if (cal_sum_in_number(i) > max)
        {
            max = cal_sum_in_number(i);
            final_num = i;
            if (cal_sum_in_number(final_num) == cal_sum_in_number(m))
            {
                final_num = m;
            }
        }
    }
    return final_num;
}

int main()
{

    int n, m;
    cout << "Enter n and m: ";
    cin >> n >> m;
    
    cout << bigest_number(n, m);
}