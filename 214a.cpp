#include <iostream>

using namespace std;

int main()  {
    // b = n-a^2
    // a + b^2 = m => a + (a^2-n)^2 = m
    // a + a^4 -2na^2+n^2 = m
    // a^4 + a -2na^2 = m-n^2 THIS IS REDUCED EQUATION
    // note b = a^2-n which only has one solution
    // the domain of a is such that a >= 0
    // the domain of b is such that b >= 0
    long long int n,m,numInts = 0;
    cin >> n >> m;
    for (int a = 0; a <= n; ++a)    {
        for (int b = 0; b <= m; ++b)    {
            if (a*a + b == n && b*b + a == m)   {
                numInts++;
            }
        }
    }
    cout << numInts;
    return 0;
}

