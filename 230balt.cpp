#include <iostream>

using namespace std;

int soa(int n)  {
    // find all primes up to bigNum, and sieve out all multiples of the prime

int main()  {
    int n,bigNum=0;
    cin >> n;
    int testNums[n];
    for (int i = 0; i < n; ++i) {
        cin >> testNums[i];
        if (testNums[i] > bigum)    {
            bigNum = testNums[i];
        }
    }
    soa(bigNum);
    for (int i = 0; i < n; ++i) {
        bool ans = primes[testNums[i]];
        if (ans)    {
            cout << "YES\n";
        } else  {
            cout << "NO\n";
        }
    }
    return 0;
}
