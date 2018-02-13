#include <iostream>

using namespace std;

int main()  {
    long long int n,k;
    cin >> n >> k;
    for (int i = 1; i <= k; ++i)    {
	if (n % i != i-1)   {
	    cout << "No";
	    return 0;
	}
    }
    cout << "Yes";
    return 0;
}
