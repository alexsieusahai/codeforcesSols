#include <iostream>
#include <cmath>

using namespace std;

int main()  {
    int n;
    int cases = 1;
    int input;
    while (cin >> n)    {
        cout << "Case " << cases << ": " << ceil(1+log10(3*(pow(3,n)/pow(2,n)))) << '\n';
        cases += 1;
    }
    return 0;
}
