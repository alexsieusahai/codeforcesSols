#include <iostream>
#include <cassert>

using namespace std;


int main()  {
    int A,B,k,n;
    long long int coin = 0;
    cin >> n >> k >> A >> B;
    while (n)  {
	int mult = 0;
	while (!(n % k))    {
	    n /= k;
	    coin += B;
	    mult++;
	}
	if (mult > 1) n *= k;
	int a = n % k;
	coin += A*a;
	n -= a;
	cout << n << endl;
    }
    cout << coin << endl;
    return 0;
}

