#include <iostream>
#include <vector>

using namespace std;

vector<int> factors;  // save all my factors, which are my solutions

void makeFactors(vector<int> primes,int factor) {
    if (primes.size() == 0) {
        // if factor not in factors
        for (int i = 0; i < primes.size(); ++i) {
            if (factor == factors[i]) {
            }
        }
        factors.push_back(factor);
    }
        
    for (int i = 0; i < primes.size(); ++i) {
        factor *= primes[i];
        vector<int> primes1 = primes;
        primes1.erase(primes1.begin()+i);
        makeFactors(primes1, factor);
    }
}

void getFactors(int x)  {
    vector<int> primes;
    vector<int> primeOccurance;
    int i = 2;
    while (x > 1)  {
        while (x%i == 0)    {
            primes.push_back(i);
            x /= i;
            primeOccurance[i] += 1;
        }
        ++i;
    }
    // now I have all primes, generate the factors possible
}
        

int main()  {
    int x,n;
    cin >> n >> x;
    getFactors(x);
    int numOccurances = 0;
    for (int i = 0; i < factors.size(); ++i)    {
        int a = factors[i];
        cout << a << '\n';
        if (a <= n && x/a <= n)  {
            numOccurances += 1;
        }
    }
    cout << numOccurances;
    return 0;
}


