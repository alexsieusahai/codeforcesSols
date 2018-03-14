#include <iostream>

using namespace std;

int main()  {
    long long int N,K,bigNum = 0,maxHamsters=0,ind=1;
    cin >> N >> K;
    for (int i = 0; i < K; ++i)	{
	long long int t,c;
	cin >> t;
	c = N-(N%t);
	if (c > maxHamsters)	{
	    maxHamsters = c;
	    bigNum = N/t;
	    ind = i+1;
	}
    }
    cout << ind << ' ' << bigNum;
    return 0;
}

