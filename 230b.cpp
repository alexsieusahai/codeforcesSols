#include <iostream>
#include <cmath>

// fails on test far down the line
// probably limitations of sqrt rip
using namespace std;
const int MAX = 1000000;

bool primes[MAX+1]; 

void soa(int n) {
    // assume n is upper bound, want triple primes only
    //cout << "Sieveing for " << n << '\n';
    for (int i = 2; i <= sqrt(n); ++i) {
        if (primes[i] == true)  {
            for (int j = i*i; j <= n; j+=i)  {
                //cout << j << " is found to be nonprime\n";
                primes[j] = false;
            }
        }
    }
}


int main()  {
    int n;
    cin >> n;
    int64_t testNums[n];
    for (int i = 0; i < n; ++i) {
        cin >> testNums[i];
    }
    for (int i = 0; i < MAX+1; ++i) {
        primes[i] = true;
    }
    primes[0] = 0;
    primes[1] = 0;
    soa(MAX);
    for (int i = 0; i < n; ++i) {
        int64_t testRoot = sqrt(testNums[i]);
        if ((primes[testRoot]) &&  testRoot*testRoot == testNums[i]) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}

