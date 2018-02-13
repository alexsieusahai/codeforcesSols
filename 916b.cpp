#include <iostream>
#include <queue>
#include <cassert>

using namespace std;

int main()  {
    long long int n,k;
    cin >> n >> k;
    // get bit representation
    long long int numBits = 0;
    priority_queue<long long int> bits;
    for (int i = 0; i < 64; ++i)    {
	if ((n >> i) & 1)	{
	    bits.push(i);
	    //cout << "pushed " << i << endl;
	    numBits++;
	}
    }
    if (numBits > k)  {
	cout << "No";
	return 0;
    }
    while (numBits != k)    {
	long long int a = bits.top();
	bits.pop();
	bits.push(a-1);
	bits.push(a-1);
	numBits++;
    }
    cout << "Yes" << endl;
    while (!bits.empty())  {
	cout << bits.top() << ' ';
	bits.pop();
    }
    return 0;
}

