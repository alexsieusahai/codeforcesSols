#include <iostream>

using namespace std;

int main()  {
    // try naive solution
    int n;
    cin >> n;
    if (n == 1) {
        cin >> n;
        if (n == 15)    {
            cout << "DOWN";
            return 0;
        }
        if (n == 0) {
            cout << "UP";
            return 0;
        }
        cout << "-1";
        return 0;
    }
    n = n % 30;
    int temp;
    for (int i = 0; i < n-2; ++i)   {
        cin >> temp;
    }
    // need to establish initial pattern then count down the days
    int day0,day1;
    cin >> day0 >> day1;
    bool bigger = true;
    if (day1 > day0)    {
        bigger = false;
    }
    if (day1 == 0 || day1 == 15)    {
        bigger = !bigger;
    }
    if (bigger) {
        cout << "DOWN";
    } else  {
        cout << "UP";
    }
    return 0;
}



